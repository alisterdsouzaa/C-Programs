// Character Pattern.

/* 

 * * * *
 * * *
 * *
 *

*/


#include<stdio.h>

void Pattern(int iRow, int iColumn)
{
    int i = 0, j = 0;
   
    for(i = iRow; i>=1; i--) 
    {
        for(j =1; j<=i; j++)
        {
            printf("*\t");           
        }
        printf("\n");
    }
}

int main()
{
    int iRow = 0;
    int iColumn = 0;

    printf("Enter the number of Rows :");
    scanf("%d", &iRow);

     printf("Enter the number of Columns :");
    scanf("%d", &iColumn);

    Pattern(iRow, iColumn);

    return 0;
}
        

