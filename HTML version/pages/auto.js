#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void clearScreen();

int main () {
    int wins = 0; int loses = 0; int change; int runs;
    printf("Will you want to change in the rounds when asked or not\n1 for yes 0 for no\n");
    scanf("%d", &change);
    printf("How many runs of the game do you want?");
    scanf("%d", &runs);
    srand(time(NULL));
    for (int i2 = 0; i2 < runs; i2++) {
        printf("%d", i2);
        int door[3];
        door[0] = 0; door[1] = 0; door[2] = 0;
        int right = rand() % 3;
        door[right] = 1;
        int pick = rand() % 3;
        int jackshit;
        for (int i = 0; i < 3; i++) {
            if (door[i] != 1 && i != pick) jackshit = i;
        }
        if (change == 1) {
            for (int i = 0; i < 3; i++) {
                if (i != jackshit && i != pick) { 
                    pick = i;
                    break;
                }
            }
        }
        if (door[pick] == 1) { wins++; }
        else { loses++; }
        clearScreen();
    }
    printf("wins: %d     loses: %d\n", wins, loses);
}