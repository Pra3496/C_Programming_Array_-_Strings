
/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : DisplayASCII
//  Output        : Integers (Charecter, ASCII value, octal value, Hex-Decimal value)
//  Description   : Accept String from user and display it revers manner.
//                  Output : @   64  100 40
//                           A   65  101 41
//                           B   66  102 42
//                           C   67  103 43
//
//  Date          : 01/04/2021
//  Author        : Pranav Anil Waghmare
//
/////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void DisplayASCII()
{
    int i = 0;
    
    printf("--------------------------------------------------\n");
    printf("ASCII Table\n");
    printf("--------------------------------------------------\n");
    for(i = 0; i <= 128; i++)
    {
        printf("%c\t%d\t%o\t%x\n",i,i,i,i);
    }
    printf("--------------------------------------------------\n");
}
int main()
{
    DisplayASCII();
    return 0;
}
