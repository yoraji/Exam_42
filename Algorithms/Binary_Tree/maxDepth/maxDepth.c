#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
} Node;

Node* createNode(int key){
    Node* head = (Node *)malloc(sizeof(Node));
    head->data = key;
    head->left = head->right = NULL;
    return head;
}

//Rturn MaxDepth which is a number
int maxDepth(Node* node){
    if(node == NULL)
        return 0;
    int leftHight = maxDepth(node->left);
    int rightHight = maxDepth(node->right);
    return (leftHight > rightHight ? leftHight : rightHight)+1;
}

int main(){
    Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    printf("%d\n",maxDepth(root));
    return 0;
}
