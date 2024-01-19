#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef enum status {
    Married,
    Single,
    Divorced,
    Engaged
}rel_status;

typedef struct person
{
    char name[10];
    int age;
    rel_status stat;
}person;

void print_person(person p){
    char str[][10]={
        "Married",
        "Single",
        "Divorced",
        "Engaged"
    };
    printf("%s %d %s",p.name,p.age,str[p.stat]);
}
typedef struct social_net
{
    person per[100];
    int size;
}social_net;

int main(){
    social_net social;
    social.per[1]
    strcpy(p1.name,"v");
    p1.age=18;
    p1.stat=Single;
    print_person(p1);
    return 0;
}
