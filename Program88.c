
/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : strlwrX
//  Input         : Charecters (String before nextline)
//  Output        : String
//  Description   : Accept N charecters from user and Change charecters to upper case in string.
//                  Input  : Pranav Anil Waghmare 
//                  Output : PRANAV ANIL WAGHMARE
//  Date          : 01/04/2021
//  Author        : Pranav Anil Waghmare
//
/////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void struprX(char str[])
{
    if(str == NULL)
    {return;}
    
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        str++;
    }
}

int main()
{
    char Arr[10];
    int iRet = 0;
    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);
    struprX(Arr);   // struprX(100);
    printf("Updated string is: %s\n",Arr);
    return 0;
}
