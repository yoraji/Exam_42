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

void printList(struct Node *head){
    struct Node *curr = head;
    while(curr->next != NULL){
        printf(" %d ->",curr->data);
        curr = curr->next;
    }
    printf(" NULL\n");
}

int main()
{
    struct Node* head = create(40);
    head->next = create(20);
    head->next->next = create(60);
    head->next->next->next = create(10);
    head->next->next->next->next = create(50);
    head->next->next->next->next->next = create(30);
    
    printList(head);
  
}


