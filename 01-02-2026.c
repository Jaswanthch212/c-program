#include <stdio.h>
#include <string.h>

#define MAX_CONTACTS 100
#define MAX_NAME_LENGTH 50
#define MAX_PHONE_LENGTH 15

struct Contact {
    char name[MAX_NAME_LENGTH];
    char phone[MAX_PHONE_LENGTH];
};

struct Contact contacts[MAX_CONTACTS];
int contactCount = 0;

void addContact() {
    if (contactCount < MAX_CONTACTS) {
        printf("Enter name: ");
        scanf("%s", contacts[contactCount].name);
        printf("Enter phone number: ");
        scanf("%s", contacts[contactCount].phone);
        contactCount++;
        printf("Contact added successfully.\n");
    } else {
        printf("Contact list is full.\n");
    }
}

void displayContacts() {
    printf("--- Contacts ---\n");
    for (int i = 0; i < contactCount; i++) {
        printf("Name: %s, Phone: %s\n", contacts[i].name, contacts[i].phone);
    }
    printf("----------------\n");
}

int main() {
    int choice;

    while (1) {
        printf("\nContact Manager\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addContact();
                break;
            case 2:
                displayContacts();
                break;
            case 3:
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
