#include<stdio.h>
int main()
{
	int N;
	int m,n,n1,n2;		//n,n1,n2���򵽵�ƿ�� 
	int x,y;	//x����3ƿ���ײ��� y����5ƿ���ײ���	
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
