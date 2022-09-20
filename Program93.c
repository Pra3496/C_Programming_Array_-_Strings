
/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : Reverse
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

void Reverse(char str[])
{
    char *start, *end;
    char temp;
    if(str == NULL)
    {return;}
    start = str;
    end = str;
    while(*end != '\0') // for(; *end != '\0'; end++);
    {
        end++;
    }
    end--;  // 105
    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
int main()
{
    char Arr[10];
    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);
    Reverse(Arr);
    printf("Reverse string is : %s\n",Arr);
    return 0;
}
