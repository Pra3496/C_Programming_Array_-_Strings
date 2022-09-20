
/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : main
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

int main()
{
    char Arr[40];
    
    printf("Enter your name\n");
    scanf("%[^'\n']s",Arr);
    
    printf("Your name is : %s\n",Arr);
    
    return 0;
}
