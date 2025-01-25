#include<stdlib.h>
#include<stdio.h>

struct Node {
    int data;
    struct Node* next; 
};

int countNodes(struct Node* head)
{
    int result = 1;
    if(head == NULL)
        return 0;
    struct Node* curr = head;
    while(curr != NULL && curr->next != head)
    {
        result++;
        curr = curr->next;
    }
    return result;
}

struct Node* createNode(int new_data)
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->next = NULL;
    new_node->data = new_data;
    return (new_node);
}

int main() {
    struct Node* head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);
    head->next->next->next = createNode(4);
    head->next->next->next->next = createNode(5);
    head->next->next->next->next->next = head; 
    printf("%d\n" , countNodes(head));
    return 0;
} 
