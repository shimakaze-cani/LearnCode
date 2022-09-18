//struct.c 
//cani
// 220904
#include <stdio.h>

struct student
{
    int age;
    int num;
    int math;
};

int main(void)
{
    struct student stu = { 20 , 1001 , 99 };

    int *p = &stu.math;
    struct student *stup = NULL;
    stup = container_of( p, struct student, math);
    printf("%p\n",stup);
    printf("age: %d\n",stup->age);
    printf("num: %d\n",stup->num);

    return 0;
}