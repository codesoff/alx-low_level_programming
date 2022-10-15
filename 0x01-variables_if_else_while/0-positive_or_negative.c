#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/**
 *main - main block
 *get random number
 *if it is positive, negative, or zero
 *Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n>0)
	
        printf("%d is positive", n);
	
	else if(n=0)
	
        prinf("%d is zero", n);
	 
	else (n<0)

        printf("%d is negative", n);
	
	return (0);
}
