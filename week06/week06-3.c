#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d",&a,&b,&c);
    printf("�{�b a:%d b:%d c:%d\n",a,b,c);
    if(a<b)
    {
        d=b;
        b=a;
        a=d;
    }
    if(a<c)
    {
        d=c;
        c=a;
        a=d;
    }
    printf("�{�bA;%d b:%d c:%d\n",a,b,c);
    if(a>=b+c)
    {
        printf("���~");
        return 0;
    }
    if(a*a>b*b+c*c)printf("�w��");
    else if(a*a<b*b+c*c)printf("�U��");
    else printf("����");
}
