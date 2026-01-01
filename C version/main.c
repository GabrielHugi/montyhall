#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    srand(time(NULL));
    int keepgoing = 1; int wins = 0; int loses = 0;
    while (keepgoing == 1) {
        printf("Enter 1 to keep (or start) playing and 0 to stop\n");
        printf("wins: %d     loses: %d\n", wins, loses);
        scanf("%d", &keepgoing);
        while ((getchar()) != '\n'); 
        int door[3];
        door[0] = 0; door[1] = 0; door[2] = 0;
        int right = rand() % 3;
        door[right] = 1;
        int pick;
        printf("There are three doors, behind one there is a prize, behind the others is nothing. Pick one\noptions: 1, 2, 3\n");
        scanf("%d", &pick); pick--;
        while ((getchar()) != '\n'); 
        int jackshit;
        for (int i = 0; i < 3; i++) {
            if (door[i] != 1 && i != pick) jackshit = i;
        }
        int change;
        printf("Alright. Now I will tell you: Behind door %d there is not the price\nWould you want to now switch your door choice or keep it?\nInsert 1 for yes and 0 for no\n", (jackshit+1));
        scanf("%d", &change);
        while ((getchar()) != '\n'); 
        if (change == 1) {
            for (int i = 0; i < 3; i++) {
                if (i != jackshit && i != pick) {
                    pick = i;
                    break;
                }
            }
        }
        if (door[pick] == 1) { printf("You won\n"); wins++; }
        else { printf("You lost\n"); loses++; }
    }
}