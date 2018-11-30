#include"SeqList.h"


void SeqListtest()
{
	SeqList s1(5);
	cout << s1.SeqIsEmpty() << endl;
	s1.SeqPushBack(1);
	s1.SeqPushBack(2);
	s1.SeqPushBack(3);
	s1.SeqPushBack(4);
	s1.SeqPushBack(5);
	cout << "SeqList_PushBack>>";
	s1.SeqPrint();
	cout << "顺序表是否已满：" << s1.SeqIsFull() << endl;
	s1.SeqPopBack();
	cout << "尾删一个元素>>";
	s1.SeqPrint();
	cout << "在3的位置插入11>>";
	s1.SeqInsert(11, 3);
	s1.SeqPrint();
	cout << "在0的位置删除一个元素，相当于头删";
	s1.SeqErase(0);
	s1.SeqPrint();
}

int main()
{
	SeqListtest();
	system("pause");
	return 0;
}

