#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
void daofang(int arr[],int x,int y)
{
    int i=0,j=x-1,k=y-1;
    int tmp;
    while(j<=k)
    {
        tmp=arr[j];
        arr[j]=arr[k];
        arr[k]=tmp;
        j++;
        k--;
    }
}


void paixu(int arr[],int n)
{
    int i=0,j=0;
    int temp;
    int flag=0;
    for(i=0;i<n;i++)
    {

        flag=1;
        for(j=0;j<=n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=0;
            }
        }
        if(flag==1)
        break;
    }
}


int erjinzhi(int arr[],int target)
{
    int i=0;
    while(target!=0)
    {
        arr[i]=target%2;
        target/=2;
        i++;
    }
    return i;
}
int bajinzhi(int arr[],int target)
{
    int i=0;
    while(target!=0)
    {
        arr[i]=target%8;
        target/=8;
        i++;
    }
    return i;
}
int shiliujinzhi(int arr[],int target)
{
    int i=0;
    while(target!=0)
    {
        arr[i]=target%16;
        if(arr[i]==10)
        arr[i]='A';
        else if(arr[i]==11)
        arr[i]='B';
        else if(arr[i]==12)
        arr[i]='C';
        else if(arr[i]==13)
        arr[i]='D';
        else if(arr[i]==14)
        arr[i]='E';
        else if(arr[i]==15)
        arr[i]='F';
        target/=16;
        i++;
    }
    return i;
}
int jinweizhizhuanhuan(int arr[],int x,int y)
{
    int tmp=0;
    switch(x)
    {
        case 2:
        tmp=erjinzhi(arr,y);
        break;

        case 8:
        tmp=bajinzhi(arr,y);
        break;

        case 16:
        tmp=shiliujinzhi(arr,y);
        break;
    }
    return tmp;
}
void jiou(int arr[],int x)
{
    int i=0,j=x-1,k=0;
    int tmp[x];
    while(i<=j)
    {
        if(arr[k]%2==0)
        {
            tmp[i]=arr[k];
            i++;
        }
        else
        {
            /* code */
            tmp[j]=arr[k];
            j--;
        }
        k++;
    }
    for(i=0;i<x;i++)
    {
        arr[i]=tmp[i];
        // printf("test");
    }
}

void paixu1(int arr[],int n)
{
    int i=0,j=0,temp=0;
    for(;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

void zuheshuzu(int arr[],int array[],int target[],int x,int y)
{
    int i=0,j=y;
    for(;i<x;i++)
    {
        target[i]=arr[i];
    }
    for(i=0;j<x+y;j++,i++)
    {
        target[j]=array[i];
    }
}

#define row 3
#define col 3
int shangsanjiao(int arr[][col],int x,int y)
{
    int sum=0;
    int i=0,j=0;
    for(;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            if(j>=i)
            {
                sum+=arr[i][j];
            }
        }
    }
    return sum;
}

int fib(int n)
{
    int y;
    if(n==1)
    {
        y=1;
    }
    else if(n==2)
    {
        y=1;
    }
    else
    {
        y=fib(n-1)+fib(n-2);
    }
    return y;
}
