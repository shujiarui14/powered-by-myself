#include <stdio.h>
#include <string.h>

int my_strlen(char* str)
{
    if(*str !='\0')
    return 1+my_strlen(str+1);
    else
    return 0;
}

// int my_strlen(char* n)
// {
//     int counter;
//     while(*n!='\0')
//     {
//         counter++;
//         n++;
//     }
//     return counter;
// }
int main()
{
    char name[]="narcissus";
    int len;
    len=strlen(name);
    printf("%d\n",len);
    len=my_strlen(name);
    printf("len=%d\n",len);
    return 0;
}