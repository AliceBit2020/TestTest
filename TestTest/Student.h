#pragma once

/////не занимают места в памяти

struct Student/// чертеж по которому создается обьект , обьявление типов структур
{
	int age;
	char name[15];
};

void InitSt(Student& st);///    прототип функций
void PrintSt(Student st);
