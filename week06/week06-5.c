#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>c)a^=c^=a^=c;
    if(a>b)a^=b^=a^=b;
    if(b>c)b^=c^=b^=c;
    printf("%d %d %d",a,b,c);
}
