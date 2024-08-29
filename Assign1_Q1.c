#include <stdio.h>

// Define the Date structure
struct Date {
    int day;
    int month;
    int year;
};

// Function to initialize the date with default values
void initDate(struct Date* ptrDate) {
    ptrDate->day = 1;
    ptrDate->month = 1;
    ptrDate->year = 2000;
}

// Function to print the date to the console
void printDateOnConsole(struct Date* ptrDate) {
    printf("Date: %02d/%02d/%04d\n", ptrDate->day, ptrDate->month, ptrDate->year);
}

// Function to accept a date from the user
void acceptDateFromConsole(struct Date* ptrDate) {
    printf("Enter day: ");
    scanf("%d", &ptrDate->day);
    printf("Enter month: ");
    scanf("%d", &ptrDate->month);
    printf("Enter year: ");
    scanf("%d", &ptrDate->year);
}

// Function to display the menu and get the user's choice
int menu() {
    int choice;
    printf("\nMenu:\n");
    printf("0. EXIT\n");
    printf("1. Initialize Date\n");
    printf("2. Accept Date from Console\n");
    printf("3. Print Date on Console\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    return choice;
}

int main() {
    struct Date date;  // Declare a Date structure
    int choice;

    while ((choice = menu()) != 0) {
        switch (choice) {
            case 1:
                initDate(&date);
                printf("Date initialized successfully.\n");
                break;
            case 2:
                acceptDateFromConsole(&date);
                break;
            case 3:
                printDateOnConsole(&date);
                break;
            default:
                printf("Invalid choice! Please try again.\n");
                break;
        }
    }

    return 0;
}
