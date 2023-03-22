#include <stdio.h>

#define SIZE 5
void reversArrayOfCharRecusively(char* arr, int size)
{
	int i;
	char swap;
	if (size != 1)
	{
		for (i = 0; i < size - 1; i++)
		{
			swap = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = swap;
		}
		reversArrayOfCharRecusively(arr, size - 1);
	}
	
}

void reverseArrayOfCharIteratively(char* arr, int size)
{
	char swap;
	for (int x = size; x > 0; x--)
	{
		for (int y = 0; y < x - 1; y++)
		{
			swap = arr[y];
			arr[y] = arr[y + 1];
			arr[y + 1] = swap;
		}
	}
}

int main()
{
	char array[SIZE]= { 'a','b','c','d','e' };
	printf("The array before being reversed.\n");
	int i;
	for (i = 0; i < SIZE; i++)
	{
		printf("%c| ", array[i]);
	}
	printf("\nThe array after being reversed\n");
	//reversArrayOfCharRecusively(array, SIZE);
	reverseArrayOfCharIteratively(array, SIZE);
	for(int j = 0; j < SIZE; j++)
	{
		printf("%c| ", array[j]);
	}
	return 0;
}