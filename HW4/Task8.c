/*
 * Task8.c
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
	float X1, Y1, X2, Y2, K, B;
	scanf ("%f%f%f%f", &X1, &Y1, &X2, &Y2);
	K = (Y2-Y1)/(X2-X1);
	B = Y1 - K * X1;
	printf ("%.2f %.2f\n", K, B);	
	////printf ("Has he lost his mind?\n");
	////printf ("Can he see, or is he blind?\n");
	////printf ("Can he walk at all?\n");
	////printf ("Or if he moves, will he fall?\n");
	return 0;
}

