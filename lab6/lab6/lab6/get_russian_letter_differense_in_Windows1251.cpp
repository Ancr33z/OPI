#include <iostream>
#include <cwchar> 
#include <windows.h> 

#include "header.h"

int get_russian_letter_differense_in_Windows1251() 
{

    using namespace std;
    
    wcout << L"Введите строку символов русского алфавита: ";
    
    wstring stroka;
    
    wcin >> stroka;

    for (wchar_t symbol : stroka) 
    {
    
        int code = static_cast<int>(symbol);

        if (code >= 1040 && code <= 1103) // Коды для русских букв
        { 
            if (iswlower(symbol)) {
               
                wcout << L"Код верхнего регистра: " << code - 32 - 848 << endl;
                
                wcout << L"Код нижнего регистра: " << code - 848 << endl;
                
                wcout << L"Разница равна: " << 32 << endl << '\n';
            
            }
            else {
            
                wcout << L"Код верхнего регистра: " << code - 848 << endl;
                
                wcout << L"Код нижнего регистра: " << code + 32 - 848 << endl;
                
                wcout << L"Разница равна: " << 32 << endl << '\n';
            
            }
        }
        else {
        
            wcout << L"Символ \"" << symbol << L"\" не является символом русского алфавита" << endl << '\n';
        
        }

    }

    return 0;

}