/*
 * main.c
 *
 *  Created on: 23 Nov 2018
 *      Author: user
 */

#include <stdio.h>
#include "pic_manipulation.h"
#include "num_game.h"
#include "func.h"

int main(int argc, char **argv) {
	char choice;
	int play = 1;
	intialRandomSeed();

	do {
		puts(
				"‫‪Please‬‬ ‫‪choose‬‬ ‫‪one‬‬ ‫‪of‬‬ ‫‪the‬‬ ‫‪following‬‬ ‫‪options‬‬");
		puts("‫‪P/p‬‬ ‫‪-‬‬ ‫‪Picture‬‬ ‫‪Manipulation‬‬");
		puts("‫‪N/n‬‬ ‫‪-‬‬ ‫‪Number‬‬ ‫‪Game‬‬");
		puts("‫‪E/e‬‬ ‫‪-‬‬ ‫‪Quit‬‬");
		scanf("%c", &choice);
		clearBuffer();

		switch (choice) {
		case 'p':
		case 'P':
			PictureManipulation();
			break;
		case 'n':
		case 'N':
			NumberGame();
			break;
		case 'e':
		case 'E':
			play = 0;
			break;
		default:
			badTyping();
			break;
		}
	} while (play);
	puts("Bye Bye");
	return 1;
}

