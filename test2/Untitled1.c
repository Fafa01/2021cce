#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{

    printf("�п�J�A���b���G");
    char acc[100];
    char acc2[100];
    strcpy(acc,"git clone https://github.com/");
    scanf("%s",acc2);
    strcat(acc,acc2);
    strcpy(acc2,"/2021cce");
    strcat(acc,acc2);
    system(acc);                                                        ///�t�ΰ���git clone

    system("cd 2021cce && dir");                                               ///�N��m�E����2021cce
    printf("�ɮש�n��п�J1:");
    int n=0;
    scanf("%d",&n);
    if(n==1)system("cd 2021cce && git add . ");										 ///git add

    printf("�п�Jemail:");
    char Email[100];
    scanf("%s",Email);
    char git1[200];
    strcpy(git1,"git config --global user.email \"");
    strcat(git1,Email);
    strcpy(Email,"\"");
    strcat(git1,Email);
    system(git1);                                                ///��Jemail

    printf("�п�J�W��:");
    char name[100];
    scanf("%s",name);
    strcpy(git1,"cd 2021cce && git config --global user.name \"");
    strcat(git1,name);
    strcpy(name,"\"");
    strcat(git1,name);
    system(git1);                                               ///��J�W��

    printf("�п�J����������r:");
    char text[500],com[600]="cd 2021cce && git commit -m \"";
    scanf("%s",text);
    strcat(text,"\"");
    strcat(com,text);
    system(com);                                                   ///git commit �s��
    system("git push");                                         ///�̫᪺git push
}
