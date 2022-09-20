
/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : Display
//  Input         : Charecters (String before nextline)
//  Output        : String
//  Description   : Accept String from user and display it revers manner.
//                  Input  : Pranav Anil Waghmare 
//                  Output : eramhgaW linA vanarP
//  Date          : 01/04/2021
//  Author        : Pranav Anil Waghmare
//
/////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void Display(char str[])
{
    int iCnt = 0;
    if(str == NULL)
    {return;}
    while(*str != '\0')
    {
        iCnt++;
        str++;
    }
    str--;
    for(  ; iCnt > 0; iCnt--, str--)
    {
        printf("%c",*str);
    }
    printf("\n");
}

int main()
{
    char Arr[10];
    int iRet = 0;
    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);
    Display(Arr);
    return 0;
}
