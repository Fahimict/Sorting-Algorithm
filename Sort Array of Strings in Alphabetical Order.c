#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void sort(char arr[][30],int n)
{
    char temp[100];
    int i,j;

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(strcmp(arr[j],arr[j+1])>0)
            {
                strcpy(temp,arr[j]);
                strcpy(arr[j],arr[j+1]);
                strcpy(arr[j+1],temp);
            }
        }
    }

    for(i=0;i<n;i++)
        printf("%s\n",arr[i]);
}

int main()
{
    char a[100][30];
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%s",a[i]);
    sort(a,n);

    return 0;
}
