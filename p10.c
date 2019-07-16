#include<stdio.h>
int main()
{
    int arr1[20],n,i;
    int arr2[20],m,j;
    int count=0;
    printf("Enter no of terms arr1: ");
    scanf("%d",&n);
    printf("Enter the array1: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter no of terms arr2: ");
    scanf("%d",&m);
    printf("Enter the array2: ");
    for(j=0;j<m;j++)
    {
        scanf("%d",&arr2[j]);
    }
    for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(arr1[i]==arr2[j])
                {
                    count+=1;
                }
            }
        }
        if(count==m)
            {
                printf("yes");
        }
        else
            {
                printf("No");
        }
}

