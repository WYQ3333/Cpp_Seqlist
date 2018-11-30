#pragma once

#include<iostream>
#include<assert.h>
////内存泄漏检测
#define CRTDBG_MAP_ALLOC    //注意顺序不能乱
#include <stdlib.h>    
#include <crtdbg.h> //检测是否有内存泄漏
////
using namespace std;

typedef int DataType;
class SeqList
{
public:
	SeqList(DataType capacity = 0);//构造函数
	SeqList(const SeqList& s);//拷贝构造
	void SeqPushBack(DataType value);//尾插
	void SeqPopBack();//尾删
	bool SeqIsEmpty();//顺序表是否为空
	bool SeqIsFull();//顺序表是否满
	void SeqInsert(DataType value, int pos);//在指定位置插入
	void SeqErase(int pos);//在指定位置删除
	void SeqPrint();//打印顺序表
	void Seqdilate();//顺序表扩容
	int SeqSize();//顺序表的大小
	~SeqList();//析构函数
private:
	DataType *_array;
	int _capacity;//容量
	int _size;//元素个数
};