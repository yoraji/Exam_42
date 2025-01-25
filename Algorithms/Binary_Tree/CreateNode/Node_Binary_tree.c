#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* newNode(int data){
    struct Node* head = (struct Node*)malloc(sizeof(struct Node*));
    head->data = data;
    head->left = head->right =NULL;
    return head;
}

int main()
{
    struct Node* first = newNode(2);
    struct Node* second = newNode(3);
    struct Node* second1 = newNode(4);
    struct Node* second2 = newNode(5);
    
    // concetion :
    first->left = second;
    first->right = second1;
    second->left = second2;
    return 0;
}
