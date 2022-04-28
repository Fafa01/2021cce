#include<stdio.h>
class Student
{
public:
    char name[20];
    int grade;
};
Student student[100];
int main()
{
    FILE * fin=fopen("input.txt","r");
    int N;
    fscanf(fin,"%d",&N);
    for(int i=0;i<20;i++)
    {
        fscanf(fin,"%s %d",student.name[i],&student.grade[i]);
    }

    for(int k=0;k<N-1;k++)
    {
        for(int i=0;i<N-1;i++)
        {
           if(student.grade[i]<student.grade[i+1])
           {
               Student temp=student[i];
               student[i]=student[i+1];
               student[i+1]=temp;
           }
        }
    }
    for(int i=0;i<N;i++)
    {
        printf("%s %d\n",name[i],grade[i]);
    }

}
