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

#define SIZE 10

void input (int temparr[], int len)
{
	for (int i=0; i<len; i++) 
	{
		scanf ("%d", &temparr[i]);
	}
}

void minmax (int temparr[], int len, int *pMin, int *pMax, int *piMin, int *piMax)
{
	*pMin = temparr[0];
	*pMax = temparr[0];
	*piMin = 1;
	*piMax = 1;
	for (int i=1; i < len; i++)
	{
		if (*pMin > temparr[i])
		{
			*pMin = temparr[i];
			*piMin = i + 1;
		}
		if (*pMax < temparr[i])
		{
			*pMax = temparr[i];
			*piMax= i + 1;
		}
	}
}

int main(int argc, char **argv)
{
	setlocale(LC_ALL, ".utf-8");
	int arr[SIZE];
	int min, max, iMin, iMax;
	input (arr,SIZE);
	minmax (arr, SIZE, &min, &max, &iMin, &iMax);
	printf ("%d %d %d %d", iMax, max, iMin, min);
	
	
	//Immerse yourself in Black Sabbath
	//printf ("Has he lost his mind?\n");
	//printf ("Can he see, or is he blind?\n");
	//printf ("Can he walk at all?\n");
	//printf ("Or if he moves, will he fall?\n");
	return 0;
}
