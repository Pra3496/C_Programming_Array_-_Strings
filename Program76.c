
/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : Minimum
//  Input         : Integer (Size of Array, Elements)
//  Output        : Boolean (False/True)
//  Description   : Accept N number from user and chech the number is present or not Array.
//                  Input  : 5   3    
//                           5   2   3   4
//                  Output : 2
//  Date          : 01/04/2021
//  Author        : Pranav Anil Waghmare
//
/////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int Arr[], int iLength)
{
    int i = 0;
    if(Arr == NULL)
    {   return false;   }

    for(i = 0; i < iLength ;i++)
    {
        if(Arr[i] == 11)
        {   break;  }
    }
    if(i == iLength)
    {        return false; }
    else
    { return true;  }
}
int main()
{
    int *arr = NULL;
    int i = 0, iSize = 0;
    bool bRet = false;
    
    printf("Enter number of elements\n");
    scanf("%d",&iSize);
    arr = (int*)malloc(iSize*sizeof(int));
    printf("Enter the elements\n");
    for(i = 0; i<iSize; i++)
    {
        scanf("%d",&arr[i]);
    }

    bRet = Search(arr,iSize);
    if(bRet == true)
    {
        printf("11 is there in the array\n");
    }
    else
    {
        printf("There is no 11 in the array\n");
    }
    free(arr);
    return 0;
}
