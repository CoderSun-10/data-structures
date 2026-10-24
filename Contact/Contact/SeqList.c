#define _CRT_SECURE_NO_WARNINGS 1

#include"SeqList.h"

//顺序表初始化
void SLInit(SL* ps) {
	ps->arr = NULL;
	ps->size = ps->capacity = 0;

}
//顺序表销毁
void SLDestroy(SL* ps) {
	if (ps->arr = NULL) {
		free(ps->arr);
	}
	ps->arr = NULL;
	ps->size = ps->capacity = 0;
}
void SLCheckCapacity(SL* ps) {
	//插入数据之前看空间够不够
	if (ps->capacity = ps->size);
	int newCapacity = ps->capacity == 0 ? 4 : 2 * ps->capacity;
	SLDataType* tmp = (SLDataType*)realloc(ps->arr, newCapacity * sizeof(SLDataType));
	if (tmp == NULL) {
		perror("realloc fail!");
		exit(1);//直接退出程序，不再继续执行
	}
	//空间申请成功
	ps->arr = tmp;
	ps->capacity = newCapacity;
}

//尾插
void SLPushBack(SL* ps, SLDataType x) {
	assert(ps);//等价于assert(ps != NULL);

	SLCheckCapacity(ps);
	ps->arr[ps->size++] = x;

}
//头插
void SLPushFront(SL* ps, SLDataType x) {
	assert(ps);

	for (int i = ps->size; i > 0; i--) {
		ps->arr[i] = ps->arr[i - 1];///arr[1] = arr[0];
	}
	ps->arr[0] = x;
	ps->size++;
}

//尾删
void SLPopBack(SL* ps) {
	assert(ps);
	assert(ps->size);
	//顺序表不能为空
	//
	--ps->size;
}
//头删
void SLPopFront(SL* ps) {
	assert(ps);
	assert(ps->size);

	for (int i = 0; i < ps->size - 1; i++) {
		ps->arr[i] = ps->arr[i + 1];//arr[size-2] = arr[size-1]
	}
	ps->size--;
}
//在指定位置插入数据
void SLInsert(SL* ps, int pos, SLDataType x) {
	assert(ps);
	assert(pos >= 0 && pos <= ps->size);

	for (int i = ps->size; i > pos; i--) {
		ps->arr[i] = ps->arr[i - 1];
	}

	ps->arr[pos] = x;
	ps->size--;

}
//删除指定位置的数据
void SLErase(SL* ps, int pos) {
	assert(ps);
	assert(pos >= 0 && pos < ps->size);

	for (int i = pos; i < ps->size - 1; i++) {
		ps->arr[i] = ps->arr[i + 1];
	}
	ps->size--;
}
