// ABase.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#ifdef EXTEND_MEM //use utf16 instead windows-1251
#define char char32_t
#endif //use utf16 instead windows-1251

#include "db.h"

int main() {
	std::cout << sizeof(char) << '\n';
	Table tab = Table(3, 3, 8);
	tab.setItem(0, 0, (char *)"Hello, world!");
	tab.setItem(1, 0, (char *)"Welcome to the table!");
	tab.setItem(2, 0, (char *)"Of the ABase Project");

	tab.setItem(0, 1, (char *)"Simple definition");
	tab.setItem(1, 1, (char *)"We're using cstring");
	tab.setItem(2, 1, (char *)"So, project works fast");

	tab.setItem(0, 2, (char *)"Привет, поддержка кодировок");
	tab.setItem(1, 2, (char *)"Программа работает");
	tab.setItem(2, 2, (char *)"Version 1.0");
	for(int i = 0; i < 9; ++i) std::cout << tab.getItem(i % 3, i / 3) << "\n";

	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
