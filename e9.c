//A Pythagorean triplet is a set of three natural numbers, a < b < c, for which, a2 + b2 = c2.
//There exists exactly one Pythagorean triplet for which a + b + c = 1000.  Find the product abc
//11th March 2013
//Author:-Avinash Kumar Dasoundhi

//Solution:-
#include <stdio.h>
int main()
{
    int a=0,b=0,c=0;
    for(a=0;a<=1000;a++)
    {
        for(b=0;b<=1000;b++)
        {
            for(c=0;c<=1000;c++)
            {
                if(((a*a)+(b*b)==(c*c))&&((a+b+c)==1000))
                    printf("a=%d,b=%d,c=%d  ",a,b,c);
            }
        }
    }
return 0;    
}
