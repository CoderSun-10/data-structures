#define _CRT_SECURE_NO_WARNINGS 1

#include"SeqList.h"

void SLTest01()
{
	SL sl;
	SLInit(&sl);

	SLPushBack(&sl, 1);
	SLPushBack(&sl, 2);
	SLPushBack(&sl, 3);
	SLPushBack(&sl, 4);
	SLPrint(sl);//1 2 3 4


	SLPopBack(&sl);
	SLPrint(sl);//1 2 3 
	SLPopBack(&sl);
	SLPrint(sl);
	SLPopBack(&sl);
	SLPrint(sl);
	SLPopBack(&sl);
	SLPrint(sl);
	//SLPopFront(&sl);/assert断言
	SLPrint(sl);
	//...........
	SLDestroy(&sl);
}

void SLTest02()
{
	SL sl;
	SLInit(&sl);
	SLPushBack(&sl, 1);
	SLPushBack(&sl, 2);
	SLPushBack(&sl, 3);
	SLPushBack(&sl, 4);
	SLPrint(sl);//1 2 3 4
	//测试指定位置之前插入数据
	//SLInsert(&sl, 1, 99);
	//SLInsert(&sl, sl.size, 88);

	//测试删除指定位置的数据
	//SLErase(&sl, 1);
	//SLPrint(sl);//1 3  4

	//测试顺序表的查找
	int find = SLFind(&sl, 40);
	if (find < 0)
	{
		printf("没有找到！\n");
	}
	else {
		printf("找到了！下标为%d\n",find);
	}
	SLDestroy(&sl);
}

int main()
{
	SLTest01();
	SLTest02();
	return 0;
}