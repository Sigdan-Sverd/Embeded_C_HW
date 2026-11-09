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

int find_max_array(int size, int a[])
{
	int max = a[0];
	for (int i=1; i < size; i++)
	{
		if (a[i] > max) 
		{
			max = a[i];
		}
	}
	return max;
}

int main(int argc, char **argv)
{
	setlocale(LC_ALL, ".utf-8");
	int arr[SIZE];
	int auto_size;
	auto_size = autoinput(arr);
	printf ("Максимальное значение массива: %d\n", find_max_array (auto_size,arr));
	
	
	//Immerse yourself in Black Sabbath
	//printf ("Has he lost his mind?\n");
	//printf ("Can he see, or is he blind?\n");
	//printf ("Can he walk at all?\n");
	//printf ("Or if he moves, will he fall?\n");
	return 0;
}
