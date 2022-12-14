//////////////////////////////////////////////////////////////////////////////////
//
//  Function name : SumElements
//  Input         : Integer (Size of Array, Elements)
//  Output        : Integer (Sum of Elements from Array)
//  Description   : Accept N number from user and display the Sum of elements
//                  from Array.
//                  Input  : 5      
//                           5   2   3   4
//                  Output : 14
//  Date          : 01/04/2021
//  Author        : Pranav Anil Waghmare
//
//////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

int SumElements(int Arr[], int iLength)
{
    int iSum = 0, i = 0;
    
    for(i = 0; i< iLength; i++)
    {
        iSum = iSum + Arr[i];
    }
    return iSum;
}
int main()
{
    int *arr = NULL;
    int i = 0, iSize = 0,iRet = 0;
    
    printf("Enter number of elements\n");
    scanf("%d",&iSize);
    
    arr = (int*)malloc(iSize*sizeof(int));
    
    printf("Enter the elements\n");
    for(i = 0; i<iSize; i++)
    {
        scanf("%d",&arr[i]);
    }
    iRet = SumElements(arr,iSize);
    printf("Summation of all the elemets is : %d\n",iRet);
    free(arr);
    return 0;
}
