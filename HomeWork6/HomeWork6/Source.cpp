#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include"Header.h"
#define SIZE 40

int main(int argc, char *argv[]) {
	char **input;									//�G���ʺA�}�C
	FILE *inputPtr = open(argv[1], "r");

	int line = counterline(inputPtr);
	rewind(inputPtr);

	input = (char **)malloc(sizeof(char*)*line);
	filter(inputPtr, input, line);

	FILE *inPtr = open(argv[2], "r+");
	fill(inPtr, input, line);




	fclose(inputPtr);
	free(input);
	system("pause");
}