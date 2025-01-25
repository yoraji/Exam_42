#include<stdlib.h>
#include<stdio.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *create(int data){
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node*));
    temp->data = data;
    temp->next = NULL;
    return temp;
}

struct Node* reverse(struct Node* head){
    struct Node* prev =NULL;
    struct Node* next;
    struct Node* curr =head;
    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

void printList(struct Node *head){
    struct Node *curr = head;
    while(curr != NULL){
        printf(" %d ->",curr->data);
        curr = curr->next;
    }
    printf(" NULL\n");
}

int main()
{
    struct Node* head = create(10);
    head->next = create(20);
    head->next->next = create(30);
    head->next->next->next = create(40);
    head->next->next->next->next = create(50);
    head->next->next->next->next->next = create(60);
    
    printList(head);

    head = reverse(head);

    printList(head);

  
}

