#include <stdio.h>
#include <stdlib.h>

struct student {
    int id;
    int Maths;
    int Science;
    struct student *next;
};

struct student *top = NULL;

/* ADD: Insert at top (front) */
void add() {
    struct student *newNode = (struct student*)malloc(sizeof(struct student));

    printf("Enter ID, Maths, Science: ");
    scanf("%d%d%d", &newNode->id, &newNode->Maths, &newNode->Science);

    newNode->next = top;
    top = newNode;

    printf("Entry added\n");
}

/* REMOVE: Remove from bottom (rear) */
void removeEntry() {
    struct student *temp = top, *prev = NULL;

    if (top == NULL) {
        printf("Queue is empty\n");
        return;
    }

    if (top->next == NULL) {
        printf("Removed: ID=%d\n", top->id);
        free(top);
        top = NULL;
        return;
    }

    while (temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }

    printf("Removed: ID=%d\n", temp->id);
    prev->next = NULL;
    free(temp);
}

/* DISPLAY: From top to bottom */
void display() {
    struct student *temp = top;

    if (top == NULL) {
        printf("Queue is empty\n");
        return;
    }

    printf("\nID\tMaths\tScience\n");
    while (temp != NULL) {
        printf("%d\t%d\t%d\n", temp->id, temp->Maths, temp->Science);
        temp = temp->next;
    }
}

/* MAIN */
int main() {
    int choice;

    while (1) {
        printf("\n--- MENU ---\n");
        printf("1. Add\n");
        printf("2. Remove\n");
        printf("3. Display Stack\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            add();
            break;
        case 2:
            removeEntry();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice\n");
        }
    }
}
