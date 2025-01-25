#include<stdio.h>
#include<stdlib.h>
    // create hard coded tree
    //       26
    //      /  \
    //     10   3
    //    / \    \
    //   4  6     3

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};
int isSumTree(struct Node* root){
    if(root == NULL ||(root->left == NULL && root->right == NULL))
        return 1;
    int leftsum = sum
}

struct Node* createNode(int x) {
    struct Node* node = 
      (struct Node*)malloc(sizeof(struct Node));
    node->data = x;
    node->left = node->right = NULL;
    return node;
}



int main() {
  
    // create hard coded tree
    //       26
    //      /  \
    //     10   3
    //    / \    \
    //   4  6     3
    struct Node* root = createNode(26);
    root->left = createNode(10);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(6);
    root->right->right = createNode(3);

    if (isSumTree(root))
        printf("True");
    else
        printf("False");

    return 0;
}

