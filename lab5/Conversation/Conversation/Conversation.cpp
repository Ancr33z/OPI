#include <iostream> 
#include <cctype>  //функции toupper(tolower)/towupper(towlower)
#include <cwctype>
#include <cwchar> //широкий чар
#include <windows.h> 


void main()
{

    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    using namespace std;

    int n;
    char letter, letterUpper, letterLower;

    puts("Выберите вариант использования: ");
    puts("1 - Определение разницы значений кодов в ASCII буквы  латинского алфавита в прописном и строчном написании");
    puts("2 - Определение разницы значений кодов в Windows-1251 буквы русского алфавита  в прописном и строчном написании");
    puts("3 - Вывод в консоль кода символа, соответствующего введенной цифре");
    puts("4 - Выход из программы");
    cin >> n;
    switch (n)
    {
    case 1:
        cout << "Введите букву латинского алфавита в прописном и строчном написании ";
        cin >> letter;
        if (isascii(letter) && isalpha(letter)) // isascii функция проверяющая есть ли леттер в кодировке аски
        {
            letterLower = tolower(letter);
            letterUpper = toupper(letter);
            cout << "Нижний регистр " << letterLower << endl;
            cout << "Верхний регистр " << letterUpper << endl;
            int LowerASCII = static_cast<int>(letterLower); // статик каст <инт> переводит букву в код символа аски (зачем там инт не знаю)
            cout << "Код нижнего регистра: " << LowerASCII << endl;
            int UpperASCII = static_cast<int>(letterUpper);
            cout << "Код верхнего регистра: " << UpperASCII << endl;
            int difference = LowerASCII - UpperASCII;
            cout << "Разница равна: " << difference;
        }
        else
        {
            cout << "Это не буква латинского алфавита";
        }
        break;



    case 2:
        int code, code1;
        wchar_t letter1;
        cout << "Введите букву русского алфавита в прописном и строчном написании  ";
        wcin >> letter1;
        printf("%s", &letter1);
        code = static_cast<int>(letter1);    // код числа для проверки
        if (code >= 192 && code <= 255) //русские буквы находятся в переделе от 192 до 255
        {
            if (iswlower(letter1))
            {
                code1 = code - 32;
                cout << "Код верхнего регистра " << code1 << endl;
                cout << "Код нижнего регистр " << code << endl;
                int difference = code - code1;
                cout << "Разница равна " << difference;
            }
            else
            {
                code1 = code + 32;
                cout << "Код верхнего регистр " << code << endl;
                cout << "Код нижнего регистр " << code1 << endl;
                int difference = code1 - code;
                cout << "Разница равна " << difference;
            }
        }
        else
        {
            cout << "Это не буква русского алфавита";

        }
        break;


    case 3:
        int CodeNum;
        char Num;
        cout << "Введите цифру для вывода в консоль кода символа " << endl;
        cin >> Num;
        CodeNum = static_cast<int>(Num);
        if (CodeNum <= 57 && CodeNum >= 48)
        {
            cout << "Код цифры " << Num << " " << "равен: " << CodeNum;
        }
        else
        {
            cout << "Это не цифра";
        }
        break;
    case 4:
        cout << "Нажмите enter для выхода";
        break;
    default: cout << "Некоректный вариант";
        break;
    }


}   