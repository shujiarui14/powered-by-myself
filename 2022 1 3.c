#include <stdio.h>
int main()
{
    char arr1[]="hello narcissus";
    char arr2[]="!!!!!!!!!!!!!!!";
    int left=0;
    int right=sizeof(arr1)/sizeof(arr1[0])-2;
     
    while(left<=right)
    {
    arr2[left]=arr1[left];
    arr2[right]=arr1[right];
    printf("%s\n",arr2);
    left++;
    right--;
    }
    return 0;
}