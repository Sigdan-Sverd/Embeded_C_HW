/*
 * Task5.c
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

int summ (int a)
{
	int result = 0;
	for (int i=1; i<=a; i++) {
		result += i;
	}
	return result;
}

int main(int argc, char **argv)
{
	setlocale(LC_ALL, ".utf-8");
	int numb;
	scanf ("%d", &numb);
	printf ("%d\n", summ(numb));
	
	//Immerse yourself in Black Sabbath
	//printf ("Has he lost his mind?\n");
	//printf ("Can he see, or is he blind?\n");
	//printf ("Can he walk at all?\n");
	//printf ("Or if he moves, will he fall?\n");
	return 0;
	
}
