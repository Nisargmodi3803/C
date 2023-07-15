#include <stdio.h>
#include <stdlib.h>

struct employee
{
    char name[20];
    int id;
    int salary;
};
struct employee e1;

void display(struct employee* );

int main()
{
    struct employee e1 = {"Nisarg",48,1500000};
    struct employee *ptr=&e1;

    display(ptr);

    return 0;
}

void display(struct employee *emp)
{
    printf("Name : %s\n",emp->name);
    printf("ID : %d\n",emp->id);
    printf("Salary : %d\n",emp->salary);

}
