/*
 * Task12.c
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

int main(int argc, char **argv)
{
	setlocale(LC_ALL, ".utf-8");
	int numb;
	scanf ("%d", &numb);
	if (numb < 0) {
	numb = -numb;
	}
	int max = numb % 10;
	int min = numb % 10;
	do {
		int test = numb%10;
		if (test > max) {
			max = test;
		} else if (test < min) {
			min = test;
		}
		numb /= 10;
	} while (numb != 0);
	printf ("%d %d", min, max);
	
	////printf ("Has he lost his mind?\n");
	////printf ("Can he see, or is he blind?\n");
	////printf ("Can he walk at all?\n");
	////printf ("Or if he moves, will he fall?\n");
	return 0;
}
