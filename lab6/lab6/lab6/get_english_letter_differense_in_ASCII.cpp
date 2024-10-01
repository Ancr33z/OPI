#include <iostream>
#include <cwchar> 

#include "header.h"

int get_english_letter_differense_in_ASCII()
{

    using namespace std;

    int letterLower, letterUpper;

    cout << "Введите символы латинского алфавита ";

    wstring stroka;

    wcin >> stroka;

    for (wchar_t symbol : stroka) {
        if (isascii(symbol))
        {

            int code = static_cast<int>(symbol);

            letterLower = tolower(code);

            letterUpper = toupper(code);

            cout << "Нижний регистр " << letterLower << endl;

            cout << "Верхний регистр " << letterUpper << endl;

            int LowerASCII = static_cast<int>(letterLower); 

            cout << "Код нижнего регистра: " << LowerASCII << endl;

            int UpperASCII = static_cast<int>(letterUpper);

            cout << "Код верхнего регистра: " << UpperASCII << endl;

            int difference = LowerASCII - UpperASCII;

            cout << "Разница равна: " << difference << endl << '\n';

        }

        else

        {

            cout << "Это не символ латинского алфавита" << '\n';

        }

    }
    
    return 0;

}