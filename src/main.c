#include <stdio.h>
#include "contacts.h"

#define FILE_NAME "contacts.dat"

int main() {
    Contact contacts[MAX_CONTACTS];
    int count = 0;
    int choice;

    load_contacts(contacts, &count, FILE_NAME);

    do {
        printf("\n--- Contact Manager ---\n");
        printf("1. Add Contact\n");
        printf("2. List Contacts\n");
        printf("3. Save & Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add_contact(contacts, &count);
                break;
            case 2:
                list_contacts(contacts, count);
                break;
            case 3:
                save_contacts(contacts, count, FILE_NAME);
                break;
            default:
                printf("Invalid option.\n");
        }
    } while (choice != 3);

    return 0;
}
