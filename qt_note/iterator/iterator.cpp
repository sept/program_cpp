#include <iostream>
#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

typedef struct student
{
    int num;
    struct student *next;
}stu;

stu *creat_link(void)
{
    int i;
    stu *head = NULL;
    stu *p = NULL;

    head = p = new(stu);
    if (head = NULL)
    {
        perror("new");
        exit(-1);
    }
    p->num = 0;
    p->next = NULL;
   
    for (i = 1; i < 6; i++)
    {
        p->next = new stu;
        if (p->next == NULL)
        {
            perror ("new failed");
            exit(-1);
        }

        p->next->num = i;
        p->next->next = NULL;
        p = p->next;
    }

    return head;
}

void print_link(stu *p)
{
    while (p != NULL)
    {
        cout<<p->num<<endl;
        p = p->next;
    }

}
void delete_link(stu *p)
{
    stu *tmp = NULL;

    while (p != NULL)
    {
        tmp = p;
        p = p->next;
        delete tmp;
    }
}

int main(void)
{
    stu *tmp = NULL;
    tmp = creat_link();
    print_link(tmp);
    delete_link(tmp);

    return 0;
}
