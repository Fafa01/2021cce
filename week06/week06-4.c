#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a<b)a^=b^=a^=b;
    if(a<c)a^=c^=a^=c;
    if(a>b+c)
    {
        printf("¿ù»~");
        return 0;
    }
    if(a*a>b*b+c*c)printf("¶w¨¤");
    else if(a*a<b*b+c*c)printf("¾U¨¤");
    else printf("ª½¨¤");
}
