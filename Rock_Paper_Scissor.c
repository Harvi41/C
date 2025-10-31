#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int user, computer;

    printf("🎮 Welcome to Rock, Paper, Scissors!\n");
    printf("Choose:\n1. Rock\n2. Paper\n3. Scissors\nEnter your choice: ");
    scanf("%d", &user);

    if (user < 1 || user > 3) {
        printf("⚠️ Invalid choice. Please restart the game.\n");
        return 1;
    }

    srand(time(0));
    computer = rand() % 3 + 1;

    printf("Computer chose: ");
    if (computer == 1) printf("Rock\n");
    else if (computer == 2) printf("Paper\n");
    else printf("Scissors\n");

    if (user == computer)
        printf("🤝 It's a tie!\n");
    else if ((user == 1 && computer == 3) ||
             (user == 2 && computer == 1) ||
             (user == 3 && computer == 2))
        printf("✅ You win!\n");
    else
        printf("❌ You lose!\n");

    return 0;
}
