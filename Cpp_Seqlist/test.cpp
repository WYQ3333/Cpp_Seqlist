#include"SeqList.h"


void SeqListtest()
{
	SeqList s1(5);
	cout << "˳����Ƿ�Ϊ��>> " << s1.SeqIsEmpty() << endl;
	s1.SeqPushBack(12);
	s1.SeqPushBack(256);
	s1.SeqPushBack(333);
	s1.SeqPushBack(42);
	s1.SeqPushBack(50);
	cout << "SeqList_PushBack>>";
	s1.SeqPrint();
	cout << "˳����Ƿ�������" << s1.SeqIsFull() << endl;
	s1.SeqPopBack();
	cout << "βɾһ��Ԫ��>>";
	s1.SeqPrint();
	cout << "��3��λ�ò���11>>";
	s1.SeqInsert(11, 0);
	s1.SeqInsert(16, 0);
	s1.SeqInsert(55, 0);
	s1.SeqPrint();
	cout << "��0��λ��ɾ��һ��Ԫ�أ��൱��ͷɾ";
	s1.SeqErase(0);
	s1.SeqPrint();
	
}

int main()
{
	SeqListtest();
	_CrtDumpMemoryLeaks();//�ڴ�й©��⣬�ŵ������Ľ�β��
	system("pause");
	return 0;
}

