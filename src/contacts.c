#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "contacts.h"

// Add a new contact to the array
void add_contact(Contact contacts[], int *count) {
    if (*count >= MAX_CONTACTS) {
        printf("Contact list is full.\n");
        return;
    }

    printf("Enter name: ");
    scanf(" %[^\n]", contacts[*count].name);

    printf("Enter phone: ");
    scanf(" %[^\n]", contacts[*count].phone);

    (*count)++;
    printf("Contact added successfully.\n");
}

// List all contacts
void list_contacts(Contact contacts[], int count) {
    if (count == 0) {
        printf("No contacts to show.\n");
        return;
    }

    printf("\n-- Contact List --\n");
    for (int i = 0; i < count; i++) {
        printf("%d. %s - %s\n", i + 1, contacts[i].name, contacts[i].phone);
    }
}

// Save all contacts to a binary file
void save_contacts(Contact contacts[], int count, const char *filename) {
    FILE *file = fopen(filename, "wb");
    if (!file) {
        perror("Failed to open file");
        return;
    }

    fwrite(contacts, sizeof(Contact), count, file);
    fclose(file);
    printf("Contacts saved.\n");
}

// Load contacts from a binary file
void load_contacts(Contact contacts[], int *count, const char *filename) {
    FILE *file = fopen(filename, "rb");
    if (!file) return;

    *count = fread(contacts, sizeof(Contact), MAX_CONTACTS, file);
    fclose(file);
}
