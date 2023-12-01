#include <iostream>
#include <cwchar> 

//#include "header.h"

using namespace std;

int get_number_code() 
{

	int codeNum;
	
	cout << "Введите цифры для перевода " << endl;
	
	wstring wstr;

	wcin >> wstr;

	for (wchar_t symbol : wstr) {

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