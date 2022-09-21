
/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : strcpyrevX
//  Input         : Charecter (Array)
//  Output        : String
//  Description   : Accept String from user and Copy Reverse String to Another Array.
//                  Input : Pranav
//                  Output : vanarP
//  Date          : 01/04/2021
//  Author        : Pranav Anil Waghmare
//
/////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void strcpyrevX(char src[], char dest[])
{
    int iCnt = 0;
    if(src == NULL || dest == NULL)
    {
        return;
    }                                           // iCnt = 0
    
    while(*src != '\0')                 //  a   b   c   d   \0
    {
        src++;
        iCnt++;                           //    d   c   b   a   \0
    }
    src--;
    while(iCnt > 0)
    {
        *dest = *src;
        src--;
        dest++;
        iCnt--;
    }
    *dest = '\0';
}
int main()
{
    char arr[20];
    char brr[20];
    
    printf("Enter string\n");
    scanf("%[^'\n']s",arr);
    
    strcpyrevX(arr,brr);   // strcpyX(100,200)
        
    printf("After copy strinng is : %s\n",brr);
    
    return 0;
}
