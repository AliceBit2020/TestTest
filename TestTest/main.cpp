//#include<iostream>
//#include<Windows.h>
//#include<string.h>
//using namespace std;
//
////������� 1
////����������� ����� MyString, ������� � ���������� ����� �������������� ��� ������ �� ��������.����� ������ ��������� :
////�	����������� �� ���������, ����������� ������� ������ ������ 80 ��������;
////�	�����������, ����������� ��������� ������ ������������� �������;
////�	�����������, ������� ������ ������ � �������������� � �������, ���������� �� ������������.
////�	����������;
////�	������ ��� ����� ����� � ���������� � ������ ����� �� �����.
////�	void MyStrcpy(MyString& obj);// ����������� �����
////�	bool MyStrStr(const char* str);// ����� ��������� � ������
////�	int  MyChr(char c); // ����� ������� � ������(������ ���������� �������, ���� -1)
////�	int MyStrLen();// ���������� ����� ������
////�	void MyStrCat(MyString& b); // ����������� �����
////�	void MyDelChr(char c); // ������� ��������� ������ 
////�	int MyStrCmp(MyString& b); // ��������� ����� 
////-1 � ������ ������ ������ ��� ������
////1 � ������ ������ ��� ������
////0 � ������ �����!
////�	����������� ���� ��������� ��� - �� ��������� ��������.
//
//
//class MyString
//{
//
//	char* str;
//	int size;
//
//
//	void FuncCopy(const char*);/////////////////��� ����� �������
//public:
//
//	static int count;
//
//	MyString();
//	MyString(int);
//	MyString(const char*);
//	MyString(const MyString& );///////////////����������� �����������
//	~MyString();
//
//
//	
//
//
//	////////////////////////////////////////////       IN/OUT
//	void In();
//	void Out();
//
//
//	////////////////////////////////////////////////////GET
//	const char* MyStr();
//	int GetSize();
//	
//	////////////////////////////////////////////////////SET
//	void SetStr(const char*);
//	////////////////////////////////////////////// STRING FUNC
//	void MyStrcpy(MyString&);
//	bool MyStrStr(const char* str);
//	int  MyChr(char c);
//	int MyStrLen();
//	void MyStrCat(MyString&);
//	void MyDelChr(char c);
//	int MyStrCmp(MyString& b);
//};
//
//int  MyString::count = 0;
///////////////////////////////////////////////////PRIVAT ��� ����� �������
//void MyString::FuncCopy(const char* s)
//{
//	delete[]str;
//	size = strlen(s) + 1;
//	str = new char[size];
//	strcpy_s(str, size, s);
//}
//////////////////////////////////////////////  CONSTRUCTORS/DESTRUCTOR
//MyString::MyString()
//{
//	size = 80;
//	str = new char[size];
//	count++;
//}
//MyString::MyString(int any_size)
//{
//	size = any_size;
//	str = new char[size];
//	count++;
//}
//MyString::MyString(const char* s)
//{
//	size = strlen(s) + 1;
//	str = new char[size];
//	strcpy_s(str, size, s);
//	count++;
//}
//MyString::MyString(const MyString& obj)////////////////////����������� �����������
//{
//
//	this->size = obj.size;
//	this->str = new char[this->size];///////////////////��� ��� � ���������� size � ���� ������ ������ 
//	strcpy_s(this->str, this->size, obj.str);
//
//}
//MyString::~MyString()
//{
//	delete[]str;
//	count--;
//}
//////////////////////////////////////////////       IN/OUT
//void MyString::In()
//{
//
//	const int buf_size = 1000;
//	char buf[buf_size];
//	cout << "Enter string: " << endl;
//	cin.getline(buf, buf_size);
//
//	FuncCopy(buf);/////////��� ����� �������
//
//}
//void MyString::Out()
//{
//	cout << str << endl;
//}
//
///////////////////////////////////////////////////////////GET
//const char* MyString::MyStr()
//{
//	return str;
//}
//int MyString::GetSize()
//{
//	return size;
//}
//
//
//
//
//
//////////////////////////////////////////////// STRING FUNC
//void MyString::MyStrcpy(MyString& obj)
//{
//	FuncCopy(obj.MyStr());/////////��� ����� �������
//}
//bool MyString::MyStrStr(const char* s)
//{
//
//	int in_size = strlen(s);
//	int index = 0;
//	if (in_size <= size)////��������� ������ ���� ������
//	{
//		int i = 0;
//		for (; i < in_size; i++)
//		{
//			if (str[i + index] != s[i])
//			{
//				index++;
//				i = -1;
//			}
//			if (index == size - in_size)
//				break;
//		}
//		if (i == in_size)
//			return true;
//	}
//	return false;
//}
//int MyString::MyChr(char c)
//{
//	for (int i = 0; i < size; i++)
//		if (str[i] == c)
//			return i;
//	return -1;
//}
//int MyString::MyStrLen()
//{
//	return size - 1;
//}
//void MyString::MyStrCat(MyString& b)
//{
//	int sz = size + b.MyStrLen();
//
//	char* buf = new char[sz];
//	strcpy_s(buf, sz, str);
//	strcat_s(buf, sz, b.MyStr());
//	delete[]str;
//	size = sz;
//	str = buf;
//
//
//
//}
//void MyString::MyDelChr(char c)
//{
//
//	int index = 0;
//	char* s = new char[size];
//
//	for (int i = 0; i < size; i++)
//	{
//		if (str[i + index] == c)
//		{
//			++index;
//			i--;
//
//		}
//		else
//			s[i] = str[i + index];
//	}
//
//	this->FuncCopy(s);
//	delete[]s;
//
//}
//int MyString::MyStrCmp(MyString& b)
//{
//	return strcmp(str, b.MyStr());
//
//}
//
//void  MyString::SetStr(const char* str)
//{
//	FuncCopy(str);/////////��� ����� �������
//}
//
//
//MyString  DelFirstSimb(MyString str);////������� ������� ��������� ������ ������  MyString �� ��������
//
//int main()
//{
//	MyString str("Hello world.");
//	MyString str2 = str;/////////����� ������������ ����������� � ������ ������������� ������ ��������
//	str2.Out();
//
//
//	MyString str3 = DelFirstSimb(str2);
//	str3.Out();
//	str2.Out();
//
//	
//}
//
//
//
//MyString DelFirstSimb( MyString str)/////////�������� ������ �� �����,, ��������� ����������� �����������
//{
//	int sz = str.GetSize();
//	char* st = new char[sz];
//	for (int i = 0; i < sz; i++)
//		st[i] = str.MyStr()[i + 1]; 
//	str.SetStr(st);
//	delete[]st;
//	return str;////////������� �� ��������,��������� ����������� �����������
//}
#include <iostream>
#include <conio.h>
#include <Windows.h>
using namespace std;

