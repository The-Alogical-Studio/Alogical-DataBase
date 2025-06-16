#pragma once
#include <string.h>
#define print(val) std::cout<<val<<"\n"

//здесь функции для создания базы данных (database)
//основные классы

//таблица
/*
* legacy
class Elem {
public:
	char* string;
	
	Elem(const char* st) {
		string = (char*) st;
	}

	Elem() {
		string = (char*) ("\0");
	}
}

class Row {
public:
	Elem* row;

	Row(int rx) {
		row = new Elem[rx];
	}

	Row() {
		row
	}
}
*/
class Table {
public:
	char*** table;

	Table(const int rx, const int ry, const int max) {
		table = new char** [rx];
		for (int i = 0; i < rx; ++i) {
			table[i] = new char* [ry];
			for (int j = 0; j < ry; ++j) {
				table[i][j] = new char[max];
			}
		}
	}

	char* getItem(int px, int py) {
		return table[px][py];
	}

	void setItem(int px, int py, char* value) {
		delete[] table[px][py];
		table[px][py] = value;
	}
};

//дерево