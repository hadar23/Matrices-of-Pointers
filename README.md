# Matrices-of-Pointers
Matrices of Pointers in C, second year first semester's first C project

In this project we have 2 tasks:
1) Picture manipulation
2) Numbers game

## Picture manipulation
We are regarding a matrix as a picture.

#### Example:
```
Please choose one of the following options
P/p - Picture Manipulation
N/n - Number Game
E/e - Quit
p
 77 1 59
 24 91 19
 55 83 32
Please choose one of the following options
1 - 90 degree clockwise
2 - 90 degree counter clockwise
3 - Flip Horizontal
4 - Flip Vertical
-1 - Quit
1
--------- picture after manipulation ---------
 55 24 77
 83 91 1
 32 19 59
```

## Numbers game
This number puzzle is a game on a board of size N\*M.

On the board we have N\*M numbers from 0 to N\*M - 1. 0 is an empty square.

This is the game in real life:

![image](https://raw.githubusercontent.com/aviasd/Matrices-of-Pointers/master/README%20files/board.png)

#### Example:

For a 4\*4 board, this is the starting board:
 
|    |    |    |    |
|:--:|:--:|:--:|:--:|
| 13 |  4 |  8 |  9 |
| 11 |  7 |  1 |  5 |
|  6 |  2 | 10 | 12 |
|  3 | 15 | 14 |  0 |

The purpose of the game is to order the numbers in an ascending order, only by moving numbers from a square near the empty square, to the empty square.
For example, in the board given we can make to moves:
1) move 14 right
2) move 12 down

If the user choose to move 12 down, the new board will be:

|    |    |    |    |
|:--:|:--:|:--:|:--:|
| 13 |  4 |  8 |  9 |
| 11 |  7 |  1 |  5 |
|  6 |  2 | 10 |  ***0*** |
|  3 | 15 | 14 | ***12*** |

The game ends when the board is organized in an ascending order:

|    |    |    |    |
|:--:|:--:|:--:|:--:|
|  1 |  2 |  3 |  4 |
|  5 |  6 |  7 |  8 |
|  9 | 10 | 11 | 12 |
| 13 | 14 | 15 |  0 |

This is the way it looks like in the software:
```
13 4 8 9
11 7 1 5
6 2 10 12
3 15 14 0
Your step: 10
Invalid step!
Your step: 12
13 4 8 9
11 7 1 5
6 2 10 0
3 15 14 12
```
