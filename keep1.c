#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_USERS 10
#define MAX_NAME_LEN 50
#define MAX_PASSWORD_LEN 20

struct user {
    char name[MAX_NAME_LEN];
    char password[MAX_PASSWORD_LEN];
};

struct user users[MAX_USERS];
int num_users = 0;

void signup() {
    if (num_users >= MAX_USERS) {
        printf("Cannot add more users. Maximum limit reached.\n");
        return;
    }
    printf("Enter name: ");
    scanf("%s", users[num_users].name);
    printf("Enter password: ");
    scanf("%s", users[num_users].password);
    num_users++;
    printf("Signup successful!\n");
}

int login() {
    char name[MAX_NAME_LEN];
    char password[MAX_PASSWORD_LEN];
    printf("Enter name: ");
    scanf("%s", name);
    printf("Enter password: ");
    scanf("%s", password);
    for (int i = 0; i < num_users; i++) {
        if (strcmp(users[i].name, name) == 0 && strcmp(users[i].password, password) == 0) {
            printf("Login successful!\n");
            return i;
        }
    }
    printf("Invalid name or password. Login failed.\n");
    return -1;
}

int main() {
    int choice;
    int user_index = -1;
    do {
        printf("1. Signup\n");
        printf("2. Login\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                signup();
                break;
            case 2:
                user_index = login();
                break;
            case 3:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while (choice != 3);
    return 0;
}


