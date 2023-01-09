#include <stdio.h>

int main()
{
    int arr[]={9,8,1000,488,990,6,3,4444,4,44,77,678,886,5555};
    int size=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    int t;
    int temp,temp2=0;
    // printf("%d\n",size);
    for(i=0;i<size;i++)
    {
        t=i+1;
        if(arr[temp2]>=arr[t])
        {
            temp=arr[temp2];
            t++;
        }
        else
         {
          temp=arr[t];
          temp2=i+1;
         }        
    }
    // if(arr[temp2]>=arr[t])
    // printf("%d\n",arr[temp2]);
    // else
    // printf("%d\n",arr[t]);
    printf("%d\n",temp);
    return 0;
}