#include <stdio.h>
int main() {
    char secret[5]="rabia";
    char Display[5]="_____";
    char letter,c;
    int used[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int wrong=0,n=0,guessed=0;
    printf("HANGMAN!!!");
    while (wrong<6 && guessed<5) {
        printf("Word: ");
        n=0;
        while (n<5) {
            printf(" %c ",Display[n]);
            n=n+1;
        }
        printf("\n");
        printf("Used Letters: ");
        for (n=0;n<26;n++){
            if (used[n]==1) {
                c='a'+n;
                printf(" %c",c);
            }
        }
        printf("\n");
        printf("Unused Letters: ");
        for (n=0;n<26;n++){
            if (used[n]==0) {
                c='a'+n;
                printf(" %c ",c);
            }
        }
        printf("\n");
        printf("Enter letter: \n");
        scanf(" %c",&letter);
        if (used[letter-'a']==1) {
            printf("Already Guessed!");
        }
        else {
            used[letter-'a']=1;
            if (letter==secret[0]) {
                Display[0]=letter;
                guessed=guessed+1;
                printf("Correct \n");
            }
            if (letter==secret[1]) {
                Display[1]=letter;
                guessed=guessed+1;
                printf("Correct \n");
            }
            if (letter==secret[2]) {
                Display[2]=letter;
                guessed=guessed+1;
                printf("Correct \n");
            }
            if (letter==secret[3]) {
                Display[3]=letter;
                guessed=guessed+1;
                printf("Correct \n");
            }
            if (letter==secret[4]) {
                Display[4]=letter;
                guessed=guessed+1;
                printf("Correct \n");
            }
            if (letter!=secret[0] && letter!=secret[1] && letter!=secret[2] && letter!=secret[3] && letter!=secret[4]) {
                wrong=wrong+1;
                printf("Incorrect \n");
            }
        }
    }
    if (wrong==6) {
        printf("You lost! \n");
    }
    if (guessed==5) {
        printf("You got the word!\n");
    }
    n=0;
    while (n<5) {
        printf(" %c ",Display[n]);
        n=n+1;
    }
}
