#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    srand(time(NULL));
    int keepgoing = 1; int wins = 0; int loses = 0;
    while (keepgoing == 1) {
        printf("1 to keep playing and 0 to stop\n");
        printf("wins: %d     loses: %d\n", wins, loses);
        scanf("%d", &keepgoing);
        int door[3];
        door[0] = 0; door[1] = 0; door[2] = 0;
        int right = rand() % 3;
        door[right] = 1;
        int pick;
        printf("pick a door bro behind one there is 1 gazilion dollars\noptions: 1, 2, 3\n");
        scanf("%d", &pick); pick--;
        int jackshit;
        for (int i = 0; i < 3; i++) {
            if (door[i] != 1 && i != pick) jackshit = i;
        }
        int change;
        printf("aight bro but like behind door %d there ain't jackshit so do u want to switch\nsay 1 for yes and 0 for no\n", (jackshit+1));
        scanf("%d", &change);
        if (change == 1) {
            for (int i = 0; i < 3; i++) {
                if (i != jackshit && i != pick) {
                    pick = i;
                    break;
                }
            }
        }
        if (door[pick] == 1) { printf("you won bro\n"); wins++; }
        else { printf("you lost bro\n"); loses++; }
    }
}