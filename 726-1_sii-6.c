#include <stdio.h>
#include <stdlib.h>

typedef struct list
{
int value;
int key;
struct list *left;
struct list *right;
} list;

typedef list* tree;

int init(tree *root)
{
*root = NULL;
return 1;
}

int newnode(int key, int vle, tree *root)
{
tree tmp = (*root);
tree buff = (tree)malloc(sizeof(list));
buff->key = key;
buff->value = vle;
buff->left = NULL;
buff->right = NULL;

if ((*root) == NULL)
{
(*root) = buff;
return 1;
}
while (1)
{
if (key > tmp->key)
{
if (tmp->right == NULL)
{
tmp->right = buff;
return 1;
}
tmp = tmp->right;
}
else if (key < tmp->key)
{
if (tmp->left == NULL)
{
tmp->left = buff;
return 1;
}
tmp = tmp->left;
}
else return 1;
}
}

void preorderPrint(tree root)
{
if (root == NULL) // Базовый случай
{
return;
}

preorderPrint(root->left); //рекурсивный вызов левого поддерева
printf("%d ", root->value);
preorderPrint(root->right); //рекурсивный вызов правого поддерева
}
// Функция печатает значения бинарного дерева поиска в прямом порядке.
// Вместо печати первой инструкцией функции может быть любое действие
// с данным узлом

void inorderPrint(tree root)
{
if (root == NULL) // Базовый случай
{
return;
}
preorderPrint(root->left); //рекурсивный вызов левого поддерева
printf("%d ", root->value);
preorderPrint(root->right); //рекурсивный вызов правого поддерева
}
// Функция печатает значения бинарного дерева поиска в симметричном порядке.
// То есть в отсортированном порядке

int main()
{
tree head;
init(&head);
int i, vle, key, sz;

scanf("%d", &sz);
for (i = 0; i < sz; ++i)
{
scanf("%d", &key);
scanf("%d", &vle);
newnode(key, vle, &head);
}

inorderPrint(head);
printf("\n");
return 0;
}
