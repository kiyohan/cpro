#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef enum status {
    savings,
    current
}ac_type;

typedef struct person
{
    int ac_number;
    enum ac_type type;
    

}person;