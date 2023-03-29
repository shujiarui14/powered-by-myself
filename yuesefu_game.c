#include <stdio.h>

int a = 0;//c代表被扔下船的人数
int i = 1;
int j = 0;
int out[15] = { 0 };
 
int main()
{
    while (i<=31)
    {
        if (i == 31)
            i = 1;
        else if (a == 15)
            break;
        else
        {
            if (out[i] != 0)
            {
                i++;
                continue;
            }
            else
            {
                j++;
                if (j != 9)
                {
                    i++;
                    continue;
                }
                else 
                {
                    out[i] = 1;
                    j = 0;
                    printf("第%d号下船了\n", i);
                    i++;
                    a++;
                }
            }
        }
    }
}