
/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : strcatX
//  Input         : Charecter (Array)
//  Output        : Boolean (True/False)
//  Description   : Accept String and Charecter from user and Check charecter present or Not.
//                  Input : Pranav Waghmare     h
//                  Output : Character found
//                  Input : Pranav Waghmare     x
//                  Output : Character Not found
//  Date          : 01/04/2021
//  Author        : Pranav Anil Waghmare
//
/////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
//#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str, char  ch)
{
    while (*str != '\0')
    {
        if (*str == ch)
        {
            break;
        }
        str++;
    }
    

    if (*str != '\0')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char arr[20];
    char cValue ='\0';
    BOOL bRet = FALSE;

    printf("Enter String\n");
    scanf("%[^'\n']s",arr);

    printf("Enter the character\n");
    scanf(" %c",&cValue);

    bRet = ChkChar(arr,cValue);

    if (bRet == TRUE)
    {
        printf("Character found");
    }
    else
    {
        printf("Character not found");
    }

    return 0;
}
