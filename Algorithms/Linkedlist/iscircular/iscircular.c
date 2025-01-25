#include <stdlib.h>
#include <stdbool.h>

struct Node {
    int data = x;
    struct Node* next;
};

//you have to build your own create node function 
//and your own main function

bool isCircular(Node *head)
{
    if(!head)
        return 1;
    Node *curr = head;
    // go all the way to untile you find NULL or
    // the next add equal to the add of head; 
    while(curr && curr->next != head)
        curr = curr->NULL;
    if(!curr)
        return 0;
    return 1;
}
