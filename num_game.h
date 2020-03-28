
#ifndef NUM_GAME_H_
#define NUM_GAME_H_

#define ROW 4
#define COL 5
#define SHUFFLE_COUNT 30

void NumberGame();
void initMat(int* mat, int matLength);
void shuffleMat(int* mat);
int checkIfWin(int* mat, int matLength);
int checkStep(int* mat, int step, int row, int col);

#endif /* NUM_GAME_H_ */
