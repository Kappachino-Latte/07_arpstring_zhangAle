#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int average_array(int *p, int size) {

	int sum = 0;
	
	int i;
	for (i = 0; i < size; i++)
		sum += *(p + i);
		
	return (sum / size);
}

int copy_array(int *p_1, int *p_2, int size) {

	int i;
	for (i = 0; i < size; i++) 
		*(p_2 + i) = *(p_1 + i);
		
	return 0;
}

int string_length(char *p) {

	int length = 0;
	
	while (*p) {
		length++;
		p++;
	}
	
	return length;
}

int main() {
	
	//average_array
	int arr[10];
	srand ( time(NULL) );
	
	int i;
	for (i = 0; i<10; i++)
		arr[i] = rand();
		
	printf ("average_array Test\n");	
	printf ("Average of the array is: %d\n\n", average_array (arr, 10));
	
	//copy_array
	int arr_2[10];
	copy_array (arr, arr_2, 10);
	
	printf ("copy_array Test\n");
	for (i = 0; i<10; i++)
		printf ("arr[%d]: %d, arr_2[%d]: %d\n", i, arr[i], i, arr_2[i]); 
	
	//string_length	
	char str[10] = "Flamingo";
	
	printf ("\nstring_length Test\n");
	printf ("Length of the string is: %d\n", string_length(str));
	
	char str_dest[20];
	
	//strcpy
	printf ("\nstrcpy Test\n");
	strcpy (str_dest, str);
	
	printf ("Source: %s, Copy: %s\n", str, str_dest);
	
	//strcat
	printf ("\nstrcat Test\n");
	printf ("Combining the two from strcpy: %s\n", strcat (str_dest, str));
	
	//strcmp
	printf ("\nstrcmp Test\n");
	printf ("%d\n", strcmp (str_dest, str));
	
	//strchr
	char search_letter = 'a';
	printf ("\nstrchr Test\n");
	printf ("%s\n", strchr (str, search_letter));

	return 0;
}
