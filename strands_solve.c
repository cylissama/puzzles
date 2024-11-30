/* Cy Dixon
 * Algorithm to Solve Strands
 * The New York Times Puzzle
 */

#include<stdio.h>

#define MRN 5
#define MCN 5

// words must be 4 letters or longer

int main(void)
{
    // 2-D matrix for letters
    char matrix[8][6] = {
        {'A', 'E', 'S', 'S', 'E', 'N'},
        {'R', 'B', 'M', 'R', 'E', 'G'},
        {'E', 'R', 'N', 'D', 'G', 'S'},
        {'L', 'A', 'L', 'B', 'A', 'K'},
        {'H', 'F', 'E', 'T', 'E', 'C'},
        {'U', 'O', 'F', 'Y', 'B', 'U'},
        {'D', 'B', 'D', 'C', 'T', 'E'},
        {'S', 'S', 'O', 'R', 'T', 'O'}
    };
    // [1][0] neighbors can be 
    // [1][1]  [2][0]

    // [2][2]
    // [2][3] [3][2] [2][1] [1][2]

    // same row +/- 1
    // same column +/- 1
    
    // m[4][4]
    for (int i = 0; i < 5; i++) {
        
    }


    // print the matrix
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 6; j++) {
            printf("%c ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

