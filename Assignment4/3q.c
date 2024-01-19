#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
}Node;

typedef Node* LinkedList;

LinkedList append(int p, LinkedList l) {   
    if (l == NULL) {
        
        Node* D = (Node *) malloc(sizeof(Node));
        D->data = p;
        D->next = NULL;
        return D;
    } else {
        l->next = append(p, l->next);
    }
    return l;
}

void linkedListTraversal(struct Node *ptr)
{
    printf("Modified linked list: ");
    while (ptr != NULL)
    {
        if (ptr->next==NULL)
        {
            printf("%d",ptr->data);
            break;
        }
        
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
}

LinkedList removeDuplicates(LinkedList l) {
    if (l == NULL) {
        return l;
    }
    
    LinkedList current = l;
    while (current->next != NULL) {
        if (current->data == (current->next)->data) {
            LinkedList temp = current->next;
            current->next = temp->next;
            free(temp);
        } else {
            current = current->next;
        }
    }
    
    return l;
}


int main(){
   LinkedList l;
   printf("Enter the number of colors in the list:");
   int size;
   scanf("%d",&size);
   printf("Enter the colors:");
   int temp;
   for (int i = 0; i < size; i++)
   {
    scanf("%d",&temp);
    l=append(temp,l);
   }


    removeDuplicates(l);
    linkedListTraversal(l);

   
}