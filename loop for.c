#include <stdio.h>
int mian()
{
    int arr1[10]={1,2,3,4,5,6,7,8,9,10};
    int k=7;
    // scanf("%d",&k);
    int temp=sizeof(arr1)/sizeof(arr1[0]);
    int i;
    for(i=0;i<temp;i++)
    {
        if(k==arr1[i])
        {
            printf("find it,location is %d\n",i);
            break;
        }
    }
    if(i==temp)
    printf("can not find it\n");
    return 0; 
    }

    //p7 2h 38'57''