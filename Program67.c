
//////////////////////////////////////////////////////////////////////////////////
//
//  Function name : DisplayEven
//  Input         : Integer (Size of Array, Elements)
//  Output        : Integer (Number of Elements from Array)
//  Description   : Accept N number from user and display the elements
//                  which is even from Array.
//                  Input  : 5      
//                           5   2   3   4
//                  Output : 2   4
//  Date          : 01/04/2021
//  Author        : Pranav Anil Waghmare
//
//////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
void DisplayEven(int Arr[], int iLength)
{
    int i = 0;
    if((Arr == NULL) || (iLength <=0))
    {return;}
    printf("Even elements are\n");
    for(i = 0; i<iLength; i++)
    {
        if((Arr[i] % 2) == 0)
        {
            printf("%d\n",Arr[i]);
        }
    }
}
int main()
{
    int *arr = NULL;
    int i = 0, iSize = 0;
    printf("Enter the number of elements\n");
    scanf("%d",&iSize);
    arr = (int *)malloc(iSize * sizeof(int));
    if(arr == NULL)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }
    printf("Enter the elemets\n");
    for(i = 0;i<iSize; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    DisplayEven(arr,iSize); 
    free(arr);
    return 0;
}
