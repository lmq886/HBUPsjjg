/**
* 
* 
    3�����д��������malloc�������ٶ�̬�洢��Ԫ��˳���������10��ѧ�����ݣ�ѧ����Ϣ����ѧ�ţ��������Ա𣬳������ڡ�������Ȼ�������10��ѧ���е�ƽ������ߵ�ѧ����ȫ����Ϣ����������ѧ����Ϣ��ѧ�š��������Ա𡢳������ڡ�4�ſγ̳ɼ���ƽ���֣��Ľṹ���������£� 
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

    4����β�巨����һ����������ĵ�����������-1��������־������ӡ���������Ȼ�������������е����ֵ��

    5����β�巨����һ������ַ����ĵ�����������"stop"��������־������ӡ���������Ȼ���������ַ��������ֵ��

    6����β�巨����һ����Ŷ��ѧ��������ѧ�š��������ɼ��ȣ����ݵ���������ѧ����ѧ��Ϊ0��������־��Ȼ�������������ѧ������Ϣ�����������10��ѧ���е�ƽ������ߵ�ѧ����ȫ����Ϣ����������ѧ����Ϣ��ѧ�š��������Ա𡢳������ڡ�4�ſγ̳ɼ���ƽ���֣��Ľṹ���������£� 
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

// 1�����д��������malloc�������ٶ�̬�洢��Ԫ��˳���������10��������Ȼ������10�������е����ֵ��
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
//    printf("������");
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


//2�����д��������malloc�������ٶ�̬�洢��Ԫ��˳���������10���ַ�����Ȼ����10���ַ��������ֵ��
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
    //printf("������");
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