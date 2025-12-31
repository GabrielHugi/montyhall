#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    int wins = 0; int loses = 0;
    srand(time(NULL));
    for (int i2 = 0; i2 < 2000; i2++) {
        printf("%d", i2);
        int door[3];
        door[0] = 0; door[1] = 0; door[2] = 0;
        int right = rand() % 3;
        door[right] = 1;
        int pick = 1;
        int jackshit;
        for (int i = 0; i < 3; i++) {
            if (door[i] != 1 && i != pick) jackshit = i;
        }
        int change = 1;
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
        system("cls");
    }
    printf("wins: %d     loses: %d\n", wins, loses);
}