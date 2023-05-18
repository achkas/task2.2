// Структуры и перечисления 2.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <windows.h>;


struct person {
    int acnum = 0;
    std::string name = " ";
    double balance = 0;
};

void nwb(person& p, double nb) {
    p.balance = nb;
}




int main()
{ 
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "ru");
    person p;
    double nb;   

    std::cout << "Введите номер счёта: ";
    std::cin >> p.acnum;
    std::cout << "Введите имя владельца: ";
    std::cin >> p.name;    
    std::cout << "Введите баланс: ";
    std::cin >> p.balance;
 /*std::cout << "Ваш счёт: " << " " << p.name << ", " << p.acnum << ", " << p.balance << std::endl;*/
    std::cout << "Введите новый баланс: ";
    std::cin >> nb;
    nwb(p, nb);
    std::cout << "Ваш счёт: " << " " <<  p.name << ", " << p.acnum << ", " << p.balance << std::endl;    
    return 0;
}