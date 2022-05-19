#include "pch.h"
#include "Stroka.h"

Stroka::Stroka(char* string)
{
	strcpy(str, string);
}

Stroka::Stroka(const Stroka& s)
{
	strcpy(str, s.str);
}

int Stroka::operator==(const Stroka& s)
{
	if ((strcmp(str, s.str)) == 0)
		return 1;
	else
		return 0;
}


int Stroka::dlina()
{
	return strlen(str);
}

int Stroka::dlina2()
{
	int i, b;
	for (i = 0; str[i]; i++)
		b = i + 1;
	return b;
}

void Stroka::vvod()
{
	cin >> str;
}

void Stroka::vyvod()
{
	cout << str << endl;
}


Stroka& Stroka::operator+(const Stroka& s)
{
	this->konkat(str, s.str);
	return *this;
}

void Stroka::konkat(char* first, const char* second)
{
	while (*first) first++; // пока есть элементы в массиве first смещаемся по-элементно
	while (*second) { // пока есть элементы в массиве second смещаемся по-элементно
		*first++ = *second++; // first начинает расширяться, дописываем туда second
	}
	*first = '\0'; //  очистка буфера вывода
}

Stroka& Stroka::operator=(const Stroka& s)
{
	this->kopir(str, s.str);
	return *this;
}

void Stroka::kopir(char* first, const char* second)
{
	while (*second) {
		*first++ = *second++;
	}
	*first = '\0'; //  очистка буфера вывода
}

