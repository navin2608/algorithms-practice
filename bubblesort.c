#include<stdio.h>
int main()
{
    int a[]={59,23,98,12,78,179};
    int n=sizeof(a)/sizeof(a[0]),i,j,temp;
    for (i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if (a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }}
    }
    for( i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }}
