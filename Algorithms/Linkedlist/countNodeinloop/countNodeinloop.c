#include<stdlib.h>
#include<stdio.h>

struct Node {
    int data;
    struct Node* next;
};

int countNodes(struct Node* key) {
    int res = 1;
    struct Node* temp = key;
    while(temp->next != key){
        res++;
        temp = temp->next;
    }
    return res;
}
/** 
 * this function detect and count loop nodes in the list.if loop is not there
 * then returns 0 
 */

int countnodesinloop(struct Node* list)
{
   struct Node *slow = list, *fast = list;
   while(slow && fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast)
            return countNodes(slow);
   }
   return 0;
}

struct Node* create(int key)
{
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node*));
    temp->data = key;
    temp->next = NULL;
    return temp;
}
int main(){
    struct Node* head = create(1);
    head->next = create(2);
    head->next->next = create(3);
    head->next->next->next = create(4);
    head->next->next->next->next = create(5);
    head->next->next->next->next->next = head->next;
    printf("%d \n",countnodesinloop(head));
    return 0;
}
