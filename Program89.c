
/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : strlwrX
//  Input         : Charecters (String before nextline)
//  Output        : String
//  Description   : Accept N charecters from user and Change charecters 
//                  which is upper case to lower case and lower case to upper case in string.
//                  Input  : Pranav Anil Waghmare 
//                  Output : pRANAV aNIL wAGHMARE
//  Date          : 01/04/2021
//  Author        : Pranav Anil Waghmare
//
/////////////////////////////////////////////////////////////////////////////////////////////



#include<stdio.h>
// Input : ABcD@123
// Output : abCd@123
void strtoggleX(char str[])
{
    if(str == NULL)
    {return;}
    
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
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
    strtoggleX(Arr);   // struprX(100);
    printf("Updated string is: %s\n",Arr);
    return 0;
}
