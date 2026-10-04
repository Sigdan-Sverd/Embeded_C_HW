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

int middle (int a, int b)
{
	int result =0;
	result = (a+b)/2;
	return result;
}

int main(int argc, char **argv)
{
	setlocale(LC_ALL, ".utf-8");
	int numb1=0;
	int numb2=0;
	scanf ("%d %d", &numb1, &numb2);
	printf ("%d\n", middle(numb1,numb2));
	
	//Immerse yourself in Black Sabbath
	//printf ("Has he lost his mind?\n");
	//printf ("Can he see, or is he blind?\n");
	//printf ("Can he walk at all?\n");
	//printf ("Or if he moves, will he fall?\n");
	return 0;
	
}
