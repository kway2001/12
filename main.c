#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	FILE *fp;
	char str[100];
	char name[100];
	char word[100];
	
	printf("original file name : ");
	scanf("%s", name);
	printf("word to fine : ");
	scanf("%s", word);
	
	fp = fopen(name, "r");
	if (fp == NULL)
	{
		printf("invalid path! (%s)\n", name);
		return -1;
	}
	
	
	while (fgets(str, 100, fp) != NULL) {
		if (strncmp(str, word, strlen(word) ) == 0) {
			printf("Serch done!\n");
			fclose(fp);
			return 0;
		}
	}
	
	printf("Search failed!\n");
	fclose(fp);
	
	return 0;
}
