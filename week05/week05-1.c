#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a>=90&&a<=100)printf("A+");
    if(a<90&&a>=80)printf("A");
    if(a<80&&a>=70)printf("B");
    if(a<70&&a>=60)printf("C");
    if(a<60)printf("D");
}
