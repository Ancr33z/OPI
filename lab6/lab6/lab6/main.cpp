#include <iostream>
#include <windows.h>

#include "header.h"

using namespace std;

int main() 
{

    setlocale(LC_ALL, "rus");

    SetConsoleOutputCP(1251);

    SetConsoleCP(1251);

    int choose;

    do {

        puts("Выберите вариант использования(1-ASCII, 2-windows-1251, 3-Код символа (Windows-1251), 4- выход из программы)");

        cin >> choose;

        switch (choose)
        {

        case 1:

            get_english_letter_differense_in_ASCII();

            break;

        case 2:

            get_russian_letter_differense_in_Windows1251();

            break;

        case 3:

            get_number_code();

            break;

        case 4:

            out_programm();

            break;

        default: cout << "Некоректный вариант";

            break;

        }

    } while (choose != 4);

    return 0;

}