
/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : strlenX
//  Input         : Charecters (String before nextline)
//  Output        : String
//  Description   : Accept N charecters from user and display array of charecters(String).
//                  Input  : Pranav Anil Waghmare 
//                  Output : Pranav Anil Waghmare
//  Date          : 01/04/2021
//  Author        : Pranav Anil Waghmare
//
/////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int strlenX(char str[])
{
    int iCnt = 0;
    
    while(*str != '\0')
    {
        iCnt++;
        str++;
    }
    return iCnt;
}


int main()
{
    char Arr[10];
    int iRet = 0;
    printf("Enter your name\n");
    scanf("%[^'\n']s",Arr);
    //fgets(Arr,10,stdin);        // Hello
  
    iRet = strlenX(Arr);   // Display(100)
    printf("String length is : %d\n",iRet);
    return 0;
}
