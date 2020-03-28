
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void badTyping() {
	puts("Your choice is not valid, please try again\n");
}

void intialRandomSeed() {
	srand(time(NULL));
}

int getRandomIntInRange(int min, int max) {
	return min + (rand() % (max - min + 1));
}

void printMat(int* mat, int row, int col) {
	int i, j;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			printf("%4d", *(mat++));
		}
		puts("");
	}
	puts("");
}

void swap(int* a, int* b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void clearBuffer() {
	char c;
	while ((c = getchar()) != '\n' && c != EOF) {
	}
	puts("");
}

