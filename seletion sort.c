#include<stdio.h>
void main()
{
    int n,i,j,temp,location,min;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
        min=a[i];
        location=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<min)
            {
                min=a[j];
                location=j;
            }
        }
        if(location!=i)
            {
                temp=a[i];
                a[i]=a[location];
                a[location]=temp;
            }
    }

    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}
