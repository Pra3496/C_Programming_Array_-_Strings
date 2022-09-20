
/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : CountCap
//  Input         : Charecters (String before nextline)
//  Output        : Integer
//  Description   : Accept N charecters from user and display 
//                  count of whithSpaces in string.
//                  Input  : Pranav Anil Waghmare 
//                  Output : 2
//  Date          : 01/04/2021
//  Author        : Pranav Anil Waghmare
//
/////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountCap(char str[])
{
    int iCnt =0;
    if(str == NULL)
    {        return 0; }
    while(*str != '\0')
    {
        if(*str == ' ')
        {   iCnt++; }
        str++;
    }
    return iCnt;
}
int main()
{
    char Arr[10];
    int iRet = 0;
    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);
    
    iRet = CountCap(Arr);   // Display(100)
    printf("Frequency of whitespace is: %d\n",iRet);
    return 0;
}
