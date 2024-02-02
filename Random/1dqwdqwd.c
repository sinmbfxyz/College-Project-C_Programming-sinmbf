#include <stdio.h>
#include <string.h>

//Defining the structure for the military record system
typedef struct {
    char name[100];
    char serviceNumber[100];
    char rank[100];
    char address[100];
    char telephoneNumber[100];
} MilitaryRecord;

// Function to input details of the soldier
void inputDetails(MilitaryRecord *soldier) {
    printf("Enter the name of the soldier: ");
    scanf("%[^\n]", soldier->name);
    getchar();

    printf("Enter the service number of the soldier: ");
    scanf("%[^\n]", soldier->serviceNumber);
    getchar();

    printf("Enter the rank of the soldier: ");
    scanf("%[^\n]", soldier->rank);
    getchar();

    printf("Enter the address of the soldier: ");
    scanf("%[^\n]", soldier->address);
    getchar();

    printf("Enter the telephone number of the soldier: ");
    scanf("%[^\n]", soldier->telephoneNumber);
    getchar();
}

// Function to display details of the soldier
void displayDetails(MilitaryRecord *soldier) {
    printf("\n\nDetails of the soldier are as follows:\n");
    printf("Name: %s\n", soldier->name);
    printf("Service Number: %s\n", soldier->serviceNumber);
    printf("Rank: %s\n", soldier->rank);
    printf("Address: %s\n", soldier->address);
    printf("Telephone Number: %s\n", soldier->telephoneNumber);
}

int main() {
    MilitaryRecord soldier;
    inputDetails(&soldier);
    displayDetails(&soldier);
    return 0;
}
