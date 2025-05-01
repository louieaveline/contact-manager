#ifndef CONTACTS_H
#define CONTACTS_H

#define MAX_CONTACTS 100
#define NAME_LEN 50
#define PHONE_LEN 15

typedef struct {
    char name[NAME_LEN];
    char phone[PHONE_LEN];
} Contact;

void add_contact(Contact contacts[], int *count);
void list_contacts(Contact contacts[], int count);
void save_contacts(Contact contacts[], int count, const char *filename);
void load_contacts(Contact contacts[], int *count, const char *filename);

#endif  