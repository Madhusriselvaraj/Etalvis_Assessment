#include <stdio.h>
#include <stdlib.h>

struct student {
    int id;
    int Maths;
    int Science;
    struct student *next;
};

int main() {
    struct student *head = NULL, *tail = NULL;

    while (1) {
        struct student *newNode = malloc(sizeof(struct student));
        if (!newNode) return 1;

        printf("Enter student ID (-1 to stop): ");
        if (scanf("%d", &newNode->id) != 1) {
            printf("Invalid input\n");
            return 1;
        }

        if (newNode->id == -1) {
            free(newNode);
            break;
        }

        printf("Enter Maths mark: ");
        if (scanf("%d", &newNode->Maths) != 1) {
            printf("Invalid input\n");
            return 1;
        }

        printf("Enter Science mark: ");
        if (scanf("%d", &newNode->Science) != 1) {
            printf("Invalid input\n");
            return 1;
        }

        newNode->next = NULL;

        if (head == NULL)
            head = tail = newNode;
        else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    printf("\n--- Student Records ---\n");
    struct student *temp = head;
    while (temp != NULL) {
        printf("ID: %d | Maths: %d | Science: %d\n",
               temp->id, temp->Maths, temp->Science);
        temp = temp->next;
    }

    return 0;
}
