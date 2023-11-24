#include <iostream>
#include <cwchar> 
#include <windows.h>

#include "header.h"

int get_number_code() 
{

	using namespace std;

	int codeNum;
	
	cout << "Введите цифры для перевода " << endl;
	
	wstring stroka;

	wcin >> stroka;

	for (wchar_t symbol : stroka) {

		codeNum = static_cast<int>(symbol);

		if (codeNum <= 57 && codeNum >= 48)
		{
			cout << "Код символа " << symbol << " " << "равен: " << codeNum << "\n\n";
		}
		else
		{
			cout << "Это не цифра\n\n";
		}

	}

	return 0;

}