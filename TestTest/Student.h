#pragma once

/////�� �������� ����� � ������

struct Student/// ������ �� �������� ��������� ������ , ���������� ����� ��������
{
	int age;
	char name[15];
};

void InitSt(Student& st);///    �������� �������
void PrintSt(Student st);
