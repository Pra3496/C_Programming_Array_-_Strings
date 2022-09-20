

//////////////////////////////////////////////////////////////////////////////////
//
//  Function name : LastOccurance
//  Input         : Integer (Size of Array, Elements)
//  Output        : Integer (Elements from Array)
//  Description   : Accept N number from user and display 
//                  the Last occurance of element in Array.
//                  Input  : 5   3    
//                           5   2   3   4
//                  Output : 2
//  Date          : 01/04/2021
//  Author        : Pranav Anil Waghmare
//
//////////////////////////////////////////////////////////////////////////////////



#include<stdio.h>
#include<stdlib.h>

int LastOccurance(int Arr[], int iLength, int iValue)
{
    int i = 0;;
    for(i = iLength-1; i>=0; i--)
    {
        if(Arr[i] == iValue)
        {
            break;
        }
    }
    return i;
}
int main()
{
    int *arr = NULL;
    int i = 0, iSize = 0,iRet = 0, iNo = 0;
    
    printf("Enter number of elements\n");
    scanf("%d",&iSize);
    arr = (int*)malloc(iSize*sizeof(int));
    printf("Enter the elements\n");
    for(i = 0; i<iSize; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element that you want to search\n");
    scanf("%d",&iNo);
    iRet = LastOccurance(arr,iSize,iNo);
    if(iRet == -1)
    {
        printf("There is no such number\n");
    }
    else
    {
        printf("Last occurance is at: %d\n",iRet);
    }
        free(arr);
    return 0;
}
