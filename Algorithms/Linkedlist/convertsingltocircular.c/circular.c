#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* creat(int new_data){
    struct Node* new = (struct Node*)malloc(sizeof(struct Node*));
    new->data = new_data;
    new->next = NULL;
    return (new);
}

struct Node* circular(struct Node* head)
{
    struct Node* curr = head;
    while(curr->next != NULL){
        curr = curr->next;
    }
    curr->next = head;
    return (head);
}

void display(struct Node* head)
{
    while(head){
        printf(" %d -->",head->data);
        head = head->next;
    }
}
int main ()
{
    struct Node* head = creat(15);
    head->next = creat(14);
    head->next->next = creat(13);
    head->next->next->next = creat(22);
    head->next->next->next->next = creat(17);
    circular(head);
    display(head);
}
