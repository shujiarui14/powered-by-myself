#include <stdio.h>
int main()
{
    char a;
    printf("input a value\n");
    scanf("%c",&a);
    getchar();

    if(a>=' '&&a<='/')
    {
      printf("#\n");
    }
    else if(a>='A'&&a<='Z')
    {
      a+=32;
      printf("%c\n",a);
    }
    else if(a>='a'&&a<='z')
    {
        a-=32;
        printf("%c\n",a);
    }
    else if(a>='0'&&a<='9')
    {
        a-='0';
        a*=10;
        printf("%d\n",a);
    }
    else
    printf("!\n");
    return 0;

}