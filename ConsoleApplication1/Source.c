#include <stdio.h>
#include <stdlib.h>

#define SIZE 4

void swap(char *ptr1, char *ptr2)
{
	char temp;
	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
	
}
void reverArrayOfCharRecusively(char* arr, int size)
{
	
	if (size > 1)
	{
		swap(arr, arr + size - 1);
		reverArrayOfCharRecusively(arr + 1, size - 2 );
	}
	
}

void reverseArrayOfCharIteratively(char* arr, int size)
{
	
	for (int x = 0; x < size / 2 ; x++)
	{
		swap(&arr[x], &arr[size - 1 - x]);
	}
}

int main()
{
	char array[SIZE]= { 'a','b','c','d' };
	printf("The array before being reversed.\n");
	int i;
	for (i = 0; i < SIZE; i++)
	{
		printf("%c| ", array[i]);
	}
	printf("\nThe array after being reversed\n");
	reverArrayOfCharRecusively(&array, SIZE);
	//reverseArrayOfCharIteratively(array, SIZE);
	for(int j = 0; j < SIZE; j++)
	{
		printf("%c| ", array[j]);
	}
	return 0;
}