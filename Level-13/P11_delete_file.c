/* Program to delete a file in the current directory whose name matches the input arguement*/

#include <stdio.h>

int main()
{
	if (remove("abc.txt") == 0)
		printf("Deleted successfully");
	else
		printf("Unable to delete the file");

	return 0;
}
