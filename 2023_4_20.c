#include <stdio.h>

#include <math.h>

int main()

{

    double x,n;

    double arr[100]={};

    int i=0,j=0;

    double tmp,sum;

    double yy,tmp1;

    printf("请输入x的值，和x次方的值(n)\n");

    scanf("%lf %lf",&x,&n);

    double d=x,c=n;

    // printf("%f %f\n",d,c);

    // printf("x=%d\n",x);

    printf("请输入%g个系数\n",n+1);

    //printf("n=%f\n",n);

    for(i=0;i<=n;i++)

    {

        scanf("%lf",&arr[i]);

        // printf("%d\n",arr[i]);

    }

    for(i=0;i<n+1;i++)

    {

        tmp1=pow(d,c);

        // printf("tmp1=%f\n",tmp1);

        tmp=arr[i]*tmp1;

        // printf("arr=%f\n",arr[i]);

        // printf("tmp=%f\n",tmp);

        sum+=tmp;

        c--;

    }

    printf("sum=%lf\n",sum);

    return 0;

}