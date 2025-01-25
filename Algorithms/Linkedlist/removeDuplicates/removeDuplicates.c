#include <stdlib.h>
#include <stdio.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* removeDuplicate(struct Node* head) {
    struct Node* curr = head;
    while (curr != NULL && curr->next != NULL) {
        if (curr->data == curr->next->data) {
            struct Node* temp = curr->next; // Duplicate node
            curr->next = curr->next->next; // Remove duplicate
            free(temp); // Free memory
        } else {
            curr = curr->next;
        }
    }
    return head;
}

void printList(struct Node* node) {
    while (node != NULL) {
        printf(" %d ->", node->data);
        node = node->next;
    }
    printf(" NULL\n");
}

struct Node* create(int data) {
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->next = NULL;
    ptr->data = data;
    return ptr;
}

int main() {
    struct Node* head = create(11);
    head->next = create(11);
    head->next->next = create(11);
    head->next->next->next = create(13);
    head->next->next->next->next = create(13);
    head->next->next->next->next->next = create(20);

    printf("Linked list before duplicate removal:\n");
    printList(head);

    head = removeDuplicate(head);

    printf("Linked list after duplicate removal:\n");
    printList(head);

    return 0;
}

