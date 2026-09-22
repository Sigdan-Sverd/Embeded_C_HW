/*
 * Task4.c
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
	int a;
	int sum;
	scanf ("%d", &a);
	sum = a%10;
	sum += (a/10)%10;
	sum += (a/100)%10;
	printf ("%d\n",sum);
	//printf ("Has he lost his mind?\n");
	//printf ("Can he see, or is he blind?\n");
	//printf ("Can he walk at all?\n");
	//printf ("Or if he moves, will he fall?\n");
	return 0;
}

