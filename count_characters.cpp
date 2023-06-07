
#include <stdio.h>
#define N 40
void counter_str(char s[], int &x, int &y,int &q,int &r,int z)
{
	int i = 0;
	for ( i = 0; i < z-1; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			x++;
		}
		else if (s[i] == ' ')
		{
			y++;
		}
		else if(s[i]>='0'&&s[i]<='9')
		{
			q++;
		}
		else
		{
			r++;
		}
	}
}
int main()
{
	char str[N]="";
	
	int i = 0, j = 0,k=0,q=0,z=0;
	while (str[i-1] != '\n')
	{
		str[i] = getchar();
		i++;
	}
	counter_str(str, j,k,z,q,i);
	printf("在你输入的字符中：char=%d space=%d num=%d other=%d\n", j, k,z,q);
	return 0;
}
