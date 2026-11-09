/*
 * Task4.c
 * 
 * 
 * This program has no productive purpose and 
 * has no recommendation for use WHAT SO EVER 
 * 
 * If you ever come across this... 
 * May God bless your soul 
 * 
 * ⠀⠀⠀⠀⣀⣤⣤⣶⣾⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣶⣶⣦⣤⣀⠀⠀⠀⠀⠀
 * ⣀⣴⣶⣿⣿⣿⣿⣿⣿⣷⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣴⣿⣿⣿⣿⣿⣿⣷⣦⣄⡀
 * ⠁⠀⠀⠈⠉⠛⣿⣿⣿⣿⣿⣷⣦⣀⢠⣆⣸⡆⢀⣤⣾⣿⣿⣿⣿⣿⠟⠋⠉⠀⠀⠀⠀
 * ⠀⠀⠀⠀⠀⠀⠸⠿⠿⠿⠿⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⠿⠿⠿⠏⠀⠀⠀⠀⠀⠀⠀
 * ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠻⣿⣿⣿⣿⠿⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
 * ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
 */
 
#include <stdio.h>
#include <inttypes.h>
#include <locale.h>
#include <string.h>


void print_digit(char s[])
{
	int counts [10] = {0};
	int len = strlen(s);
	int i;
	for (i=0; i < len; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
		int digit = s[i] - '0';
		counts[digit]++;
		}
	}
	for (i=0; i<10; i++)
	{
		if (counts[i] > 0)
		{
		printf ("%d %d\n", i, counts[i]);
		}
	}
}

int main(int argc, char **argv)
{
	setlocale(LC_ALL, ".utf-8");
	char strarr [1005];
	scanf ("%[^\n]", strarr);
	print_digit (strarr);


	//Immerse yourself in Black Sabbath
	//printf ("Has he lost his mind?\n");
	//printf ("Can he see, or is he blind?\n");
	//printf ("Can he walk at all?\n");
	//printf ("Or if he moves, will he fall?\n");
	return 0;
}
