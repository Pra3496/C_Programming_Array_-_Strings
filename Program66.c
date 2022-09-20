
//////////////////////////////////////////////////////////////////////////////////
//
//  Function name : Display
//  Input         : Integer (Size of Array, Elements)
//  Output        : Integer (Number of Elements from Array)
//  Description   : Accept N number from user and display the elements from Array.
//                  Input  : 5      
//                           5   2   3   4
//                  Output : 5   2   3   4
//  Date          : 01/04/2021
//  Author        : Pranav Anil Waghmare
//
//////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>
void Display(int Arr[], int iSize)                         
{
    int i = 0;
    printf("Elements from the array are : \n");
    for(i=0; i< iSize; i++)
    {
        printf("%d\n",Arr[i]);
    }
}

int main()
{
    int *arr = NULL;                                             /
    int iLenth = 0, i = 0;
    
    printf("Enter the number of elements\n");       
    scanf("%d",&iLenth);
    arr = (int*)malloc(iLenth * sizeof(int));           
    
    printf("Enter the elements\n");                       
    for(i = 0; i< iLenth; i++)
    {
        scanf("%d",&arr[i]);
    }
    Display(arr,iLenth);               
    free(arr);                                                      
    return 0;
}

