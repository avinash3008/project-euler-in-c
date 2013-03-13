//Find the largest palindrome made from the product of two 3-digit numbers.
//8th March 2013
//Author:-Avinash Kumar Dasoundhi

//Solution:-
#include<stdio.h>

int pal(int prod)
{
	int b,c=0,d;
	d=prod;
	while(prod>0)
	{
		b=prod%10;
		c=c*10+b;
		prod=prod/10;
	}
	if(d==c)
	return 1;
	else
	return 0;
}

int main()
{
	int i,j,prod;
	int s=0;
	for(i=100;i<=999;i++)
	{
		for(j=100;j<=999;j++)
		{
			prod=i*j;
			if(pal(prod)==1)
				if(prod>s)
					s=prod;
					
		}
	}
	printf("%d\n",s);
	return 0;
}
			

