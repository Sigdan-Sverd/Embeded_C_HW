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

int fx (int x)
{
	if (x<-2){
		return 4;
	} else if (x>=2) {
		return x*x+4*x+5;
	} else {
		return x*x;
	}
}

int main(int argc, char **argv)
{
	setlocale(LC_ALL, ".utf-8");
	int numb, max;
	scanf ("%d", &numb);
	if (numb==0) {
		return 0;
	}
	max = fx(numb);
	while (1) {
		scanf ("%d", &numb);
		if (numb==0) {
			break;
		}
		int current = fx(numb);
		if (current>max) {
			max=current;
		}
	}
	printf ("%d", max);
	
	//Immerse yourself in Black Sabbath
	//printf ("Has he lost his mind?\n");
	//printf ("Can he see, or is he blind?\n");
	//printf ("Can he walk at all?\n");
	//printf ("Or if he moves, will he fall?\n");
	return 0;
	
}

