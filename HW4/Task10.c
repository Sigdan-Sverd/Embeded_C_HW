/*
 * Task10.c
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
	unsigned int a;
	scanf ("%d", &a);
	if (a<=2 || a==12)
		printf ("winter");
	else if (a>2 && a<=5)
		printf ("spring");
	else if (a>5 && a<=8)
		printf ("summer");
	else if (a>8 && a<12)
		printf ("autumn");
	else 
		printf ("No such season of the year");
	////printf ("Has he lost his mind?\n");
	////printf ("Can he see, or is he blind?\n");
	////printf ("Can he walk at all?\n");
	////printf ("Or if he moves, will he fall?\n");
	return 0;
}

