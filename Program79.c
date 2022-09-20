

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

#include<stdio.h>

void Display(char str[])
{
    int iCnt = 0;
    printf("Charcters from string are\n");
    
    while(str[iCnt] != '\0')
    {
        printf("%c\n",str[iCnt]);
        iCnt++;
    }
}



int main()
{
    char Arr[50];
    
    printf("Enter your name\n");
    fgets(Arr,50,stdin);        // Hello
  
    Display(Arr);   // Display(100)
    
    return 0;
}
