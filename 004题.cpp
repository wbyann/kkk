#include<stdio.h>
int main()
{
	int N;
	int m,n,n1,n2;		//n,n1,n2是买到的瓶数 
	int x,y;	//x是买3瓶的套餐数 y是买5瓶的套餐数	
	scanf("%d",&N);
	m=N%80;
	x=N/30;
	y=N/50;
	if(m!=0)
	{
		n1=4*x+(N%30)/10;
		n2=7*y+(N%50)/10;
		if(n1>=n2)
		{
			n=n1;
		}
		else n=n2;		
	}
	if(m==0)
	{
		n=11*(N/80);
	}
	printf("%d",n); 
	return 0;
}
