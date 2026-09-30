/*
 * Task11.c
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
	int numb, result = 0;
	scanf ("%d", &numb);
	if (numb < 0) {
	numb = -numb;
	}
	while (numb != 0) {
		result = (result * 10) + (numb % 10);
		numb /= 10;
	} 
	printf ("%d",result);
	
	////printf ("Has he lost his mind?\n");
	////printf ("Can he see, or is he blind?\n");
	////printf ("Can he walk at all?\n");
	////printf ("Or if he moves, will he fall?\n");
	return 0;
}
