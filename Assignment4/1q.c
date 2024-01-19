#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef enum status {
    savings,
    current
}ac_type;

char str[2][20]={"savings","current"};


typedef struct AccountInfo{
    int AccountNumber;
    ac_type AccountType;
    char Name[50];
    float Balance;
    
}AccountInfo;

typedef struct Node{
    AccountInfo account;
    struct Node *next;
}Node;



typedef Node* LinkedList;

LinkedList list;

LinkedList append(AccountInfo p, LinkedList l) {   
    if (l == NULL) {
        
        Node* D = (Node *) malloc(sizeof(Node));
        D->account = p;
        D->next = NULL;
        return D;
    } else {
        l->next = append(p, l->next);
    }
    return l;

}

void bubbleSort(LinkedList* head) {
    int swapped;
    Node* current;
    Node* tail = NULL;

    LinkedList* currentPtr = head;  // Pointer to the current node pointer

    for (int i = 0; ; i++) {
        swapped = 0;
        current = *head;

        while (current->next != tail) {
            if (current->account.AccountNumber > current->next->account.AccountNumber) {
                // Swap the nodes
                AccountInfo temp = current->account;
                current->account = current->next->account;
                current->next->account = temp;
                swapped = 1;
            }
            current = current->next;
        }

        if (!swapped) {
            
            break;
        }

        tail = current; 

        
        currentPtr = &(*currentPtr)->next;
    }
}


int account_number_generator(LinkedList l){
    int i=0;
    Node* temp=l;
    while (temp!=NULL)
    {
        i++;
        temp=temp->next;
    }
    int set[i];
    temp=l;
    for (int k = 0; k < i; k++)
    {
        set[k]=k+100;
    }

    temp=l;
    for (int j=0 ; j < i ; j++)   
    {
        if (temp->account.AccountNumber==set[j])
        {
            temp=temp->next;
        }
        else
        {
            return set[j];
        }   
    }
    
    return i+100;
}


LinkedList add_to_list(AccountInfo p,LinkedList l){
    Node* D = (Node *) malloc(sizeof(Node));
    D=l;

    while (D!=NULL)
    {
        if (strcmp(D->account.Name,p.Name)==0 && D->account.AccountType==p.AccountType)
        {
            printf("Account Holder already exists\n");
            return l;
        }
        D=D->next;
    }
    l=append(p,l);

    printf("Account number: %d\n",p.AccountNumber);
    printf("Account Holder: %s\n",p.Name);
    printf("Account Type: %s\n",str[p.AccountType]);
    printf("Balance: Rs %.2f\n",p.Balance);
    
    return l;
}


LinkedList deleteAccount(char* type,char* name) {
    if (list==NULL)
    {
        printf("Invalid: User does not exist\n");
        return list;
    }

    if (strcmp(str[list->account.AccountType], type) == 0 && strcmp(list->account.Name, name) == 0) {
        Node *temp = list->next;
        free(list);
        printf("Account deleted successfully\n");
        return temp;
    }

    Node *prev = list;
    Node *current = list->next;

    while (current != NULL) {
        if (strcmp(str[current->account.AccountType], type) == 0 && strcmp(current->account.Name, name) == 0) {
            prev->next = current->next;
            free(current);
            printf("Account deleted successfully\n");
            return list;
        }
        prev = current;
        current = current->next;
    }

    printf("Invalid: User does not exist\n");
    return list;
}


AccountInfo createAccount(char* c,char* name,float balance){
    
    AccountInfo p;

    if (strcmp("savings", c) == 0) {
        p.AccountType = savings;
    } else if (strcmp("current", c) == 0) {
        p.AccountType = current;
    }

    strcpy(p.Name, name);

    p.Balance=balance;
    
    return p;
}


void display(LinkedList l){
    if (l==NULL)
    {
        printf("No Accounts to display\n");
        return;
    }
    bubbleSort(&l);
    printf("Account Number\tAccount Type\tName\t\tBalance\n");
    printf("-------------------------------------------------------------\n");
    while (l!=NULL)
    {
        printf("%d\t\t%s\t\t%s\t\t%.2f\n",l->account.AccountNumber,str[l->account.AccountType],l->account.Name,l->account.Balance);

        l=l->next;
    }
    
}

void lowBalanceAccounts(LinkedList l){
    if (l==NULL)
    {
        printf("No Accounts to display\n");
        return;
    }
    int c=0;
    bubbleSort(&l);
    while (l!=NULL)
    {
        if (l->account.Balance<100)
        {
            c++;
            printf("Account Number: %d,  Name: %s,  Balance:%.2f\n",l->account.AccountNumber,l->account.Name,l->account.Balance);
        }
        l=l->next;
    }
    if (c==0)
    {
        printf("No Accounts to display\n");
    }
}

void transaction(int account_num,float amount,int code){
    Node* temp=list;
    while (temp!=NULL)
    {
        if (temp->account.AccountNumber==account_num)
        {
            if (code==1)
            {
                temp->account.Balance+=amount;
                printf("Updated Balance is Rs %.2f\n",temp->account.Balance);
            }
            else if (code==0)
            {
                if (temp->account.Balance-amount<=100)
                {
                    printf("The balance is insufficient for the specified withdrawal.\n");
                }
                else
                {
                    temp->account.Balance-=amount;
                    printf("Updated Balance is Rs %.2f\n",temp->account.Balance);
                }  
            }
            return;
        }
        temp=temp->next;
    }
    printf("Invalid: User does not exist\n");
}

int main (){
    LinkedList l=NULL;
    while (1)
    {
        char c[12];
        scanf("%s",c);
        if (strcmp(c,"DISPLAY")==0)
        {
            display(l);
        }
        else if (strcmp(c,"CREATE")==0)
        {
            AccountInfo p;

            char type[10];
            scanf("%s", type);
            char name[51];
            scanf("%s", name);
            float balance;
            scanf("%f", &balance);

            p=createAccount(type,name,balance);

            p.AccountNumber=account_number_generator(l);
            
            l=add_to_list(p,l);
        }
        else if (strcmp(c,"DELETE")==0)
        {
            char type[10];
            scanf("%s", type);
            char name[51];
            scanf("%s", name);
            list=l;

            l=deleteAccount(type,name);
        }
        else if (strcmp(c,"LOWBALANCE")==0)
        {
            lowBalanceAccounts(l);
        }
        else if (strcmp(c,"TRANSACTION")==0)
        {
            int account_num;
            scanf("%d",&account_num);
            float amount;
            scanf("%f",&amount);
            int code;
            scanf("%d",&code);

            transaction(account_num,amount,code);
        }
        else if (strcmp(c,"EXIT")==0)
        {
            break;
        }
        

    }
        
}