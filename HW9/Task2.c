/*
 * Task2.c
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

#define SIZE 100

int autoinput (int temparr [])
{
	int count = 0;
	char next_char;
	printf("Введите числа через пробел и нажмите Enter в конце:\n");
	while (1)
	{
		if (scanf("%d", &temparr[count]) !=1)
		{
			break;
		}
		count++;
		scanf ("%c", &next_char);
		if (next_char == '\n')
		{
			break;
		}
	}
	return count;
}

void sort_even_odd(int n, int a[])
{
	int temp[n];
	int index = 0;
	for (int i=0; i<n; i++)
	{
		if (a[i] % 2 == 0)
		{
			temp[index] = a[i];
			index++;
		}
	}
	for (int i=0; i<n; i++)
	{
		if (a[i] % 2 != 0)
		{
			temp[index] = a[i];
			index++;
		}

	}
	for (int i=0; i<n; i++)
	{
		a[i] = temp[i];
	}
}

void print_array (int temparr[], int size)
{
	printf ("Отсортированный масив:\n");
	for (int i=0; i < size; i++)
	{
		printf ("%d ", temparr[i]);
	}
}

int main(int argc, char **argv)
{
	setlocale(LC_ALL, ".utf-8");
	int arr[SIZE];
	int auto_size;
	auto_size = autoinput(arr);
	sort_even_odd (auto_size,arr);
	print_array (arr, auto_size);
	
	
	//Immerse yourself in Black Sabbath
	//printf ("Has he lost his mind?\n");
	//printf ("Can he see, or is he blind?\n");
	//printf ("Can he walk at all?\n");
	//printf ("Or if he moves, will he fall?\n");
	return 0;
}