struct MyDate
{
	short day;
	short month;
	short year;
};

struct MyProducts
{
	char name[10];
	MyDate date;
};

struct MyArr
{
	MyProducts** ptr_MyP = nullptr;
	short count = 0;
};

void ru_sms(const char* str);
void menu(char choose[][20], int row);
void input_data(MyProducts* MyP);
void add_data(MyArr& point);
void del_data(MyArr& point);
void show_data(MyArr& point);
void destroy_data(MyArr& point);
int cin_check();

int main()
{
	MyArr point;
	point.ptr_MyP;
	point.count;

	char choose[][20] =
	{
		"1. �������� �����",
		"2. ������� �����",
		"3. �������� ������",
		"4. �����"
	};
	while (true)
	{
		system("cls");
		menu(choose, 4);
		short x = _getch();
		switch (x)
		{
		case '1':
			add_data(point);
			break;
		case '2':
			del_data(point);
			break;
		case '3':
			show_data(point);
			break;
		case '4':
			destroy_data(point);
			return(NULL);
		}
	}

	return(NULL);
}

void ru_sms(const char* str)
{
	char* buf = new char[strlen(str) + 1];
	CharToOemA(str, buf);
	cout << buf;
	delete[] buf;
}

void menu(char choose[][20], int row)
{
	for (short i = 0; i < row; i++)
	{
		ru_sms(choose[i]);
		cout << "\n";
	}
}

void input_data(MyProducts* MyP)
{
	ru_sms("������� ��������: ");
	cin >> MyP->name;
	ru_sms("������� ���� ������(����): ");
	MyP->date.day = cin_check();
	ru_sms("������� ���� ������(�����): ");
	MyP->date.month = cin_check();
	ru_sms("������� ���� ������(���): ");
	MyP->date.year = cin_check();
}

void add_data(MyArr& point)
{
	system("cls");

	short new_num = point.count + 1;
	MyProducts** temp = new MyProducts * [new_num];
	for (short i = 0; i < point.count; i++)
	{
		temp[i] = point.ptr_MyP[i];
	}
	delete[] point.ptr_MyP;
	point.ptr_MyP = temp;

	MyProducts* MyP = new MyProducts;
	input_data(MyP);
	point.ptr_MyP[point.count++] = MyP;

	ru_sms("\n""�������� ����� �����");
	_getch();
}

void del_data(MyArr& point)
{
	system("cls");
	if (point.count == 0)
	{
		ru_sms("������� �� ���������");
	}
	else
	{
		ru_sms("������� ����� ������, ������� ������ �������: ");
		short pick_num;
		pick_num = cin_check();
		pick_num--;
		if (pick_num < point.count)
		{
			MyProducts** temp = new MyProducts * [point.count - 1];
			for (short i = 0; i < pick_num; i++)
			{
				temp[i] = point.ptr_MyP[i];
			}
			point.count--;
			for (short i = pick_num; i < point.count; i++)
			{
				temp[i] = point.ptr_MyP[i + 1];
			}
			delete[] point.ptr_MyP;
			point.ptr_MyP = temp;

			ru_sms("\n""����� �����");
		}
		else
		{
			ru_sms("\n""����� �� � ���������");
		}
	}
	_getch();
}

void show_data(MyArr& point)
{
	system("cls");
	if (point.count == 0)
	{
		ru_sms("������ ����");
	}
	point.ptr_MyP[0];
	for (short i = 0, num = 1; i < point.count; i++, num++)
	{
		cout << num << ". ";
		cout << point.ptr_MyP[i]->name << "\t";
		cout << point.ptr_MyP[i]->date.day << "\t";
		cout << point.ptr_MyP[i]->date.month << "\t";
		cout << point.ptr_MyP[i]->date.year << "\t";
		cout << "\n";
	}
	_getch();
}

void destroy_data(MyArr& point)
{
	for (short i = 0; i < point.count; i++)
	{
		delete point.ptr_MyP[i];
	}
	delete[] point.ptr_MyP;
}

int cin_check()
{
	short check;
	while (true)
	{
		cin >> check;
		if (check > NULL)
		{
			return check;
		}
		else
		{
			cin.clear();
			cin.ignore(SHRT_MAX, '\n');
			ru_sms("������� ����� ������ ����: ");
		}
	}
}
