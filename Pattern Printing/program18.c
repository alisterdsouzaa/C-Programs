// Triangle Pattern  (Optimized loop)

// Input  
// ie) Row 4 Column 4.

/*

  *
  * *           i >= j  //Solution.
  * * *         
  * * * *
  
*/

#include<stdio.h>

void Pattern(int iRow, int iColumn)
{
    int i = 0, j = 0;
  if(iRow != iColumn)  // filter 
    {
        printf("Invalid Input : ");
        return;
    } 

    for(i = 1; i<=iRow; i++) 
    {
        for(j =1; j<=i; j++) // Optimized loop 
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
        

