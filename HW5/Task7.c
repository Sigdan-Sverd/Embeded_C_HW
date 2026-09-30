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
#include <locale.h>

int main(int argc, char **argv)
{
	setlocale(LC_ALL, ".utf-8");
	int numb;
	scanf ("%d", &numb);
	if (numb < 0)
	numb = -numb;
	for (int i=0; i<=9; i++) {
		int check = 0;
		int tempNumb = numb;
		do  {
			int digit = tempNumb % 10;
			if (digit == i) {
				check++;
			}
			tempNumb /= 10;
		} while (tempNumb != 0);
		if (check >=2) {
			printf ("YES");
			return 0;
		}
	}
	printf ("NO");
	
	
	////printf ("Has he lost his mind?\n");
	////printf ("Can he see, or is he blind?\n");
	////printf ("Can he walk at all?\n");
	////printf ("Or if he moves, will he fall?\n");
	return 0;
}
