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
	cout << "˳����Ƿ�������" << s1.SeqIsFull() << endl;
	s1.SeqPopBack();
	cout << "βɾһ��Ԫ��>>";
	s1.SeqPrint();
	cout << "��3��λ�ò���11>>";
	s1.SeqInsert(11, 3);
	s1.SeqPrint();
	cout << "��0��λ��ɾ��һ��Ԫ�أ��൱��ͷɾ";
	s1.SeqErase(0);
	s1.SeqPrint();
}

int main()
{
	SeqListtest();
	system("pause");
	return 0;
}

