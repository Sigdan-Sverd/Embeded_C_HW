/*
 * Task9.c
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
	if (numb < 0)
	numb = -numb;
	do {
		int check1 = numb%10;
		if (check1%2 != 0) {
			printf ("NO");
			return 0;
		}
		numb /=10;
	} while (numb !=0);
	printf ("YES");
	
	////printf ("Has he lost his mind?\n");
	////printf ("Can he see, or is he blind?\n");
	////printf ("Can he walk at all?\n");
	////printf ("Or if he moves, will he fall?\n");
	return 0;
}
