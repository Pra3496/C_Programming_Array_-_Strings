

//////////////////////////////////////////////////////////////////////////////////
//
//  Function name : Minimum
//  Input         : Integer (Size of Array, Elements)
//  Output        : Integer (Elements from Array)
//  Description   : Accept N number from user and display 
//                  the minimum of elements from Array.
//                  Input  : 5   3    
//                           5   2   3   4
//                  Output : 2
//  Date          : 01/04/2021
//  Author        : Pranav Anil Waghmare
//
//////////////////////////////////////////////////////////////////////////////////



#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[], int iLength)
{
    int i = 0, iMin = 0;
    if(Arr == NULL)
    {
        return -1;
    }
    iMin = Arr[0];
    for(i = 0; i < iLength ;i++)
    {
        if(Arr[i] < iMin)
        {
            iMin = Arr[i];
        }
    }
    return iMin;
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

    iRet = Minimum(arr,iSize);
    printf("Smallest number is: %d\n",iRet);
    
    free(arr);
    return 0;
}
