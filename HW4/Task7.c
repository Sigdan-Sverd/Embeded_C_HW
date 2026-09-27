/*
 * Task7.c
 * 
 * 
 * This program has no productive purpose and 
 * has no recommendation  for use WHAT SO EVER 
 * 
 * If you ever come across this...  
 * May God bless your soul
 * 
 * 
 */


#include <stdio.h>
#include <inttypes.h>

int main(int argc, char **argv)
{
	int scan,a,b,c,max;
	scanf ("%d", &scan);
	a = scan%10;
	b = (scan/10)%10;
	c = (scan/100)%10;
	max = a > b ? a : b;
	max = max > c ? max : c;
	printf ("%d\n", max);
	//printf ("Has he lost his mind?\n");
	//printf ("Can he see, or is he blind?\n");
	//printf ("Can he walk at all?\n");
	//printf ("Or if he moves, will he fall?\n");
	return 0;
}

