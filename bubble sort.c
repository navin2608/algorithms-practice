#include<stdio.h>
int main()
{
    int i,j;
    int a[5]={8,6,5,7,2};
    for (i=0;i<sizeof (a)-1;i++)
    {
        if (a[i]>a[j])
        {
            a[i]=a[j];
        }
    }printf("%d",a[0]);
}
