#include <stdio.h>
int main()
{
    int r,c,i,j;
    printf("Enter number of rows : ");
    scanf("%d",&r);
    printf("Enter number of columns : ");
    scanf("%d",&c);
    int a[r][c],b[r][c],sum[r][c],diff[r][c],trans[r][c];
   
    printf("Enter the elements of first matrix\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
       
    printf("Enter the elements of second matrix\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
        {
            scanf("%d", &b[i][j]);
        }
       
    printf("Sum of entered matrices:-\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
    printf("Difference of entered matrices:-\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            diff[i][j] = a[i][j] - b[i][j];
            printf("%d\t", diff[i][j]);
        }
        printf("\n");
    }
   
    printf("Transpose of first matrix:-\n");
    for (i = 0; i < c; i++)
        {for (j = 0; j < r; j++)
           { trans[i][j] = a[j][i];
            printf("%d\t", trans[i][j]);
           }
        printf("\n");}
    return 0;
}
