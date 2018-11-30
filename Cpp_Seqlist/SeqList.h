#pragma once

#include<iostream>
#include<assert.h>
using namespace std;

typedef int DataType;
class SeqList
{
public:
	SeqList(DataType capacity = 0);//���캯��
	SeqList(const SeqList& s);//��������
	void SeqPushBack(DataType value);//β��
	void SeqPopBack();//βɾ
	bool SeqIsEmpty();//˳����Ƿ�Ϊ��
	bool SeqIsFull();//˳����Ƿ���
	void SeqInsert(DataType value, int pos);//��ָ��λ�ò���
	void SeqErase(int pos);//��ָ��λ��ɾ��
	void SeqPrint();//��ӡ˳���
	void Seqdilate();//˳�������
	int SeqSize();//˳���Ĵ�С
	~SeqList();//��������
private:
	DataType *_array;
	int _capacity;//����
	int _size;//Ԫ�ظ���
};