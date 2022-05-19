#include "pch.h"
#include "Stroka.h"

int main(int)
{
	setlocale(LC_ALL, "Russian");

	Stroka s1;
	cout << "Введите текст для s1: ";
	s1.vvod();

	Stroka s3;
	cout << "Введите текст для s3: ";
	s3.vvod();

	Stroka s4;
	s4 = s1; //значение s4 равно введённому s1

	Stroka s5;
	s5 = s1 + s3 + s4;
	cout << "Строка s5: ";
	s5.vyvod();
	cout << "Длина строки s5 = " << s5.dlina() << endl;
	
	
	if (s1 == s5) {
		cout << "Строки s1 и s5 не равны";  //??
	}
	else if(s1 == s4) {
		cout << "Строки s1 и s4 равны";
	}
			

}