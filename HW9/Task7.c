/*
 * Task7.c
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

int compression(int a[], int b[], int N)
{
	int target = 0 ;
	int count = 0;
	int index = 0;
	for (int i = 0; i<N; i++)
	{
		if (a[i] == target)
		{
			count++;
		} else {
			b[index] = count;
			index++;
			target	= 1 - target;
			count = 1;
		}
	}
	b[index] = count;
	index++;
	return index;
}

void print_compressed(int arr[], int size)
{
	printf("[");
	for (int i = 0; i < size; i++)
	{
		printf("%d", arr[i]);
		if (i < size - 1)
		{
			printf(", ");
		}
	}
	printf("]\n");
}


int main(int argc, char **argv)
{
	setlocale(LC_ALL, ".utf-8");
	int arr[SIZE];
	int compressed[SIZE];
	int auto_size;
	auto_size = autoinput(arr);
	int compressed_size = compression(arr, compressed, auto_size);
	print_compressed(compressed, compressed_size);
	
	
	//Immerse yourself in Black Sabbath
	//printf ("Has he lost his mind?\n");
	//printf ("Can he see, or is he blind?\n");
	//printf ("Can he walk at all?\n");
	//printf ("Or if he moves, will he fall?\n");
	return 0;
}
