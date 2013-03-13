//Find the sum of all the multiples of 3 or 5 below 1000.
//6th March 2013
//Author:- Avinash Kumar Dasoundhi

//Solution:-
#include<stdio.h>
int main()
{
	int num,sum=0;
	for(num=1;num<1000;num++)
	{
		if(num%3==0||num%5==0)
		sum=sum+num;
	}
	printf("The sum is:%d",sum);
	return 0;
}
