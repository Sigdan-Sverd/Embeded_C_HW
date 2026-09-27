/*
 * Task6.c
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

int main(int argc, char **argv)
{
	int a,b,c,d,e,max, min;
	scanf ("%d%d%d%d%d", &a,&b,&c,&d,&e);
	max = a > b ? a : b;
	max = max > c ? max : c;
	max = max > d ? max : d;
	max = max > e ? max : e;
	min = a < b ? a : b;
	min = min < c ? min : c;
	min = min < d ? min : d;
	min = min < e ? min : e;
	printf ("%d\n", max+min);
	//printf ("Has he lost his mind?\n");
	//printf ("Can he see, or is he blind?\n");
	//printf ("Can he walk at all?\n");
	//printf ("Or if he moves, will he fall?\n");
	return 0;
}

