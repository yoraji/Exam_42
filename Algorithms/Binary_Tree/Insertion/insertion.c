#include<stdio.h>
#include<stdlib.h>

//define the structre for the binary tree node
typedef struct Node{
    int data;
    struct Node* left;
    struct Node* right;
}   Node;
/*
 * this quick demonstrations to this node :
 *----------------------------------------------------------------
 *               2              |QUICK DEMONSTRATION THE TO THIS 
 *              / \             |BINARY TREE... {insertion}
 *             3   4            |
 *            /                 |
 *           5                  |
 *-------------------------------------------------------------------
    After the complation you will see that that Algo goes from bottom
    -left to the root and then to the bottom-right {inoreder function}
 *-------------------------------------------------------------------
*/

//pre-order DFS: Root ,Left ,Right
void preOrderDFS(Node *node){
    if(node == NULL)
        return ;
    printf("%d ",node->data);
    preOrderDFS(node->left);
    preOrderDFS(node->right);
}

// in-order BFS: left ,Root, right
void inorder(Node *root){
    if(root != NULL){
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    
    }
}

// Function to search for a value in the binary tree using DFS
int searchDFS(struct Node* root, int value) {
    // Base case: If the tree is empty or we've reached a leaf node
    if (root == NULL) return 0;
    
    // If the node's data is equal to the value we are searching for
    if (root->data == value) return 1;
    
    // Recursively search in the left and right subtrees
    int left_res = searchDFS(root->left, value);
    int right_res = searchDFS(root->right, value);
      return left_res || right_res;
}


// create a new node with the given data
Node *createNode(int kay){
    Node *head =(Node*)malloc(sizeof(Node *));
    head->data = kay;
    head->left = NULL;
    head->right = NULL;
    return head;
}
// function to insert a new node in the new node here

int main() {
    Node* root = createNode(2);
    root->left = createNode(3);
    root->right = createNode(4) ;
    root->left->left = createNode(5);
    printf("Inorder traversal before insertion: \n");
    inorder(root);
    printf("\n");
    printf("Search in depht \n");
    printf("the value that you looking for is this :%d \n",searchDFS(root,4));
    printf("Pre-Oder traversal befor insertion : \n");
    preOrderDFS(root);
    printf("\n");


    free(root->left->left);
    free(root->left);
    free(root->right);
    free(root);

    return 0;
}
