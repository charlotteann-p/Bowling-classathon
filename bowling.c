#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int unsigned main(void) {
    int i, value1, value2, frametotal[100], totalscore; 
    for (i = 1; i <= 10; i++) {
        printf("frame # %i\n", i);
        printf("first throw: ");
        scanf("%i", &value1);
        printf("second throw: ");
        scanf("%i", &value2); 
        // printf("%i  %i\n", value1, value2);
        if (value1 + value2 < 10) {
            frametotal[i] = value1 + value2;
            // totalscore = frametotal[i];
            printf("tot = %i     frame[%i] = %i\n", totalscore, i, frametotal[i]);
        } else if (value1 + value2 == 10 && value1 != 10) {
            frametotal[i] = value1 + value2;
            // value1[i++] * 2;
            // totalscore = frametotal[i];
            printf("tot = %i     frame[%i] = %i\n", totalscore, i, frametotal[i]);
        } else if (value1 == 10) {
            frametotal[i] = value1 + value2;
            frametotal[i++] * 2;
            // totalscore = frametotal[i];
            printf("tot = %i     frame[%i] = %i\n", totalscore, i, frametotal[i]);
        }
        // frametotal[i] = value1 + value2;
    } 
    /// add all values in array together
    totalscore = frametotal[1] + frametotal[2] + frametotal[3] + frametotal[4] + frametotal[5] + frametotal[6] + frametotal[7] + frametotal[8] + frametotal[9] + frametotal[10];
    printf("The total score is: %i\n", totalscore);
}