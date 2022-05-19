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

// ����� ���������� header guard.  ADD_H � ����� ���������� ���. ������ ���������� ��� ������������� ����� � �������� ����� ��������������.
#ifndef STROKA_H
#define STROKA_H

// � ��� ��� ������� ����� .h, ��� � ��������� ��� ��������������� ����������
class Stroka {
	char str[80];

public:
	// ����������� ������ 
	Stroka(char*);
	Stroka(const char*);
	// ����������� ������ 
	Stroka() {}
	Stroka(const Stroka&); // ����������� �����������
	Stroka& operator=(const Stroka&); // ���������������/���������� �������� ������������
	Stroka& operator+(const Stroka&); // ��������������� �������� ��������
	int operator==(const Stroka&); // ��������������� �������� ���������
	int dlina();
	int dlina2();
	void vvod();
	void vyvod();
	void konkat(char* first, const char* second);
	void kopir(char* first, const char* second);
};

// ����� header guard
#endif