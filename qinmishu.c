#include<stdio.h>
int main()
{
	int i,x,y,z;
	for(i=1;i<3000;i++){
		for(y=0,x=1;x<=i/2;x++)
			if((i%x)==0)
				y+=x;
		for(z=0,x=1;x<=y/2;x++)	
			if((y%x)==0)
			z+=x;
		if(z==i && i<y)
		printf("%4d的亲密数是%4d\n",i,y);
	}
	
}