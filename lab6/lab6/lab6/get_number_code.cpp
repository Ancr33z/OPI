#include <iostream>
#include <cwchar> 
#include <windows.h>

#include "header.h"

int get_number_code() 
{

	using namespace std;

	int codeNum;
	
	cout << "������� ����� ��� �������� " << endl;
	
	wstring stroka;

	wcin >> stroka;

	for (wchar_t symbol : stroka) {

		codeNum = static_cast<int>(symbol);

		if (codeNum <= 57 && codeNum >= 48)
		{
			cout << "��� ������� " << symbol << " " << "�����: " << codeNum << "\n\n";
		}
		else
		{
			cout << "��� �� �����\n\n";
		}

	}

	return 0;

}