#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//실습 3 
	char src[] = "The worst things to eat before you sleep";
	char dst[100];
	
	strcpy(dst, src);
	
	printf("copide string: %s\n", dst);
	
	//실습 4 
	char str[30] = "happy C programming";
	
	printf("length of \"%s\" : %i\n", str, strlen(str));
	
	return 0;
}
