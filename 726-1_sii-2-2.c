#include <stdio.h>

int main ()
{
int k,n,b,c,w ;
n=0;
b=0;
c=0;
w=0;
k=0;
scanf ( "%d", &n);
do
{
scanf ( "%d", &b);
c=b+c;
w=w+n;
n=n-1;
}
while (n!=0);
k=c-w;
printf ("%d\n", k);



return 0;
}
