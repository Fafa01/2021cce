#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d",&a,&b,&c);
    printf("現在 a:%d b:%d c:%d\n",a,b,c);
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
    printf("現在A;%d b:%d c:%d\n",a,b,c);
    if(a>=b+c)
    {
        printf("錯誤");
        return 0;
    }
    if(a*a>b*b+c*c)printf("鈍角");
    else if(a*a<b*b+c*c)printf("銳角");
    else printf("直角");
}
