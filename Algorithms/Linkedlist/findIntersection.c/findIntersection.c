#include <stdlib.h>
#include <stdio.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* create(int key) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = key;
    node->next = NULL;
    return node;
}

Node* findIntersection(Node* head1, Node* head2) {
    Node *p1 = head1, *p2 = head2;
    Node *head = NULL, *tail = NULL;

    while (p1 && p2) {
        if (p1->data > p2->data) {
            p2 = p2->next;
        } else if (p2->data > p1->data) {
            p1 = p1->next;
        } else {
            if (head == NULL) {
                head = tail = create(p1->data);
            } else {
                tail->next = create(p1->data);
                tail = tail->next;
            }
            p1 = p1->next;
            p2 = p2->next;
        }
    }
    return head;
}

void printList(Node* head) {
    Node* curr = head;
    if (curr == NULL) {
        printf("List is empty\n");
        return;
    }
    while (curr != NULL) {
        printf("%d", curr->data);
        if (curr->next != NULL) {
            printf(" -> ");
        }
        curr = curr->next;
    }
    printf("\n");
}

void freeList(Node* head) {
    Node* tmp;
    while (head != NULL) {
        tmp = head;
        head = head->next;
        free(tmp);
    }
}

int main() {

    Node* head1 = create(1);
    head1->next = create(2);
    head1->next->next = create(3);
    head1->next->next->next = create(4);
    head1->next->next->next->next = create(6);

    Node* head2 = create(2);
    head2->next = create(4);
    head2->next->next = create(6);
    head2->next->next->next = create(8);

    printList(head1);printList(head2);printf("\n");
    Node* result = findIntersection(head1, head2);
    printList(result);

    freeList(head1);
    freeList(head2);
    freeList(result);
    return 0;
}

