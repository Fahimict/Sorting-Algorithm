#include<stdio.h>
int main()
{
    int a[100],n,i,flag1=0,flag2=0;
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])///Check Ascending order.
        {
            flag1++;break;
        }
    }
    for(i=0;i<n-1;i++)
    {
        if(a[i]<a[i+1])///Check Descending order
        {
            flag2++;break;
        }
    }

    if(flag1==0)
        printf("The array is sorted in ascending order.\n");
    else if(flag2==0)
        printf("The array is sorted in descending order.\n");
    else
        printf("The array is not sorted\n");
    return 0;
}
