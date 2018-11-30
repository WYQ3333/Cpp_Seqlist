#include"SeqList.h"

SeqList::SeqList(DataType capacity)
{
	if (capacity == 0)
	{
		_array = nullptr;
	}
	_array = new DataType[capacity];
	_capacity = capacity;
	_size = 0;
	for (int i = 0; i < _capacity; i++)
	{
		_array[i] = 0;
	}
}

SeqList::SeqList(const SeqList& s)
{
	if (this != &s)
	{
		_array = new DataType[s._size];
		_capacity = s._size;
		_size = s._size;
		for (int i = 0; i < _size; i++)
		{
			_array[i] = s._array[i];
		}
	}
}

void SeqList::SeqPushBack(DataType value)//β��
{
	if (SeqIsFull())
	{
		cout << "˳�������" << endl;
		return;
	}
	_array[_size++] = value;
}
void SeqList::SeqPopBack()//βɾ
{
	if (SeqIsEmpty())
	{
		cout << "˳�����Ϊ��" << endl;
		return;
	}
	_size--;
}
bool SeqList::SeqIsEmpty()//˳����Ƿ�Ϊ��
{
	return 0 == _size;
}
bool SeqList::SeqIsFull()//˳����Ƿ���
{
	return _size == _capacity;
}
void SeqList::SeqInsert(DataType value, int pos)//��ָ��λ�ò���
{
	if (pos < 0 || pos >= _capacity)
	{
		cout << "����λ�÷Ƿ�" << endl;
		assert(0);
	}
	if (SeqIsFull())
	{
		cout << "˳�������������ʧ��" << endl;
		return;
	}
	int i = _size - 1;
	for (i = _size - 1; i >= pos; i--)
	{
		_array[i + 1] = _array[i];
	}
	_array[i] = value;
	_size++;
}
void SeqList::SeqErase(int pos)//��ָ��λ��ɾ��
{
	if (pos < 0 || pos >= _capacity)
	{
		cout << "ɾ��λ�÷Ƿ�" << endl;
		assert(0);
	}
	if (SeqIsEmpty())
	{
		cout << "˳���Ϊ�գ�ɾ��ʧ��" << endl;
		return;
	}
	int i = pos;
	for (i = pos; i < _size; i++)
	{
		_array[i] = _array[i + 1];
	}
	_size--;
}
int SeqList::SeqSize()//˳���Ĵ�С
{
	return _size;
}

void SeqList::SeqPrint()
{
	int i = 0;
	for (i = 0; i < _size; i++)
	{
		cout << _array[i] << " ";
	}
	cout << endl;
}

SeqList::~SeqList()
{
	if (_array)
	{
		delete[] _array;
		_array = nullptr;
	}
}