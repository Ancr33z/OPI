// lab3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
//NikitaBorisov2005
//БорисовНикитаАндреевич2005  
//Борисов2005Nikita  0000 0000 0111 0111      0111 0111 77
// 
// Windows-1251
// 4E 69 6B 69 74 61 42 6F 72 69 73 6F 76 32 30 30 35 
// C1 EE F0 E8 F1 EE E2 CD E8 EA E8 F2 E0 C0 ED E4 F0 E5 E5 E2 E8 F7 32 30 30 35
// C1 EE F0 E8 F1 EE E2 32 30 30 35 4E 69 6B 69 74 61
// 
//
// UTF-8
// 4E 69 6B 69 74 61 42 6F 72 69 73 6F 76 32 30 30 35
// C1 EE F0 E8 F1 EE E2 CD E8 EA E8 F2 E0 32 30 30 35 
// C1 EE f0 E8 F1 EE E2 32 30 30 35 4E 69 6B 69 74 61 
// 
// UTF-16
// 4E 00 69 00 6B 00 69 00 74 00 61 00 42 00 6F 00 72 00 69 00 73 00 6F 00 76 00 32 00 30 00 30 00 35 00
// 11 04 3E 04 40 04 38 04 41 04 3E 04 32 04 1D 04 38 04 3A 04 38 04 42 04 30 04 32 00 30 00 30 00 35 00    
// 11 04 3E 04 40 04 38 04 41 04 3E 04 32 04 32 00 30 00 30 00 35 00 4E 00 69 00 6B 00 69 00 74 00 61 00 

#include <iostream>

int main()
{
    int number = 0x12345678;
    char hello[] = "Hello, ";
    char lfie[] = "NikitaBorisov2005";
    char rlfie[] = "БорисовНикита2005";
    char lr[] = "Борисов2005Nikita";

    wchar_t Lfie[] = L"NikitaBorisov2005";
    wchar_t Rlfie[] = L"БорисовНикита2005";
    wchar_t LR[] = L"Борисов2005Nikita";


    std::cout << hello << lfie << std::endl;
    return 0;
}

