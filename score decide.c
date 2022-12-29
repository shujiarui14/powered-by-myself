#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
// #define _ctr_secure_no_warnings 1

int main()
{
    int score;
    int t;
    printf("please input you score(0-100)\n");
    scanf("%d",&score);
    t=ceil (score/10);
    // getchar();
    switch (t)
    {
    case 10:
    case 9:
    printf("your score is A\n");
    break;
    case 8:
    printf("your score is B\n");
    break;
    case 7:
    printf("your score is C\n");
    break;
    case 6:
    printf("your score is D\n");
    break;
    
    default:
    printf("not pass this test :-)");
        break;
    }

}