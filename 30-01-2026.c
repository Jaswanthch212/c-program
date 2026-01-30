#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 50
#define MAX_PHONE_LENGTH 15
#define FILENAME "contacts.dat"

typedef struct Contact {
    char name[MAX_NAME_LENGTH];
    char phone[MAX_PHONE_LENGTH];
} Contact;

void addContact() {
    Contact newContact;
    FILE *fp = fopen(FILENAME, "ab");

    if (fp == NULL) {
        printf("Error opening file.\n");
        return;
    }

    printf("Enter name: ");
    scanf("%s", newContact.name);
    printf("Enter phone number: ");
    scanf("%s", newContact.phone);

    fwrite(&newContact, sizeof(newContact), 1, fp);
    fclose(fp);
    printf("Contact added successfully.\n");
}

void viewContacts() {
    Contact contact;
    FILE *fp = fopen(FILENAME, "rb");

    if (fp == NULL) {
        printf("No contacts found.\n");
        return;
    }

    printf("\n--- Contacts List ---\n");
    while (fread(&contact, sizeof(contact), 1, fp) == 1) {
        printf("Name: %s, Phone: %s\n", contact.name, contact.phone);
    }
    printf("---------------------\n");
    fclose(fp);
}

void findContact() {
    Contact contact;
    FILE *fp = fopen(FILENAME, "rb");
    char searchName[MAX_NAME_LENGTH];
    int found = 0;

    if (fp == NULL) {
        printf("No contacts found.\n");
        return;
    }

    printf("Enter name to search: ");
    scanf("%s", searchName);

    while (fread(&contact, sizeof(contact), 1, fp) == 1) {
        if (strcmp(contact.name, searchName) == 0) {
            printf("Found - Name: %s, Phone: %s\n", contact.name, contact.phone);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Contact not found.\n");
    }

    fclose(fp);
}

void deleteContact() {
    Contact contact;
    FILE *fp = fopen(FILENAME, "rb");
    FILE *tempFp = fopen("temp.dat", "wb");
    char deleteName[MAX_NAME_LENGTH];
    int found = 0;

    if (fp == NULL) {
        printf("No contacts found.\n");
        return;
    }

    printf("Enter name to delete: ");
    scanf("%s", deleteName);

    while (fread(&contact, sizeof(contact), 1, fp) == 1) {
        if (strcmp(contact.name, deleteName) != 0) {
            fwrite(&contact, sizeof(contact), 1, tempFp);
        } else {
            found = 1;
        }
    }

    fclose(fp);
    fclose(tempFp);

    remove(FILENAME);
    rename("temp.dat", FILENAME);

    if (found) {
        printf("Contact deleted successfully.\n");
    } else {
        printf("Contact not found.\n");
    }
}

int main() {
    int choice;

    while (1) {
        printf("\nContact Manager\n");
        printf("1. Add Contact\n");
        printf("2. View Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Delete Contact\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addContact();
                break;
            case 2:
                viewContacts();
                break;
            case 3:
                findContact();
                break;
            case 4:
                deleteContact();
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
