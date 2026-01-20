#include <stdio.h>
#include <stdlib.h>

struct student {
    int id;
    int Maths;
    int Science;
    struct student *next;
};

struct student *head = NULL;

void createSampleList() {
    int i;
    struct student *temp, *newnode;

    for (i = 1; i <= 5; i++) {
        newnode = (struct student *)malloc(sizeof(struct student));
        newnode->id = i;
        newnode->Maths = 50 + i;
        newnode->Science = 60 + i;
        newnode->next = NULL;

        if (head == NULL) {
            head = newnode;
            temp = head;
        } else {
            temp->next = newnode;
            temp = newnode;
        }
    }
}

void insertEntry() {
    int id, choice;
    struct student *newnode, *temp, *prev = NULL;

    newnode = (struct student *)malloc(sizeof(struct student));
    printf("Enter new student ID, Maths, Science: ");
    scanf("%d %d %d", &newnode->id, &newnode->Maths, &newnode->Science);
    newnode->next = NULL;

    printf("Enter ID to insert before/after: ");
    scanf("%d", &id);

    printf("1. Insert Before\n2. Insert After\n");
    scanf("%d", &choice);

    temp = head;

    while (temp != NULL && temp->id != id) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("ID not found\n");
        return;
    }

    if (choice == 1) {   
        if (temp == head) {
            newnode->next = head;
            head = newnode;
        } else {
            prev->next = newnode;
            newnode->next = temp;
        }
    } 
    else if (choice == 2) {   
        newnode->next = temp->next;
        temp->next = newnode;
    } 
    else {
        printf("Invalid choice\n");
    }
}

void displayList() {
    struct student *temp = head;

    if (temp == NULL) {
        printf("List is empty\n");
        return;
    }

    printf("ID\tMaths\tScience\n");
    while (temp != NULL) {
        printf("%d\t%d\t%d\n", temp->id, temp->Maths, temp->Science);
        temp = temp->next;
    }
}

int main() {
    int choice;
    createSampleList();

    while (1) {
        printf("\nMenu\n");
        printf("1. Insert Entry\n");
        printf("2. Display List\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: insertEntry(); break;
            case 2: displayList(); break;
            case 3: exit(0);
            default: printf("Invalid choice\n");
        }
    }
}