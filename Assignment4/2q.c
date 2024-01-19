#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

typedef struct Node{
    float data;
    struct Node *next;
}Node;

typedef Node* LinkedList;

void linkedListTraversal(struct Node *ptr){
    printf("Result: ");
    while (ptr != NULL)
    {
        printf("%.2f ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}


LinkedList append(float p, LinkedList l) {   
    if (l == NULL) {
        // Node D = {{"Raj", 18}, NULL};
        Node* D = (Node *) malloc(sizeof(Node));
        D->data = p;
        D->next = NULL;
        return D;
    } else {
        l->next = append(p, l->next);
    }
    return l;
}

LinkedList add(LinkedList c1,LinkedList c2){
    LinkedList c3=NULL;
    while (c1!=NULL)
    {
        c3=append(c1->data+c2->data,c3);
        c1=c1->next;
        c2=c2->next;
    }
    
    return c3;
}

LinkedList sub(LinkedList c1,LinkedList c2){
    LinkedList c3=NULL;
    while (c1!=NULL)
    {
        c3=append(c1->data-c2->data,c3);
        c1=c1->next;
        c2=c2->next;
    }
    
    return c3;
}

float dot(LinkedList c1,LinkedList c2){
    
    float sum=0;
    while (c1!=NULL)
    {
        sum+=c1->data*c2->data;
        c1=c1->next;
        c2=c2->next;
    }
    
    
    return sum;
}

float modulus(LinkedList c){
    float sum=0;
    while (c!=NULL)
    {
        sum+=c->data*c->data;
        c=c->next;
    }

    sum=sqrt(sum);
    
    return sum;
}

float cosine(LinkedList c1,LinkedList c2){
    
    float cos=dot(c1,c2)/(modulus(c1)*modulus(c2));

    return cos;
}




int main(){
    int x=0;
    while (x!=-1)
    {
        LinkedList c1=NULL;
        LinkedList c2=NULL;
        LinkedList ans;
        char str[7];
        scanf("%s",str);
        int dimension;
        scanf("%d",&dimension);
        float temp;

        for (int i = 0; i < dimension; i++)
        {
            scanf("%f",&temp);
            c1=append(temp,c1); 
        }
        for (int i = 0; i < dimension; i++)
        {
            scanf("%f",&temp);
            c2=append(temp,c2); 
        }
        

        if (strcmp(str,"ADD")==0)
        {
            ans=add(c1,c2);
            linkedListTraversal(ans);
        }
        else if (strcmp(str,"SUB")==0)
        {
            ans=sub(c1,c2);
            linkedListTraversal(ans);
        }
        else if (strcmp(str,"DOT")==0)
        {
            printf("Result: %.2f\n",dot(c1,c2));
        }
        else if (strcmp(str,"COSINE")==0)
        {
            printf("Result: %.2f\n",cosine(c1,c2));
        }
        
        scanf("%d",&x);
        
         
    }
    
}