#include "pch.h"
#include "Stroka.h"

int main(int)
{
	setlocale(LC_ALL, "Russian");

	Stroka s1;
	cout << "������� ����� ��� s1: ";
	s1.vvod();

	Stroka s3;
	cout << "������� ����� ��� s3: ";
	s3.vvod();

	Stroka s4;
	s4 = s1; //�������� s4 ����� ��������� s1

	Stroka s5;
	s5 = s1 + s3 + s4;
	cout << "������ s5: ";
	s5.vyvod();
	cout << "����� ������ s5 = " << s5.dlina() << endl;
	
	
	if (s1 == s5) {
		cout << "������ s1 � s5 �� �����";  //??
	}
	else if(s1 == s4) {
		cout << "������ s1 � s4 �����";
	}
			

}