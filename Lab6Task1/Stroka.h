#define _CRT_SECURE_NO_WARNINGS
#include "pch.h"
#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <windows.h>
#include <string.h>

using namespace std;

// «десь начинаетс€ header guard.  ADD_H Ц любое уникальное им€. ќбычно используют им€ заголовочного файла в качестве этого идентификатора.
#ifndef STROKA_H
#define STROKA_H

// ј это уже контент файла .h, где и наход€тс€ все предварительные объ€влени€
class Stroka {
	char str[80];

public:
	//  онструктор класса 
	Stroka(char*);
	Stroka(const char*);
	//  онструктор класса 
	Stroka() {}
	Stroka(const Stroka&); //  онструктор копировани€
	Stroka& operator=(const Stroka&); // переопределение/перегрузка операции присваивани€
	Stroka& operator+(const Stroka&); // переопределение операции сложени€
	int operator==(const Stroka&); // переопределение операции сравнени€
	int dlina();
	int dlina2();
	void vvod();
	void vyvod();
	void konkat(char* first, const char* second);
	void kopir(char* first, const char* second);
};

//  онец header guard
#endif