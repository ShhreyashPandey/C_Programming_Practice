#include <stdio.h>
int  main()
{
    int n;
    printf("Enter number of elements : ");
    scanf("%d",&n);
    int arr[n],i,ex;
    for (i=0;i<n;i++)
    {
        printf("Enter element : ");
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n;i++){
        if (arr[i]>arr[i+1]){
            ex=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=ex;
        }
    }
    for (i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}
