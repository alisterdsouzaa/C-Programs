//////////////////////////////////////////////////////////////////////
// Problem Statement 2 : Accept number from user and display pattern.
////////////////////////////////////////////////////////////////////////

// ip = 5
// op = 5  # 4 #  3 #  2 # 1

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo; iCnt>=1; iCnt--)
    {
        printf("%d\t",iCnt);
        printf("#\t");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements :");
    scanf("%d", &iValue);

    Pattern(iValue);
    return 0; 
}