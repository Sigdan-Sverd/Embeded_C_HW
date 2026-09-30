/*
 * Task1.c
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
	if (numb >100) {
		printf ("Вводимое число должно быть меньше 100!!!");
	}else {
		for (int i=1; i<=numb; i++) {
			printf ("%d %d %d\n", i, i*i, i*i*i);
		};
	};
	
	////printf ("Has he lost his mind?\n");
	////printf ("Can he see, or is he blind?\n");
	////printf ("Can he walk at all?\n");
	////printf ("Or if he moves, will he fall?\n");
	return 0;
}

