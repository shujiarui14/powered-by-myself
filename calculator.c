#include <stdio.h>

int main()
{
    int num1;
    int num2;
    char operator=0;
    int anser;
    printf("please input 2 numbers and operator use space key \n");
    scanf("%d %c %d",&num1,&operator,&num2);
    switch(operator)
    {
        case '+':
        anser=num1+num2;
        printf("anser=%d\n",anser);
        break;

        case '-':
        anser=num1-num2;
        printf("anser=%d\n",anser);
        break;

        case '*':
        anser=num1*num2;
        printf("anser=%d\n",anser);
        break;

        case '/':
        anser=num1/num2;
        printf("anser=%d\n",anser);
        break;

        case '%':
        anser=num1%num2;
        printf("anser=%d\n",anser);
        break;
        default:
        printf("i just support addtion subtraction multiplication dilvsion and remainder\n");
        break;
        return 0;
        
    }
}