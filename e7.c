//What is the 10 001st prime number?
//10th March 2013
//Author:-Avinash Kumar Dasoundhi

//Solution:-
#include<stdio.h>

int prime(int num)
{
	int i,k=0;
	for(i=2;i<num/2;i++)
	{
		if(num%i==0)
		{
			k++;
			break;
		}
	}
	if(k==1)
		return 0;
	else
 		return 1;
}
int main()
{
	int num=3,ans=0,count=1,d;
	while(count<=10001)
	{
		if(prime(num)==1)
		{
			count++;
			ans=num;
		}
		num++;
	}
	printf("%d",ans);
}

