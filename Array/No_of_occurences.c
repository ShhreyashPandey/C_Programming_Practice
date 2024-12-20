#include <stdio.h>
int main()
{
    int n;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int a[n],count,i,key;
    count=0;
    for (i=0;i<n;i++)
    {
        printf("Enter element : ");
        scanf("%d",&a[i]);
    }
    printf("Enter key : ");
    scanf("%d",&key);
    for (i=0;i<n;i++)
    {
        if (a[i]==key)
        {
            count=count+1;
        }
    }
    if (count==0)
    {
        printf("Element not found\n");
    }
    else 
    {
        printf("Element found\n");
    }
    printf("The number of occurence is : %d",count);
    return 0;
}
