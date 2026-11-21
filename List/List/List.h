#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int LTDataType;
//定义双链表的结构
typedef struct ListNode {
	LTDataType data;
	struct ListNode* next;
	struct ListNode* prev;
}LTNode;

//初始化
//void LTInit(LTNode** pphead);
LTNode* LTInit();
void LTDestroy(LTNode* phead);

void LTPrint(LTNode* phead);
LTNode* LTBuyNode(LTDataType x);

void LTPushBack(LTNode* phead, LTDataType x);
void LTPushFront(LTNode* phead, LTDataType x);

void LTPopBack(LTNode* phead);
void LTPopFront(LTNode* phead);

void LTInsert(LTNode* pos, LTDataType x);
void LTErase(LTNode* pos);

void LTDestroy(LTNode* pos);

LTNode* LTFind(LTNode* phead, LTDataType x);