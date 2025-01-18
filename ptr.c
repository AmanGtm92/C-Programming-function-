// #include<stdio.h>
// int main()
// {
//    int a=200;
//    int *pr;
//    pr=&a;
//     printf("\nthe value of a = %u",&a);
//     printf("\nthe value of pr = %u",pr);

//     printf("\nthe value %d",a);
//     printf("\n%d",pr);

//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// struct student
// {
//     int marks;
//     int id;
//     char name;
// };

// int main()
// {
//     struct student aman, neha, aditya;
//     aman.id = 2024218;
//     neha.char = N;
//     printf("your's id :- %d", aman.id);
//     pritnf("fav cahracter of neha %c\n",neha.char);
//     return 0;
    
// }


#include<stdio.h>
#include<string.h>
struct student
{
    int age;
    int rollnum;
    float marks;
    char name[20];

};
int main()
{

struct student s1;
s1.age = 18;
s1.rollnum = 2024218;
s1.marks = 87.23;

printf("your age are %s\n",s1.age);
printf("yoy marks are %f\n",s1.marks);

return 0;

}
