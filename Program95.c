
/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : strcpyX
//  Input         : Charecter (Array)
//  Output        : String
//  Description   : Accept String from user and Copy String to Another Array.
// 				    Input : Pranav
//				    Output : Pranav
//  Date          : 01/04/2021
//  Author        : Pranav Anil Waghmare
//
/////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void strcpyX(char src[], char dest[])
{
    if(src == NULL || dest == NULL)
    {
        return;
    }
    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}
int main()
{
    char arr[20];
    char brr[20];
    
    printf("Enter string\n");
    scanf("%[^'\n']s",arr);
    
    strcpyX(arr,brr);   // strcpyX(100,200)
        
    printf("After copy strinng is : %s\n",brr);
    
    return 0;
}
