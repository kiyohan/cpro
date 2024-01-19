                     Question 1
                                        


## Introduction

The program described here is a simple implementation of a banking system in C. It allows for various operations on bank accounts, such as creating accounts, deleting accounts, performing transactions, displaying account information, and identifying low-balance accounts. The program employs a singly linked list data structure to manage the account data.

## Data structures

- Linked List: A singly linked list is used to manage bank accounts. Each node in the linked list contains an AccountInfo structure to store account information and a pointer to the next node. The linked list is the primary data structure for account management.

- Enum: The code uses an enumeration type ac_type to represent the account type (either "savings" or "current"). It is used to specify the account type in the AccountInfo structure.

- Structures: The program defines two structures: struct AccountInfo to represent account information and struct Node to represent a node in the linked list. The AccountInfo structure contains fields for account number, account type, account holder name, and balance. The Node structure contains an AccountInfo field and a struct Node* next pointer to the next node.




## Functions

#### append(p, l):
 This function takes an AccountInfo object p and a linked list l as parameters. It appends the account represented by p to the end of the linked list. If the list is empty (i.e., l is NULL), it creates a new node.

#### bubbleSort(head):
 This function is used for sorting the linked list of accounts based on the account number. It employs the bubble sort algorithm. The head parameter is a pointer to the head of the linked list.


#### account_number_generator(l):
 This function calculates a unique account number for a new account based on the number of existing accounts in the linked list l. It ensures that each account number is unique.

#### add_to_list(p, l):
 This function adds a new account, represented by AccountInfo object p, to the linked list l. Before adding, it checks if an account with the same name and type already exists in the list to avoid duplicates.

#### deleteAccount(type, name):
 This function deletes an account based on its type and account holder name. It ensures that the account exists before attempting to delete it. The function frees the memory associated with the deleted account.

#### createAccount(c, name, balance):
 This function creates a new AccountInfo object with the provided account type, name, and balance. It sets the account type and copies the name and balance accordingly.

#### display(l):
 This function is responsible for displaying the account information in a tabular format. It also calls the bubbleSort function to sort the accounts by account number before displaying them.
#### lowBalanceAccounts(l):
 This function identifies and displays accounts with balances lower than 100. It also calls the bubbleSort function to sort the accounts before displaying them.

#### transaction(account_num, amount, code):
 This function performs transactions, such as deposits or withdrawals, on a specific account based on the account number (account_num) and transaction code (code). It checks for the account's existence and ensures that the account's balance is sufficient for withdrawal.

## Main
In the main function, the program interacts with the user through a command-line interface (CLI). The user can input commands to create accounts, display accounts, delete accounts, check for low-balance accounts, and perform transactions. The program continues running in an infinite loop until the user enters the "EXIT" command.

Each of the commands and functionalities is implemented based on the functions described above, this program is about a basic bank management system.





                      Question 2

## Introduction

The program presented here deals with n-dimensional complex numbers and offers various operations such as addition, subtraction, dot product, and cosine similarity calculations. To manage these complex numbers, the code employs a linked list data structure.

## Note

### IMPORTANT: 
If you encounter an error related to square root (sqrt) during the compilation, please compile the code using the following command: "gcc 2q.c -lm". This is necessary because, in some cases, the math library (math.h) is not directly linked to the program during normal compilation.

## Data structures
- Linked List: A singly linked list is used to store complex numbers. Each node in the linked list contains an int data field to store a component of the complex number and a pointer to the next node. The linked list is used to manage and manipulate complex numbers.

- Structures: The program defines a structure struct Node to represent a node in the linked list. The structure contains an int data field for storing complex number components and a struct Node* next pointer to the next node.


## Functions

#### linkedListTraversal(head):
 This function takes the head node of a linked list as a parameter and is responsible for printing the entire linked list. It is used to display the results of addition and subtraction operations on complex numbers.

#### append(p, head):
 This function takes a float 'p' and the head node of a linked list as parameters. It appends the float 'p' to the end of the linked list, extending its length.

#### add(c1, c2):
 This function takes two linked lists, 'c1' and 'c2', as parameters. It performs the addition of the complex numbers represented by 'c1' and 'c2' (c1 + c2) and stores the result in a new linked list 'c3'. The function returns 'c3'.

#### sub(c1, c2):
 This function also takes two linked lists, 'c1' and 'c2', as parameters. It calculates the subtraction of the complex numbers represented by 'c1' and 'c2' (c1 - c2) and stores the result in a new linked list 'c3'. The function returns 'c3'.

#### dot(c1, c2):
 This function accepts two linked lists, 'c1' and 'c2', as parameters. It calculates the dot product of the complex numbers represented by 'c1' and 'c2' and stores the result in a floating-point variable 'sum'. The function returns 'sum'.

#### modulus(c):
 This function takes a linked list 'c' as a parameter. It computes the modulus of the complex number represented by 'c' by summing the squares of its coefficients and taking the square root. The function returns this modulus as a floating-point value.

#### cosine(c1, c2):
 This function takes two linked lists, 'c1' and 'c2', as parameters. It computes the cosine similarity of the complex numbers 'c1' and 'c2' using the formula DOT(a, b) / (|a| * |b|) and returns the result as a floating-point value 'cos'.

## Main

In the main function, the above-described functions are called based on the input provided in the command-line interface (CLI). Here, two linked lists 'c1' and 'c2' are created. The main function operates within an infinite while loop, continuously processing user input until the user enters '-1'.



                      Question 3
                        

## Introduction

The program described here is a C implementation that works with a singly linked list data structure to manage a list of colors. It provides functionality to append colors to the linked list, remove duplicate values from the list, and traverse the modified linked list to display its content.

## Data structures
- Linked List: A singly linked list is used to store complex numbers. Each node in the linked list contains an int data field to store a component of the color and a pointer to the next node. The linked list is used to manage and manipulate colors.

- Structures: The program defines a structure struct Node to represent a node in the linked list. The structure contains an int data field for storing color components and a struct Node* next pointer to the next node.
 
## Functions

#### append(p, l):
 This function takes an colors p and a linked list l as parameters. It appends the colors p to the end of the linked list. If the list is empty (i.e., l is NULL), it creates a new node and sets its data to p.

#### linkedListTraversal(ptr):
 This function is used to traverse the linked list and print its content in a specific format. It starts from the provided ptr (the head of the linked list) and prints each colors in the list, separated by arrows (->).

#### removeDuplicates(l):
 This function removes duplicate values from the linked list l. It iterates through the list and removes any duplicate values while preserving the order of the unique values.

## Main

In the main function, the program interacts with the user through the command-line interface (CLI). The user is prompted to enter the number of colors to be added to the linked list and then enter the colors themselves.

- The append function is used to add each colors to the linked list.
- The removeDuplicates function is called to remove any duplicate values from the list.
- The linkedListTraversal function is used to print the modified linked list in the specified format.
- This code is designed to work with colors and provides a simple program for eliminating duplicates from a linked list of colors, making it a linked list with unique colors.

