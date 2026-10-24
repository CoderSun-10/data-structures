#pragma once

#define NAME_MAX 20
#define GENDER_MAX 10
#define TEL_MAX 20
#define ADDR_MAX 100

typedef struct personInfo {
	char name[NAME_MAX];
	char gender[GENDER_MAX];
	int age;
	char tel[TEL_MAX];
	char addr[ADDR_MAX];
}peoInfo;

//要用到顺序表相关方法，对通讯录的操作实际就是对顺序表进行操作
//给顺序表改个名字，叫做通讯录
typedef struct SeqList Contact;//sl


void ContactInit(Contact* con);

void ContactDestroy(Contact* con);

void ContactAdd(Contact* con);

void ContactDel(Contact* con);

void ContactModify(Contact* con);

void ContactFind(Contact* con);

void ContactShow(Contact* con);
