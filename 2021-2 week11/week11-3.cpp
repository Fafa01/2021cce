#include<stdio.h>
#include <map>
#include<string>
#include<string.h>
char line[100];
int main()
{
    FILE *fin=fopen("input.txt","r");
    int T;
    fscanf(fin,"%d",&T);
    printf("�{�bŪ��%d\n",T);
    std::map<std::string,int>table;
    while(fgets(line,100,fin))
    {
        line[strlen(line)-1] =0;
        printf("Ū����F:%s =\n",line);
        table[line]++;
    }
}
