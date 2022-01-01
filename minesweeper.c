#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    /// Create Matris and variables
    int y,x,column, row, field[10][10] = { 0 };

    /// Random bind X
    srand(time(NULL));

    for (int i = 0; i <= 10; ++i) {
        y = rand() % 11;
        x = rand() % 11;
        field[y][x] = 'X';
    }

    /// Scan around X for increase numbers
    for (column = 0; column < 10; column++){

        for(row = 0; row < 10; row++){
            if (field[row][column] == 'X' && field[row-1][column] != 'X'){     ///Right of X
                field[row-1][column] += 1;
            }
            if (field[row][column] == 'X' && field[row+1][column] != 'X') {    ///Left of X
                field[row+1][column] += 1;
            }
            if (field[row][column] == 'X' && field[row][column-1] != 'X') {    ///Top of X
                field[row][column-1] += 1;
            }
            if (field[row][column] == 'X' && field[row][column+1] != 'X') {    ///Bottom of X
                field[row][column+1] += 1;
            }
            if (field[row][column] == 'X' && field[row+1][column+1] != 'X') {    ///Bottom Right of X
                field[row+1][column+1] += 1;
            }
            if (field[row][column] == 'X' && field[row-1][column+1] != 'X') {    ///Top Right of X
                field[row-1][column+1] += 1;
            }
            if (field[row][column] == 'X' && field[row-1][column-1] != 'X') {    ///Top Left of X
                field[row-1][column-1] += 1;
            }
            if (field[row][column] == 'X' && field[row+1][column-1] != 'X') {    ///Bottom Left of X
                field[row+1][column-1] += 1;
            }

        }
    }

    /// Print Matris
    for (column = 0; column < 10; column++){

        for(row = 0; row < 10; row++){
            if('X' == field[row][column]){
                printf("%c  ",field[row][column]); /// Print X as Char
            }
            else{
                printf("%d  ",field[row][column]); ///Print numbers as Int
            }
        }
        printf("\n");
    }

}
