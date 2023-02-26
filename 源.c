/**
* 
* 
    3、请编写程序，利用malloc函数开辟动态存储单元，顺序存放输入的10个学生数据，学生信息包含学号，姓名，性别，出生日期、分数，然后输出这10个学生中的平均分最高的学生的全部信息。定义描述学生信息（学号、姓名、性别、出生日期、4门课程成绩和平均分）的结构体类型如下： 
    struct date
    {        int month;
            int day;
            int year;
     };
    struct stu
    {
            int num;
            char name[20];
            char sex;
            struct date birth;
            float score[3];
             float ave;
        };

    4、用尾插法创建一个存放整数的单链表，以输入-1做结束标志，并打印输出单链表，然后求这批整数中的最大值。

    5、用尾插法创建一个存放字符串的单链表，以输入"stop"做结束标志，并打印输出单链表，然后求这批字符串的最大值。

    6、用尾插法创建一个存放多个学生（包括学号、姓名、成绩等）数据的链表，输入学生的学号为0做结束标志，然后输出该链表中学生的信息，并且输出这10个学生中的平均分最高的学生的全部信息。定义描述学生信息（学号、姓名、性别、出生日期、4门课程成绩和平均分）的结构体类型如下： 
    struct date
    {        int month;
            int day;
            int year;
     };
    struct stu
    {
            int num;
            char name[20];
            char sex;
            struct date birth;
            float score[3];
             float ave;
        };
* 
* 
*/



#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "string.h"
#include "stdlib.h"

// 1、请编写程序，利用malloc函数开辟动态存储单元，顺序存放输入的10个整数，然后求这10个整数中的最大值。
//typedef struct mys
//{
//    int data;
//    struct mys* next;
//}MyStruct;
//
//MyStruct* insert() {
//   MyStruct *p = malloc(sizeof(MyStruct));
//   scanf("%d",&p->data);
//   p->next = NULL;
//   return p;
//}
//
//
//int maxdate(int maxNum,int num) {
//    return maxNum>num?maxNum:num;
//}

//void main() {
//
//    MyStruct* a[10] = { NULL };
//    printf("请输入");
//    for (int i = 0; i < 10; i++) 
//        a[i] = insert(); 
//    int maxNum = a[0]->data;
//    for (int i = 1; i < 10; i++)
//        maxNum = maxdate(maxNum,a[i]->data);
//    printf("%d", maxNum);
//
//    getchar();
//    return 0;
//}


//2、请编写程序，利用malloc函数开辟动态存储单元，顺序存放输入的10个字符串，然后求10个字符串的最大值。
//typedef struct mys
//{
//    char* data;
//    struct mys* next;
//}MyStruct;
//
//MyStruct* insert() {
//    MyStruct* p = malloc(sizeof(MyStruct));
//    scanf("%s", &p->data);
//    p->next = NULL;
//    return p;
//}
//
//
//int maxdate(char* maxNum, char* num) {
//    return maxNum > num ? maxNum : num;
//}


typedef  char SString[50 + 1];






void main() {

    //MyStruct* a[10] = { NULL };
    //printf("请输入");
    //for (int i = 0; i < 10; i++) 
    //    a[i] = insert(); 
    //int maxNum = a[0]->data;
    //for (int i = 1; i < 10; i++)
    //    maxNum = maxdate(maxNum,a[i]->data);
    //printf("%d", maxNum);
    //SString t;
    //*t  = "error";
    //printf("%s",t);
    //getchar();
    //return 0;
    int i = 8;
    int len = 3;
    if ((i > 8 || i < 1))
        printf("error");
    else
        printf("true");
    //SubStr("abcdefgh", 3, 8);
}