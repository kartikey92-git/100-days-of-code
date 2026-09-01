//  Q45: Write a program to find the sum of the series:
//  2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

#include <stdio.h>
int main() 
{
    int n, i;
   float num, den, t, s = 0;
    
    printf("Enter a number: ");
    scanf("%d", &n);

	for (i = 2; i <= n; i++) 
	{
	  num =2*i;
	  den=4*i-1;
	  t=num/den;
	  s=s+t;
	}
	  printf("Sum = %f\n", s);
}