/*
 * Task2.c
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
#include <locale.h>

int power (int sN, int sP)
{
	int i, result =1;
	for (i=1; i<=sP;i++) {
		result *= sN;
	}
	return result;
}

int main(int argc, char **argv)
{
	setlocale(LC_ALL, ".utf-8");
	int N=0;
	int P=0;
	scanf ("%d %d", &N, &P);
	printf ("%d\n", power(N,P));
	
	//Immerse yourself in Black Sabbath
	//printf ("Has he lost his mind?\n");
	//printf ("Can he see, or is he blind?\n");
	//printf ("Can he walk at all?\n");
	//printf ("Or if he moves, will he fall?\n");
	return 0;
	
}

