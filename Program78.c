
/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : Display
//  Input         : Charecters (String before nextline)
//  Output        : String
//  Description   : Accept N charecters from user and display array of charecters(String).
//                  Input  : Pranav Anil Waghmare 
//                  Output : Pranav Anil Waghmare
//  Date          : 01/04/2021
//  Author        : Pranav Anil Waghmare
//
/////////////////////////////////////////////////////////////////////////////////////////////
//
#include<stdio.h>

void Display(char str[])
{
    printf("Charcters from string are\n");
    
    while(*str != '\0')
    {
        printf("%c\n",*str);
        str++;
    }
}





int main()
{
    char Arr[10];
    
    printf("Enter your name\n");
    //fgets(Arr,10,stdin);        // Hello
  
    Display(Arr);   // Display(100)
    
    return 0;
}
