#include<stdio.h>
int main()
{
    int a[]={6,5,3,2,1,0,6,6};
    int n=sizeof(a)/sizeof(a[0]),i,j,key;
    for(i=1;i<n;i++)

    {
        key=a[i];
        j=i-1;
        while(j>=0 & a[j]>key)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    }
