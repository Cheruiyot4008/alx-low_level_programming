#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char generateRandomChar() {
    int choice = rand() % 3;

    if (choice == 0) {
        return 'A' + (rand() % 26);
    } else if (choice == 1) {
        return 'a' + (rand() % 26);
    } else {
        return '0' + (rand() % 10);
    }
}

int main() {
    int passwordLength = 10;

    srand(time(NULL));

    printf("Generated password: ");
    for (int i = 0; i < passwordLength; i++) {
        char randomChar = generateRandomChar();
        printf("%c", randomChar);
    }
    printf("\n");

    return 0;
}
