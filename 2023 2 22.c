#include <stdio.h>
int main()
{
    int number = 0;
    int count = 0;
    int sum = 0;
    int i = 0;

    printf("请输入十个整型数字：");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &number);
        if (number > 0)
        {
            count++;
            sum += number;
        }
    }

    printf("非负数的个数为：%d, 非负数的和为：%d\n", count, sum);
    return 0;
}
