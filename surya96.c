#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret_number, guess, attempts;
    char play_again;

    // Title
    printf("==========================================\n");
    printf("       NUMBER GUESSING GAME\n");
    printf("==========================================\n\n");

    // Outer loop - play again ke liye
    do {
        // Random number generate karo (1 se 100 ke beech)
        srand(time(0));
        secret_number = (rand() % 100) + 1;
        attempts = 0;

        printf("Maine 1 se 100 ke beech ek number socha hai.\n");
        printf("Kya tum guess kar sakte ho?\n\n");

        // Inner loop - guess karte raho jab tak sahi na ho
        do {
            printf("Apna guess enter karo: ");
            scanf("%d", &guess);
            attempts++;

            if (guess < secret_number) {
                printf("Chhota hai! Aur bada try karo.\n\n");
            } else if (guess > secret_number) {
                printf("Bada hai! Aur chhota try karo.\n\n");
            } else {
                printf("\n🎉 Sahi jawab! Number tha: %d\n", secret_number);
                printf("Tumne %d attempts mein guess kiya!\n\n", attempts);

                // Score feedback
                if (attempts <= 5) {
                    printf("Waah! Tum toh genius ho! 🏆\n");
                } else if (attempts <= 10) {
                    printf("Bahut achha! 👍\n");
                } else {
                    printf("Ho gaya! Thodi aur practice karo. 😄\n");
                }
            }

        } while (guess != secret_number);

        // Dobara khelna chahte ho?
        printf("\nDobara khelna chahte ho? (y = haan, n = nahi): ");
        scanf(" %c", &play_again);
        printf("\n");

    } while (play_again == 'y' || play_again == 'Y');

    printf("Game band ho raha hai. Phir milenge! 👋\n");
    printf("==========================================\n");

    return 0;
}