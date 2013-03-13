//Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
//10th march 2013
//Author:-Avinash Kumar Dasoundhi

//Solution:-
#include<stdio.h>
int main()
{
	int i,j,sum1=0,sum2=0,sum3,diff;
	for(i=1;i<=100;i++)
	{
		sum1=sum1+(i*i);
	}
	for(j=1;j<=100;j++)
	{
		sum2=sum2+j;
		sum3=sum2*sum2;
	}
	diff=sum3-sum1;
	printf("%d",diff);
	return 0;
}

