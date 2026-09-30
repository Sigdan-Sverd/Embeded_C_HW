/*
 * Task3.c
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
	int numb1, numb2, summ=0;
	scanf ("%d %d", &numb1, &numb2);
	if (numb1 > 100 || numb2 > 100) {
		printf ("Вводимые числа должны быть меньше 100!!!");
	}else if (numb1>numb2) {
		printf ("Первое число не должно быть больше второго!!!");
	}else {
		for (int i=numb1; i<=numb2; i++) {
			summ += i*i;
		};
		printf ("%d ", summ);
	};
	
	////printf ("Has he lost his mind?\n");
	////printf ("Can he see, or is he blind?\n");
	////printf ("Can he walk at all?\n");
	////printf ("Or if he moves, will he fall?\n");
	return 0;
}
