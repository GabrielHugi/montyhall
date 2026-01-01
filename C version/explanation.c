#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    srand(time(NULL));
    char dump;
    printf("Hey\nLet's play a round of the monty hall game\nPress enter to continue"); 
    getchar();
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
    if (door[pick] == 1) { printf("You won\n"); }
    else { printf("You lost\n"); }
    

    if (door[pick] == 1) printf("Well, it seems you have won\n");
    else printf("Well, it seems you have lost\n");
    if (change == 1) printf("Your chances of winning were of 2/3. Odd right?\nIf you had 3 options, and then one was taken out,\n wouldn't you then have 2 options and a 50/50 chance of winning?\nIn this case: not quite!\nI will now explain.\n"); 
    else printf("Your chances of winning were of 1/3. Odd right?\nIf you had 3 options, and then one was taken out,\n wouldn't you then have 2 options and a 50/50 chance of winning?\nIn this case: not quite!\nI will now explain.\n");
    printf("Press enter to continue\n");
    getchar();
    door[0] = 0; door[1] = 0; door[2] = 0;
    right = rand() % 3;
    door[right] = 1;
    printf("There are three doors, behind one there is a prize, behind the others is nothing. Pick one\noptions: 1, 2, 3\n");
    scanf("%d", &pick); pick--;
    while ((getchar()) != '\n'); 
    printf("Now that you have picked a choice, you have a 1/3 chance of being right, and a 2/3 chance of being wrong.\nIt is important to see that distinction:\nthe group of the door you picked and the group of the door you didn't pick, as two groups, not as 3 separate door options.\n");
    printf("Press enter to continue\n");
    getchar();
    for (int i = 0; i < 3; i++) {
        if (door[i] != 1 && i != pick) jackshit = i;
    }
    printf("Alright. Now I will tell you: Behind door %d there is not the price\n", (jackshit+1));
    printf("This is the important part of the monty hall problem.\nThe door that will be opened will always not be the correct one.\nNow, remember how the group of doors you didn't choose had a 2/3 chance?\nWell that chance continues even with the other door gone. This is because:\nWhen you first chose, there are 3 possibilities:\nYou chose the right door\nYou chose one of the wrong doors\nYou chose the other wrong door\nIn the case that you chose the right door, then switching will always be a mistake\nBut in the other two cases, switching will always be correct.\nSee? 2/3! Let me explain visually\n[0] [1] [0] - These are the doors, 1 is the right door\nIf you chose the first door, then the host would necessarily\nhave to reveal the third door,\nand switching would make you win\nIf you chose the second door, of course switching would\nbe a mistake. Now if you chose the third door, the host would necessarily have\nto open the first door and then switching would be correct\nIt is pretty odd and unintuitive, but it is true\n");
    printf("Press enter to continue\n");
    getchar();
    printf("Would you want to now switch your door choice or keep it?\nInsert 1 for yes and 0 for no\n");
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
    if (door[pick] == 1) { printf("You won\n"); }
    else { printf("You lost\n"); }
    printf("Now that you have finished the explanation, try the automatic code for testing the validity of these odds!\n");
    printf("Press enter to continue\n");
    getchar();
}