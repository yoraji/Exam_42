#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *left,right;
};

// function to print level order traversal a tree
void printCurrentLevel(struct Node* root,int level){
    int height(root);
    int i=0;
    for(i=1;i<=height;i++)
        printCurrentLevel(root,i);
}

//print nodes at a current level 
void printCurrentLevel(struct Node* root,int level){
    if(root == NULL)
        return;
    if(level == 1)
        printf("%d ",root->data);
    else if(level > 1) {
        printCurrentLevel(root->left,level-1);
        printCurrentLevel(root->right,level-1);
    }
}


