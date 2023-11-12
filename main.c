#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	FILE* fp;
	char word[100];
	
	fp = fopen("sample.txt","w");
	if (fp == NULL) {
		printf("파일을 열 수 없습니다.\n");
		return 1;
	}
	int i;
	for (i=0; i<3; i++) {
		printf("Input a word: ");
		scanf("%s",word);
		fprintf(fp,"%s\n",word);	
	}
	fclose(fp);
} 
