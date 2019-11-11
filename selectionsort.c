#include<stdio.h>
int main()
{
    int a[]={59,23,98,12,78,179},i,j,temp,n,min;
    n=sizeof(a)/sizeof(a[0]);

    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        temp=a[min];
        a[min]=a[i];
        a[i]=temp;
    }

for(i=0;i<n;i++)
{
    printf("%d ",a[i]);
}
}
