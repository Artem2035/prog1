#include <stdio.h>
#include <math.h>

void kvadrat(double a,double b, double c)
{
    int d = 0;
    d = b*b-4*a*c;
    if(d >= 0)
    {
	if(d == 0)
	{
	    int x;
	    x = -b/2*a;
	     printf("x1 = %d\n",x);
	}
	else
	{
	    int x1,x2;
	    x1 = (-b+sqrt(d))/2*a;
	    x2 = (-b-sqrt(d))/2*a;
	    printf("x1 = %d x2 = %d\n",x1,x2);
	}
	
    }
    else
	printf("Error!\n");
}
