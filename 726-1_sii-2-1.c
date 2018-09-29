#include <stdio.h>

int main ()

{
int n,b,c ;
n=0;
b=0;
c=0;
scanf ( "%d", &n);
do 
{
scanf ( "%d", &b);
c=b+c;
n=n-1;
}
while (n!=0);

printf ("%d\n", c);



return 0;
}
