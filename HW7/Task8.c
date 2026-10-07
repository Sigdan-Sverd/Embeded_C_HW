/*
 * Task8.c
 * 
 * 
 * This program has no productive purpose and 
 * has no recommendation  for use WHAT SO EVER 
 * 
 * If you ever come across this...  
 * May God bless your soul 
 * 
 *  ⠀⠀⠀⠀⣀⣤⣤⣶⣾⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣶⣶⣦⣤⣀⠀⠀⠀⠀⠀
 *  ⣀⣴⣶⣿⣿⣿⣿⣿⣿⣷⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣴⣿⣿⣿⣿⣿⣿⣷⣦⣄⡀
 *  ⠁⠀⠀⠈⠉⠛⣿⣿⣿⣿⣿⣷⣦⣀⢠⣆⣸⡆⢀⣤⣾⣿⣿⣿⣿⣿⠟⠋⠉⠀⠀⠀⠀
 *  ⠀⠀⠀⠀⠀⠀⠸⠿⠿⠿⠿⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⠿⠿⠿⠏⠀⠀⠀⠀⠀⠀⠀
 *  ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠻⣿⣿⣿⣿⠿⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
 *  ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
 */
  
#include <stdio.h>
#include <inttypes.h>
#include <locale.h>

void minmaxmin (int a, int b) {
	printf ("%d ", a);
	if ( a == b) {
		return;
	}
	if (a < b) {
		minmaxmin (a+1, b);
	}
	if (a > b) {
		minmaxmin (a-1, b);
	}
}

int main(int argc, char **argv)
{
	setlocale(LC_ALL, ".utf-8");
	int numb1, numb2;
	scanf ("%d %d", &numb1, &numb2);
	minmaxmin (numb1, numb2);
	
	//Immerse yourself in Black Sabbath
	//printf ("Has he lost his mind?\n");
	//printf ("Can he see, or is he blind?\n");
	//printf ("Can he walk at all?\n");
	//printf ("Or if he moves, will he fall?\n");
	return 0;
}
