#include<stdio.h>
int main()
{
    int a[10]={8,6,3,2,1};
    int i=0,j=0,key=0;
    for (i=1;i<5;i++)
    {
        key=a[i];
        j=i-1;
        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
    }
            for(i=0;i<5;i++)
            printf("%d",a[i]);
    }

