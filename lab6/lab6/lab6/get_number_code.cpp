#include <iostream>
#include <cwchar> 

//#include "header.h"

using namespace std;

int get_number_code() 
{

	int codeNum;
	
	cout << "������� ����� ��� �������� " << endl;
	
	wstring wstr;

	wcin >> wstr;

	for (wchar_t symbol : wstr) {

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