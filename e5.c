//What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
//10th March 2013
//Author:-Avinash Kumar Dasoundhi

//Solution:-
#include<stdio.h>
int main()
{
	int num;
	for(num=1;num<=300000000;num++)
	{
		if(num%20==0&&num%19==0&&num%18==0&&num%17==0&&num%16==0&&num%15==0&&num%14==0&&num%13==0&&num%12==0&&num%11==0)
		printf("%d",num);
	}
	return 0;
}
