#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{

    printf("請輸入你的帳號：");
    char acc[100];
    char acc2[100];
    strcpy(acc,"git clone https://github.com/");
    scanf("%s",acc2);
    strcat(acc,acc2);
    strcpy(acc2,"/2021cce");
    strcat(acc,acc2);
    system(acc);                                                        ///系統執行git clone

    system("cd 2021cce && dir");                                               ///將位置遷移到2021cce
    printf("檔案放好後請輸入1:");
    int n=0;
    scanf("%d",&n);
    if(n==1)system("cd 2021cce && git add . ");										 ///git add

    printf("請輸入email:");
    char Email[100];
    scanf("%s",Email);
    char git1[200];
    strcpy(git1,"git config --global user.email \"");
    strcat(git1,Email);
    strcpy(Email,"\"");
    strcat(git1,Email);
    system(git1);                                                ///輸入email

    printf("請輸入名稱:");
    char name[100];
    scanf("%s",name);
    strcpy(git1,"cd 2021cce && git config --global user.name \"");
    strcat(git1,name);
    strcpy(name,"\"");
    strcat(git1,name);
    system(git1);                                               ///輸入名稱

    printf("請輸入欲說明的文字:");
    char text[500],com[600]="cd 2021cce && git commit -m \"";
    scanf("%s",text);
    strcat(text,"\"");
    strcat(com,text);
    system(com);                                                   ///git commit 存檔
    system("git push");                                         ///最後的git push
}
