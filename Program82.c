
/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : CountA
//  Input         : Charecters (String before nextline)
//  Output        : Integer
//  Description   : Accept N charecters from user and display 
//                  count of charecter occur in string.
//                  Input  : Pranav Anil Waghmare 
//                  Output : 1
//  Date          : 01/04/2021
//  Author        : Pranav Anil Waghmare
//
/////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int CountA(char str[])
{
    int iCnt =0;
    if(str == NULL)
    {        return 0; }
    while(*str != '\0')
    {
        if(*str == 'a')
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
    
    iRet = CountA(Arr);   // Display(100)
    printf("Frequency of a is: %d\n",iRet);
    return 0;
}
