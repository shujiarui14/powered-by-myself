#include <stdio.h>
int main()
{
    int target;
    int temp;
    int i=1;
    int arr[100]={0};
    printf("input a number\n");
    scanf("%d",&target);
    while(target!=0)
    {
        arr[i]=target%2;
        target=target/2;
        i++;
    }
    for(i=i-1;i>0;i--)
    printf("%d ",arr[i]);
    return 0;
}