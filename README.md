## 2021cce
#for learning
#其他練習用


```C
#include<stdio.h>
int main(){
  printf("Hellow World\n");
  return 0;
}

```

```C++
#include<iostream>
using namespace std;
int main(){
  cout<<"Hellow World";
  return 0;
}

``` 

```java
class 10160792{
  public static void main(String args[]){
    System.out.println("Hellow World");
   }
 }
 
 ```

```C
//week11-1
#include<stdio.h>
int a[10000000];
int main()
{
    int b,ans=0;
    scanf("%d",&b);
    for(int i=2;i<b;i++)
    {
        if(a[i]==0)
        {
            ans++;
            printf("%d ",i);
            for(int j=i+i;j<b;j=j+i)
            {
                a[j]=1;
            }
        }
    }
    printf("\n質數總個數：%d",ans);
}

```
```C
//week11-2
#include<stdio.h>
int a[10000000];
int main()
{
    int b,ans=0;
    printf("請問你想要幾個質數(數字請給小一點):");
    scanf("%d",&b);
    for(int i=2;ans<b;i++)
    {
        if(a[i]==0)
        {
            printf("%d ",i);
            ans++;
            for(int j=i+i;j<10000000;j=j+i)
            {
                a[j]=1;
            }
        }
    }
}
```
```C
//week11-3
#include<stdio.h>
int a[10]={9,8,7,6,5,4,3,2,1,0};
int main()
{
    for(int i=0;i<10;i++)printf("%d ",a[i]);
    printf("\n");
    for(int i=1;i<10;i++)
    {
        for(int j=0;j<9;j++)
        {
            if( a[j]>a[j+1] )
            {
                a[j]^=a[j+1]^=a[j]^=a[j+1];
            }
        }
        for(int k=0;k<10;k++)printf("%d ",a[k]);
        printf("\n");
    }
    for(int i=0;i<10;i++)printf("%d ",a[i]);
}
```
```C
//week11-4
#include<stdio.h>
int a[100];
int main()
{
	for(int i=0;i<100;i++)scanf("%d",&a[i]);
	for(int i=0;i<=99;i++)
	{
		for(int j=0;j<99;j++)
		{
			if(a[j]>a[j+1])a[j]^=a[j+1]^=a[j]^=a[j+1];
		}
	}
	for(int i=0;i<100;i++)printf("%d\n",a[i]);
}
```
