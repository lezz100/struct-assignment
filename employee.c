#include <stdio.h>
#include <string.h>

struct Employee{
    char name[20];
    char id[10];
    int age;
    int salary;
};
int main(void){
    struct Employee Lesley;

    strcpy(Lesley.name,"Lesley");
    strcpy(Lesley.id,"012345");
    Lesley.age = 23;
    Lesley.salary = 10000;

    printf("Name: %s\n", Lesley.name);
    printf("id: %s\n", Lesley.id);
    printf("age: %d\n", Lesley.age);
    printf("salary: %d\n", Lesley.salary);

}
