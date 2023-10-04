//#include<iostream>
//#include<Windows.h>
//#include<string.h>
//using namespace std;
//
////«адание 1
////–азработать класс MyString, который в дальнейшем будет использоватьс€ дл€ работы со строками. ласс должен содержать :
////Х	конструктор по умолчанию, позвол€ющий создать строку длиной 80 символов;
////Х	конструктор, позвол€ющий создавать строку произвольного размера;
////Х	конструктор, который создаЄт строку и инициализирует еЄ строкой, полученной от пользовател€.
////Х	деструктор;
////Х	методы дл€ ввода строк с клавиатуры и вывода строк на экран.
////Х	void MyStrcpy(MyString& obj);// копирование строк
////Х	bool MyStrStr(const char* str);// поиск подстроки в строке
////Х	int  MyChr(char c); // поиск символа в строке(индекс найденного символа, либо -1)
////Х	int MyStrLen();// возвращает длину строки
////Х	void MyStrCat(MyString& b); // объединение строк
////Х	void MyDelChr(char c); // удал€ет указанный символ 
////Х	int MyStrCmp(MyString& b); // сравнение строк 
////-1 Ц перва€ строка меньше чем втора€
////1 Ц перва€ больше чем втора€
////0 Ц строки равны!
////Х	—татическое поле сохран€ет кол - во созданных объектов.
//
//
//class MyString
//{
//
//	char* str;
//	int size;
//
//
//	void FuncCopy(const char*);/////////////////ћќя ¬Ќ”“– ‘”Ќ ÷»я
//public:
//
//	static int count;
//
//	MyString();
//	MyString(int);
//	MyString(const char*);
//	MyString(const MyString& );/////////////// ќЌ—“–” “ќ–  ќѕ»–ќ¬јЌ»я
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
///////////////////////////////////////////////////PRIVAT ћќя ¬Ќ”“– ‘”Ќ ÷»я
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
//MyString::MyString(const MyString& obj)////////////////////конструктор копировани€
//{
//
//	this->size = obj.size;
//	this->str = new char[this->size];///////////////////так как в переменной size и есть размер строки 
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
//	FuncCopy(buf);/////////мо€ внутр функци€
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
//	FuncCopy(obj.MyStr());/////////мо€ внутр функци€
//}
//bool MyString::MyStrStr(const char* s)
//{
//
//	int in_size = strlen(s);
//	int index = 0;
//	if (in_size <= size)////подстрока должна быть меньше
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
//	FuncCopy(str);/////////мо€ внутр функци€
//}
//
//
//MyString  DelFirstSimb(MyString str);////функци€ котора€ принимает обьект класса  MyString по значению
//
//int main()
//{
//	MyString str("Hello world.");
//	MyString str2 = str;/////////вызов конструктора копировани€ в момент инициализации другим обьектом
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
//MyString DelFirstSimb( MyString str)/////////передаем обьект по копии,, сработает конструктор копировани€
//{
//	int sz = str.GetSize();
//	char* st = new char[sz];
//	for (int i = 0; i < sz; i++)
//		st[i] = str.MyStr()[i + 1]; 
//	str.SetStr(st);
//	delete[]st;
//	return str;////////возврат по значению,сработает конструктор копировани€
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
void FuncBr1();

int main()
{
	MyArr point;
	point.ptr_MyP;
	point.count;

	char choose[][20] =
	{
		"1. ƒобавить товар",
		"2. ”далить товар",
		"3. ѕоказать список",
		"4. ¬ыход"
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


	cout << "1 main" << endl;

	cout << "Hello from Br1" << endl;

	cout << "Hello from Br1Br1" << endl;

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
	ru_sms("¬ведите название: ");
	cin >> MyP->name;
	ru_sms("¬ведите дату завоза(день): ");
	MyP->date.day = cin_check();
	ru_sms("¬ведите дату завоза(мес€ц): ");
	MyP->date.month = cin_check();
	ru_sms("¬ведите дату завоза(год): ");
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

	ru_sms("\n""ƒобавлен новый товар");
	_getch();
}

void del_data(MyArr& point)
{
	system("cls");
	if (point.count == 0)
	{
		ru_sms("“оваров не сущесвует");
	}
	else
	{
		ru_sms("¬ведите номер товара, который хотите удалить: ");
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

			ru_sms("\n""“овар удалЄн");
		}
		else
		{
			ru_sms("\n""„исло не в диапазоне");
		}
	}
	_getch();
}

void show_data(MyArr& point)
{
	system("cls");
	if (point.count == 0)
	{
		ru_sms("—писок пуст");
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
			ru_sms("¬ведите число больше нул€: ");
		}
	}
}

void FuncBr1()
{
	cout << "Hello from Br1" << endl;

}
