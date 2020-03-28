

#include <stdio.h>
#include "pic_manipulation.h"
#include "func.h"

void PictureManipulation() {
	int play = 1, first = 1, choice, mat[SIZE][SIZE];
	makeRandomMatInRange((int*) mat, SIZE * SIZE, MIN, MAX);

	do {
		choice = 0;
		first == 1 ?
				first = 0 :
				puts("--------- picture after manipulation ---------");
		printMat((int*) mat, SIZE, SIZE);
		printPictureMenu();
		scanf("%d", &choice);
		clearBuffer();
		switch (choice) {
		case 1:
			flip90degrees((int*) mat, SIZE);
			break;
		case 2:
			flipCounter90degrees((int*) mat, SIZE);
			break;
		case 3:
			flipHorizontally((int*) mat, SIZE);
			break;
		case 4:
			flipVertically((int*) mat, SIZE);
			break;
		case -1:
			play = 0;
			break;
		default:
			badTyping();
			first = 1;
			break;
		}
	} while (play);

}

void printPictureMenu() {
	puts(
			"‫‪Please‬‬ ‫‪choose‬‬ ‫‪one‬‬ ‫‪of‬‬ ‫‪the‬‬ ‫‪following‬‬ ‫‪options\n");
	puts("‫‪1‬‬ ‫‪-‬‬ ‫‪90‬‬ ‫‪degree‬‬ ‫‪clockwise‬‬‬‬");
	puts("‫‪2‬‬ ‫‪-‬‬ ‫‪90‬‬ ‫‪degree‬‬ ‫‪counter‬‬ ‫‪clockwise‬‬‬‬");
	puts("‫‪‫‪3‬‬ ‫‪-‬‬ ‫‪Flip‬‬ ‫‪Horizontal‬‬‬‬");
	puts("‫‪‫‪‫‪4‬‬ ‫‪-‬‬ ‫‪Flip‬‬ ‫‪Vertical‬‬‬‬‬‬");
	puts("‫‪‫‪‫‪‫‪-1‬‬ ‫‪-‬‬ ‫‪Quit‬‬‬‬‬‬‬‬");
}

void makeRandomMatInRange(int* mat, int matLength, int min, int max) {
	int i;
	for (i = 0; i < matLength; i++)
		*(mat++) = getRandomIntInRange(min, max);
}

void transposeMat(int* mat, int size) {
	int i, j;
	for (i = 0; i < size; i++)
		for (j = i; j < size; j++)
			swap(mat + j + i * size, mat + i + j * size);
}

void flipVertically(int* mat, int size) {
	int i, j;
	for (i = 0; i < size / 2; i++)
		for (j = 0; j < size; j++)
			swap(mat + j + i * size, mat + j + (size - 1 - i) * size);
}

void flipHorizontally(int* mat, int size) {
	int i, j;
	for (i = 0; i < size; i++)
		for (j = 0; j < size / 2; j++)
			swap(mat + j + size * i, mat + (size - 1 - j) + size * i);
}

void flip90degrees(int* mat, int size) {
	transposeMat((int*) mat, size);
	flipHorizontally((int*) mat, size);
}

void flipCounter90degrees(int* mat, int size) {
	transposeMat((int*) mat, size);
	flipVertically((int*) mat, size);
}

