#include <iostream>
#include <cwchar> 
#include <windows.h> 

#include "header.h"

int get_russian_letter_differense_in_Windows1251() 
{

    using namespace std;
    
    wcout << L"������� ������ �������� �������� ��������: ";
    
    wstring stroka;
    
    wcin >> stroka;

    for (wchar_t symbol : stroka) 
    {
    
        int code = static_cast<int>(symbol);

        if (code >= 1040 && code <= 1103) // ���� ��� ������� ����
        { 
            if (iswlower(symbol)) {
               
                wcout << L"��� �������� ��������: " << code - 32 - 848 << endl;
                
                wcout << L"��� ������� ��������: " << code - 848 << endl;
                
                wcout << L"������� �����: " << 32 << endl << '\n';
            
            }
            else {
            
                wcout << L"��� �������� ��������: " << code - 848 << endl;
                
                wcout << L"��� ������� ��������: " << code + 32 - 848 << endl;
                
                wcout << L"������� �����: " << 32 << endl << '\n';
            
            }
        }
        else {
        
            wcout << L"������ \"" << symbol << L"\" �� �������� �������� �������� ��������" << endl << '\n';
        
        }

    }

    return 0;

}