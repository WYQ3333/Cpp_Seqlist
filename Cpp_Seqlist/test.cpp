#include"SeqList.h"


void SeqListtest()
{
	SeqList s1(5);
	cout << "顺序表是否为空>> " << s1.SeqIsEmpty() << endl;
	s1.SeqPushBack(12);
	s1.SeqPushBack(256);
	s1.SeqPushBack(333);
	s1.SeqPushBack(42);
	s1.SeqPushBack(50);
	cout << "SeqList_PushBack>>";
	s1.SeqPrint();
	cout << "顺序表是否已满：" << s1.SeqIsFull() << endl;
	s1.SeqPopBack();
	cout << "尾删一个元素>>";
	s1.SeqPrint();
	cout << "在3的位置插入11>>";
	s1.SeqInsert(11, 0);
	s1.SeqInsert(16, 0);
	s1.SeqInsert(55, 0);
	s1.SeqPrint();
	cout << "在0的位置删除一个元素，相当于头删";
	s1.SeqErase(0);
	s1.SeqPrint();
	
}

int main()
{
	SeqListtest();
	_CrtDumpMemoryLeaks();//内存泄漏检测，放到函数的结尾处
	system("pause");
	return 0;
}

