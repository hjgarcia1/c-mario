#include <stdio.h>

int main() {
    int n = 8;

    //single right side solution
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i + j < n - 1) {
                printf(" ");
            } else {
                printf("#");
            }
        }

        printf("\n");
    }

    /*single left side solution*/ for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i + j > n - 1) {
                printf("#");
            }
        }

        printf("\n");
    }

    //Pyramid shaped
    for( int i = 0; i < n; i++)
    {
        for( int j = 0; j < 2*n + 2; j++)
        {
            if ( j == n || j == n+1 || i + j < n-1 || j>i+n+2)
                printf(" ");
            else
                printf("#");
        }
        printf("\n");
    }

    return 0;
}

