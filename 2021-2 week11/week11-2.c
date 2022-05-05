#include<stdio.h>
char line[100];
int main()
{
    FILE *fin=fopen("input.txt","r");
    int T;
    fscanf(fin,"%d",&T);
    printf("現在讀到%d\n",T);
    while(fgets(line,100,fin))
    {
        printf("讀取到了:%s =\n",line);
    }
}
