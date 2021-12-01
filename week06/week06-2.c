#include<stdio.h>
int main()
{
    int a=999,b=1000,c;
    c=b;
    printf("a:%d b=%d\n",a,b);
    b=a;
    a=c;
    printf("a:%d b=%d",a,b);
}
