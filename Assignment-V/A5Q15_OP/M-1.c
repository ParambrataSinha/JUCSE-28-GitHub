#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 100
#define MAX_PHONE_LENGTH 20
#define FILE_NAME "telephone_directory.txt"

// Structure to store contact information
struct Contact
{
    char name[MAX_NAME_LENGTH];
    char phoneNumbers[5][MAX_PHONE_LENGTH]; // Allow up to 5 phone numbers per contact
    int phoneCount;                         // Number of phone numbers for the contact
};

// Function to add a new contact
void addContact()
{
    struct Contact newContact;
    FILE *file = fopen(FILE_NAME, "a");

    if (!file)
    {
        printf("Error: Unable to open file.\n");
        return;
    }

    printf("Enter contact name: ");
    fgets(newContact.name, MAX_NAME_LENGTH, stdin);
    newContact.name[strcspn(newContact.name, "\n")] = '\0'; // Remove newline character

    printf("Enter number of phone numbers (max 5): ");
    scanf("%d", &newContact.phoneCount);
    getchar(); // To consume the newline character left by scanf

    for (int i = 0; i < newContact.phoneCount; i++)
    {
        printf("Enter phone number %d: ", i + 1);
        fgets(newContact.phoneNumbers[i], MAX_PHONE_LENGTH, stdin);
        newContact.phoneNumbers[i][strcspn(newContact.phoneNumbers[i], "\n")] = '\0'; // Remove newline
    }

    fprintf(file, "Name: %s\n", newContact.name);
    for (int i = 0; i < newContact.phoneCount; i++)
    {
        fprintf(file, "Phone %d: %s\n", i + 1, newContact.phoneNumbers[i]);
    }
    fprintf(file, "\n");

    fclose(file);
    printf("Contact added successfully!\n");
}

// Function to delete a contact by name
void deleteContact()
{
    char name[MAX_NAME_LENGTH];
    FILE *file = fopen(FILE_NAME, "r");
    FILE *tempFile = fopen("temp.txt", "w");

    if (!file || !tempFile)
    {
        printf("Error: Unable to open file.\n");
        return;
    }

    printf("Enter the name of the contact to delete: ");
    fgets(name, MAX_NAME_LENGTH, stdin);
    name[strcspn(name, "\n")] = '\0'; // Remove newline character

    char line[256];
    int contactFound = 0;

    while (fgets(line, sizeof(line), file))
    {
        if (strstr(line, name) == NULL)
        {
            fputs(line, tempFile); // Copy line to temp file if it doesn't match
        }
        else
        {
            contactFound = 1; // Contact name found
            while (fgets(line, sizeof(line), file) && line[0] != '\n')
            {
                // Skip all lines corresponding to the contact's phone numbers
            }
        }
    }

    fclose(file);
    fclose(tempFile);

    remove(FILE_NAME);
    rename("temp.txt", FILE_NAME);

    if (contactFound)
    {
        printf("Contact deleted successfully!\n");
    }
    else
    {
        printf("Contact not found.\n");
    }
}

// Function to search a contact by name
void searchContact()
{
    char name[MAX_NAME_LENGTH];
    FILE *file = fopen(FILE_NAME, "r");

    if (!file)
    {
        printf("Error: Unable to open file.\n");
        return;
    }

    printf("Enter the name of the contact to search: ");
    fgets(name, MAX_NAME_LENGTH, stdin);
    name[strcspn(name, "\n")] = '\0'; // Remove newline character

    char line[256];
    int contactFound = 0;

    while (fgets(line, sizeof(line), file))
    {
        if (strstr(line, name))
        {
            contactFound = 1;
            printf("%s", line); // Print the name
            while (fgets(line, sizeof(line), file) && line[0] != '\n')
            {
                printf("%s", line); // Print the phone numbers
            }
            printf("\n");
            break;
        }
    }

    fclose(file);

    if (!contactFound)
    {
        printf("Contact not found.\n");
    }
}

// Function to browse and list all contacts
void browseContacts()
{
    FILE *file = fopen(FILE_NAME, "r");

    if (!file)
    {
        printf("Error: Unable to open file.\n");
        return;
    }

    char line[256];
    int contactFound = 0;

    while (fgets(line, sizeof(line), file))
    {
        if (line[0] == 'N')
        { // Check if line starts with "Name"
            contactFound = 1;
            printf("%s", line); // Print the name
            while (fgets(line, sizeof(line), file) && line[0] != '\n')
            {
                printf("%s", line); // Print the phone numbers
            }
            printf("\n");
        }
    }

    fclose(file);

    if (!contactFound)
    {
        printf("No contacts found.\n");
    }
}

int main()
{
    int choice;

    while (1)
    {
        printf("\n--- Telephone Directory ---\n");
        printf("1. Add Contact\n");
        printf("2. Delete Contact\n");
        printf("3. Search Contact\n");
        printf("4. Browse Contacts\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // To consume the newline character left by scanf

        switch (choice)
        {
        case 1:
            addContact();
            break;
        case 2:
            deleteContact();
            break;
        case 3:
            searchContact();
            break;
        case 4:
            browseContacts();
            break;
        case 5:
            printf("Exiting...\n");
            return 0;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
