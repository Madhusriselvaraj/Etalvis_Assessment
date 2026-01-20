#include <stdio.h>
#include <stdlib.h>

struct student {
    struct student *prev;
    int id;
    int Maths;
    int Science;
    struct student *next;
};

struct student *head = NULL;

/* Create a new node */
struct student* createNode(int id, int m, int s) {
    struct student *newNode = (struct student*)malloc(sizeof(struct student));
    newNode->id = id;
    newNode->Maths = m;
    newNode->Science = s;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

/* Insert after given ID */
void insertAfter(int key) {
    struct student *temp = head;
    while (temp && temp->id != key)
        temp = temp->next;

    if (!temp) {
        printf("ID not found\n");
        return;
    }

    int id, m, s;
    printf("Enter ID, Maths, Science: ");
    scanf("%d%d%d", &id, &m, &s);

    struct student *newNode = createNode(id, m, s);

    newNode->next = temp->next;
    newNode->prev = temp;

    if (temp->next)
        temp->next->prev = newNode;

    temp->next = newNode;
}

/* Insert before given ID */
void insertBefore(int key) {
    struct student *temp = head;
    while (temp && temp->id != key)
        temp = temp->next;

    if (!temp) {
        printf("ID not found\n");
        return;
    }

    int id, m, s;
    printf("Enter ID, Maths, Science: ");
    scanf("%d%d%d", &id, &m, &s);

    struct student *newNode = createNode(id, m, s);

    newNode->next = temp;
    newNode->prev = temp->prev;

    if (temp->prev)
        temp->prev->next = newNode;
    else
        head = newNode;

    temp->prev = newNode;
}

/* Delete by ID */
void deleteEntry(int key) {
    struct student *temp = head;

    while (temp && temp->id != key)
        temp = temp->next;

    if (!temp) {
        printf("ID not found\n");
        return;
    }

    if (temp->prev)
        temp->prev->next = temp->next;
    else
        head = temp->next;

    if (temp->next)
        temp->next->prev = temp->prev;

    free(temp);
    printf("Entry deleted\n");
}

/* Display list */
void display() {
    struct student *temp = head;
    printf("\nID\tMaths\tScience\n");
    while (temp) {
        printf("%d\t%d\t%d\n", temp->id, temp->Maths, temp->Science);
        temp = temp->next;
    }
}

/* Main */
int main() {
    int choice, key;

    /* Create 5 initial entries */
    head = createNode(1, 80, 85);
    head->next = createNode(2, 75, 90);
    head->next->prev = head;
    head->next->next = createNode(3, 88, 92);
    head->next->next->prev = head->next;
    head->next->next->next = createNode(4, 70, 78);
    head->next->next->next->prev = head->next->next;
    head->next->next->next->next = createNode(5, 95, 98);
    head->next->next->next->next->prev = head->next->next->next;

    while (1) {
        printf("\n--- MENU ---\n");
        printf("1. Insert Entry\n");
        printf("2. Delete Entry\n");
        printf("3. Display List\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter ID to insert before/after: ");
            scanf("%d", &key);
            printf("1. Insert Before\n2. Insert After\n");
            scanf("%d", &choice);
            if (choice == 1)
                insertBefore(key);
            else
                insertAfter(key);
            break;

        case 2:
            printf("Enter ID to delete: ");
            scanf("%d", &key);
            deleteEntry(key);
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
