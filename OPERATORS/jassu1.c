#include <stdio.h>
#include <string.h>

int main() {
    char name[50];
    int choice;

    printf("Enter your name: ");
    scanf("%s", name);

    // Check for allowed names (case-insensitive logic)
    if (
        strcmp(name, "Varshini") == 0 ||
        strcmp(name, "varshini") == 0 ||
        strcmp(name, "Ammulu") == 0 ||
        strcmp(name, "ammulu") == 0
    ) {
        printf("\nHlo Ammulu ❤️\n");

        printf("\nDo you love Jaswanth?\n");
        printf("1. Yes\n");
        printf("2. No\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("\nJaswanth also loves you more than all 💖\n");
            printf("Happy Valentine's Day Varshini 💐\n");
        } 
        else if (choice == 2) {
            printf("\nPlease love him 🥺 he is a gentleman 💕\n");
        } 
        else {
            printf("\nInvalid choice!\n");
        }
    } 
    else {
        printf("\nAccess denied ❌\n");
        printf("This program is only for Varshini or Ammulu 💝\n");
    }

    return 0;
}