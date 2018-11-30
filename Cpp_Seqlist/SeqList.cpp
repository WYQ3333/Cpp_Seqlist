#include"SeqList.h"

SeqList::SeqList(DataType capacity)
{
	if (capacity == 0)
	{
		_array = nullptr;
	}
	_array = new DataType[capacity];
	if (nullptr == _array)
	{
		assert(_array);
		cout << "构造函数动态开辟空间失败" << endl;
		return;
	}
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

void SeqList::SeqPushBack(DataType value)//尾插
{
	if (SeqIsFull())
	{
		Seqdilate();
	}
	_array[_size++] = value;
}
void SeqList::SeqPopBack()//尾删
{
	if (SeqIsEmpty())
	{
		cout << "顺序表已为空" << endl;
		return;
	}
	_size--;
}
bool SeqList::SeqIsEmpty()//顺序表是否为空
{
	return 0 == _size;
}
bool SeqList::SeqIsFull()//顺序表是否满
{
	return _size == _capacity;
}
void SeqList::SeqInsert(DataType value, int pos)//在指定位置插入
{
	if (pos < 0 || pos >= _capacity)
	{
		cout << "插入位置非法" << endl;
		assert(0);
	}
	if (SeqIsFull())
	{
		Seqdilate();
	}
	int i = _size-1 ;
	for (i = _size-1 ; i >= pos; i--)//等号不能少，否则出错
	{
		_array[i + 1] = _array[i];
	}
	_array[pos] = value;
	_size++;
}

void SeqList::Seqdilate()//顺序表扩容
{
	DataType *Newptr = new DataType[2 * _capacity];
	for (int i = 0; i < _capacity; i++)
	{
		Newptr[i] = _array[i];
	}
	
	//释放旧空间
	delete[] _array;
	_array = Newptr;
	_size = _capacity;
	_capacity *= 2;
}

void SeqList::SeqErase(int pos)//在指定位置删除
{
	if (pos < 0 || pos >= _capacity)
	{
		cout << "删除位置非法" << endl;
		assert(0);
	}
	if (SeqIsEmpty())
	{
		cout << "顺序表为空，删除失败" << endl;
		return;
	}
	int i = pos;
	for (i = pos; i < _size; i++)
	{
		_array[i] = _array[i + 1];
	}
	_size--;
}
int SeqList::SeqSize()//顺序表的大小
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