#include<stdio.h>
char line[100];
int main()
{
    FILE *fin=fopen("input.txt","r");
    int T;
    fscanf(fin,"%d",&T);
    printf("�{�bŪ��%d\n",T);
}
