#include <stdio.h>
#include <string.h>
#include <ctype.h>
int exist(char* filename)
{
	int existed = -1;
	FILE* f= fopen(filename,"r");
	if (f != NULL)
	{
		existed = 1;
		fclose(f);
	}
	return existed;
}

int writeFile(char* filename)
{
	if (exist(filename) == 1)
	{
		printf("Write file:\n");
		printf("The file %s existed. Override it Y/N?: ", filename);
		if (toupper(getchar()) == 'N')
			return 0;
		else
		{
			char line[201];
			int length = 0;
			FILE* f = fopen(filename,"w");
			fflush(stdin);
			do
			{
				gets(line);
				length = strlen(line);
				if (length > 0)
					fprintf(f,"%s\n", line);
			}
			while (length > 0);
			fclose(f);
			return 1;
		}
	}
}

int printFile(char* filename)
{
	char c;
	if (exist(filename) == 0)
	{
		printf("The file %s does not exist.\n", filename);
		return 0;
	}
	FILE* f = fopen(filename, "r");
	char line[201];
	while (fscanf(f,"%[^\n]%*c", line) > 0)
		puts(line);
	fclose(f);
	return 1;
}

int main(int argCount, char* args[])
{
	char filename[81];
	printf("Program for writting then reading a file\n");
	printf("Enter a file name: ");
	gets(filename);
	int x = writeFile(filename);
	if (x == 1)
	{
		printf("Data in the filename %s:\n", filename);
		if (printFile(filename) == 0)
			printf("File error!\n");
	}
	else if (x == 0)
		printf("\nWriting file fail!\n");
	else if (x == -1)
		printf("The file %s does not exist.\n", filename);
	return 0;
}
