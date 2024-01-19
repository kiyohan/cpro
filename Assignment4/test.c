// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// typedef enum {
//     Savings,
//     Current
// } ac_type;

// char str[2][20] = {"Savings", "Current"};

// typedef struct AccountInfo {
//     int AccountNumber;
//     ac_type AccountType;
//     char Name[50];
//     float Balance;

// } AccountInfo;

// typedef struct Node {
//     AccountInfo account;
//     struct Node *next;
// } Node;

// typedef Node *LinkedList;

// LinkedList append(AccountInfo p, LinkedList list) {
//     Node *newNode = (Node *)malloc(sizeof(Node));
//     if (newNode == NULL) {
//         printf("Memory allocation error\n");
//         exit(1);
//     }

//     newNode->account = p;
//     newNode->next = NULL;

//     if (list == NULL) {
//         return newNode;
//     } else {
//         Node *current = list;
//         while (current->next != NULL) {
//             current = current->next;
//         }
//         current->next = newNode;
//     }

//     return list;
// }

// int account_number_generator(LinkedList list){
//     int i=0;
//     Node* temp=list;
//     while (temp!=NULL)
//     {
//         i++;
//         temp=temp->next;
//     }
//     temp=list;
//     for (int j=100 ; j < i; j++)
//     {
//         if (temp->account.AccountNumber==j)
//         {
//             temp=temp->next;
//         }
//         else
//         {
//             return j;
//         }   
//     }
    
//     return i+100;
// }

// LinkedList create_account(AccountInfo p, LinkedList list) {
//     Node *current = list;
//     while (current != NULL) {
//         if (strcmp(current->account.Name, p.Name) == 0 && current->account.AccountType == p.AccountType) {
//             printf("Account Holder already exists\n");
//             return list;
//         }
//         current = current->next;
//     }
//     return append(p, list);
// }

// LinkedList scanner(LinkedList list) {
//     AccountInfo p;
//     char c[10];
//     scanf("%s", c);

//     if (strcmp("Savings", c) == 0) {
//         p.AccountType = Savings;
//     } else if (strcmp("Current", c) == 0) {
//         p.AccountType = Current;
//     } else {
//         printf("Invalid account type\n");
//         return list;
//     }

//     char name[51];
//     scanf("%s", name);
//     strcpy(p.Name, name);

//     scanf("%f", &p.Balance);
//     p.AccountNumber = account_number_generator(list);

//     return create_account(p, list);
// }

// void display(LinkedList list) {
//     if (list == NULL) {
//         printf("No Accounts to display\n");
//         return;
//     }
//     printf("Account Number\tAccount Type\tName\tBalance\n");
//     while (list != NULL) {
//         printf("%d\t\t%s\t\t%s\t%.2f\n", list->account.AccountNumber, str[list->account.AccountType],
//                list->account.Name, list->account.Balance);

//         list = list->next;
//     }
// }

// int main() {
//     LinkedList list = NULL;
//     while (1) {
//         char c[12];
        
//         scanf("%s", c);

//         if (strcmp(c, "DISPLAY") == 0) {
//             display(list);
//         } else if (strcmp(c, "CREATE") == 0) {
//             list = scanner(list);
//         } else if (strcmp(c, "EXIT") == 0) {
//             break;
//         }
//     }

    

//     return 0;
// }

LinkedList deleteAccount(char* type,char* name) {


    if (strcmp(str[list->account.AccountType], type) == 0 && strcmp(list->account.Name, name) == 0) {
        Node *temp = list->next;
        free(list);
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