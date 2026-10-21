/*
 * Task12.c
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
#include <stdlib.h>

#define SIZE 10

void input (int temparr[], int len)
{
	for (int i=0; i<len; i++) 
	{
		scanf ("%d", &temparr[i]);
	}
}

void output (int temparr[], int len)
{
	for (int i=0; i<len; i++) 
	{
		printf ("%d ", temparr[i]);
	}
}

void sort1 (int temparr[], int len)
{
	int half = len/2;
	for (int i=0; i<half; i++)
	{
		for (int j=half-1; j>i; j--)
		{
			if (temparr[j]<temparr[j-1])
			{
				int temp = temparr[j];
				temparr[j] = temparr[j-1];
				temparr[j-1] = temp; 
			}
		}
	}
}

void sort2 (int temparr[], int len)
{
	int half = len/2;
	for (int i=0; i<half; i++)
	{
		for (int j=half; j<(len-1)-i; j++)
		{
			if (temparr[j]<temparr[j+1])
			{
				int temp = temparr[j];
				temparr[j] = temparr[j+1];
				temparr[j+1] = temp; 
			}
		}
	}
}

int main(int argc, char **argv)
{
	setlocale(LC_ALL, ".utf-8");
	int arr[SIZE];
	input (arr,SIZE);
	sort1 (arr,SIZE);
	sort2 (arr,SIZE);
	output (arr,SIZE);
	
	
	//Immerse yourself in Black Sabbath
	//printf ("Has he lost his mind?\n");
	//printf ("Can he see, or is he blind?\n");
	//printf ("Can he walk at all?\n");
	//printf ("Or if he moves, will he fall?\n");
	return 0;
}
