#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
int main(int argc, char **argv)
{
   //28장 5번 
	FILE* d1 = fopen(argv[1], "rt");
	FILE* d2 = fopen(argv[2], "rt");
	char str[20];

	while (fgets(str,sizeof(str),d1) != NULL)
	{
		
	}
	
	return 0;

	
}

