/*删除数组中的重复元素*/
#include <stdio.h>
#include <stdlib.h>
#include <time>
int main()
{
    int arr[]={10,344,22,10,28,99,98,99,99,100,102,2,6};
    int len=sizeof(arr)/sizeof(arr[0]);
    // printf("%d\n",len);
    int i=0,j=0,k=0;
    for(i=0;i<len-1;i++)
    {
        for(j=len-1;j>i;j--)
        {
            if(arr[i]==arr[j])
            {
                for(k=j+1;k<len;k++)
                {
                    arr[k-1]=arr[k];
                }
                len--;
            }
        }
    }

    for(i=0;i<len;i++)
    {
        printf("%4d",arr[i]);
    }
    printf("\n");
    return 0;
}