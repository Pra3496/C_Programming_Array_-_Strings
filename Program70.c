
//////////////////////////////////////////////////////////////////////////////////
//
//  Function name : EvenCount
//  Input         : Integer (Size of Array, Elements)
//  Output        : Integer (Elements from Array)
//  Description   : Accept N number from user and display 
//                  the count of elements which is even from Array.
//                  Input  : 5      
//                           5   2   3   4
//                  Output : 2
//  Date          : 01/04/2021
//  Author        : Pranav Anil Waghmare
//
//////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

int EvenCount(int Arr[], int iLength)
{
    int iCnt = 0, i = 0;
    
    for(i = 0; i< iLength; i++)
    {
        if((Arr[i] % 2) == 0)
        {
            iCnt++;
        }
    }
    return iCnt;
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
    iRet = EvenCount(arr,iSize);
    printf("Even elements are : %d\n",iRet);
    free(arr);
    return 0;
}
