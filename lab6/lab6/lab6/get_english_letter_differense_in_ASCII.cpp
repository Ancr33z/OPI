#include <iostream>
#include <cwchar> 

#include "header.h"

int get_english_letter_differense_in_ASCII()
{

    using namespace std;

    int letterLower, letterUpper;

    cout << "������� ������� ���������� �������� ";

    wstring stroka;

    wcin >> stroka;

    for (wchar_t symbol : stroka) {
        if (isascii(symbol))
        {

            int code = static_cast<int>(symbol);

            letterLower = tolower(code);

            letterUpper = toupper(code);

            cout << "������ ������� " << letterLower << endl;

            cout << "������� ������� " << letterUpper << endl;

            int LowerASCII = static_cast<int>(letterLower); 

            cout << "��� ������� ��������: " << LowerASCII << endl;

            int UpperASCII = static_cast<int>(letterUpper);

            cout << "��� �������� ��������: " << UpperASCII << endl;

            int difference = LowerASCII - UpperASCII;

            cout << "������� �����: " << difference << endl << '\n';

        }

        else

        {

            cout << "��� �� ������ ���������� ��������" << '\n';

        }

    }
    
    return 0;

}