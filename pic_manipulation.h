

#ifndef PIC_MANIPULATION_H_
#define PIC_MANIPULATION_H_

#define SIZE 3
#define MAX 99
#define MIN 1

void PictureManipulation();
void printPictureMenu();
void makeRandomMatInRange(int* mat, int matLength, int min, int max);
void transposeMat(int* mat, int size);
void flipVertically(int* mat, int size);
void flipHorizontally(int* mat, int size);
void flip90degrees(int* mat, int size);
void flipCounter90degrees(int* mat, int size);

#endif /* PIC_MANIPULATION_H_ */
