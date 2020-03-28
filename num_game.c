
#include <stdio.h>
#include "num_game.h"
#include "func.h"

void NumberGame() {
	int mat[ROW][COL], step, first;
	initMat((int*) mat, ROW * COL);
	do {
		shuffleMat((int*) mat);
	} while (checkIfWin((int*) mat, ROW * COL));
	printMat((int*) mat, ROW, COL);
	while (!checkIfWin((int*) mat, ROW * COL)) {
		first = 1;
		step = 0;
		do {
			first == 1 ? first = 0 : puts("‫‪Invalid‬‬ ‫!‪step‬‬\n");
			printf("Your step: ");
			scanf("%d", &step);
			clearBuffer();
		} while (!checkStep((int*) mat, step, ROW, COL));
		printMat((int*) mat, ROW, COL);
	}
	puts("‫‪You‬‬ ‫!‪win‬‬ ‫‪The‬‬ ‫‪game‬‬ ‫‪is‬‬ ‫!‪over‬‬");
}

void initMat(int* mat, int matLength) {
	int i;
	for (i = 1; i < matLength; i++)
		*(mat++) = i;
	*(mat) = 0;
}

void shuffleMat(int* mat) {
	int count = SHUFFLE_COUNT, row1, col1, row2, col2;
	do {
		row1 = getRandomIntInRange(0, ROW - 1);
		col1 = getRandomIntInRange(0, COL - 1);
		row2 = getRandomIntInRange(0, ROW - 1);
		col2 = getRandomIntInRange(0, COL - 1);
		swap(mat + row1 * COL + col1, mat + row2 * COL + col2);
	} while (count--);
}

int checkIfWin(int* mat, int matLength) {
	int i;
	for (i = 1; i < matLength; i++)
		if (*(mat++) != i)
			return 0;
	return 1;
}

int checkStep(int* mat, int step, int row, int col) {
	int i, j, found = 0, rowZero, rowStep;
	int* pStep, *pZero;
	if (step < 1 || row * col - 1 < step)
		return 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++, mat++) {
			if (*(mat) == 0) {
				pZero = mat;
				rowZero = i;
				found++;
			}
			if (*(mat) == step) {
				pStep = mat;
				rowStep = i;
				found++;
			}
			if (found == 2)
				break;
		}
		if (found == 2)
			break;
	}
	if (pStep + col == pZero || pStep - col == pZero
			|| (rowZero == rowStep && (pStep + 1 == pZero || pStep - 1 == pZero))) {
		swap(pStep, pZero);
		return 1;
	}
	return 0;
}

