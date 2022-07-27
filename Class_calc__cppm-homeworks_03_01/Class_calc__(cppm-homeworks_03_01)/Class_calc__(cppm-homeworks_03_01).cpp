/*
* В этом задании вам нужно будет создать класс, выполняющий простые арифметические операции для двух чисел, и продемонстрировать его работу

Создайте класс Calculator. Класс должен содержать два поля num1 и num2 для хранения дробных чисел. Также класс должен содержать следующие методы:

double add() - метод должен возвращать результат сложения num1 и num2
double multiply() - метод должен возвращать результат перемножения num1 и num2
double subtract_1_2() - метод должен возвращать результат вычитания num2 из num1
double subtract_2_1() - метод должен возвращать результат вычитания num1 из num2
double divide_1_2() - метод должен возвращать результат деления num1 на num2
double divide_2_1() - метод должен возвращать результат деления num2 на num1
bool set_num1(double num1) - метод должен установить значение поля num1 равное значению аргумента num1 в случае, если значение аргумента не равно 0. Возвращает true, если установка произошла успешно, в обратном случае false
bool set_num2(double num2) - метод должен установить значение поля num2 равное значению аргумента num2 в случае, если значение аргумента не равно 0. Возвращает true, если установка произошла успешно, в обратном случае false
Напишите код, демонстрирующий работу класса Calculator. Попросите пользователя ввести два числа. После этого выведите пользователю результаты всех операций или попросите его ввести значение ещё раз, если предыдущий ввод был некорректен

Программа спрашивает пользователя бесконечно, пока он сам не закроет консоль
*/

#include <iostream>

class Calculator
{
public:
    double add();
    double multiply();
    double subtract_1_2();
    double subtract_2_1();
    double divide_1_2();
    double divide_2_1();
    bool set_num1(double num1);
    bool set_num2(double num2);

    Calculator(double num1, double num2)
    {
        this->num1 = num1;
        this->num2 = num2;
    }
    
    void set_param(double num1, double num2)
    {
        this->num1 = num1;
        this->num2 = num2;
    }

private:
    double num1;
    double num2;
};


double Calculator::add() {
    return num1 + num2;
}
double Calculator::multiply() {
    return num1 * num2;
}
double Calculator::subtract_1_2() {
    return num2 - num1;
}
double Calculator::subtract_2_1() {
    return num1 - num2;
}
double Calculator::divide_1_2() {
    return num1 / num2;
}
double Calculator::divide_2_1() {
    return num2 / num1;
}
bool Calculator::set_num1(double num1) {
    if (num1 != 0) {
        this->num1 = num1;
        return true;
    }
    else {
        return false;
    }
}
bool Calculator::set_num2(double num2) {
    if (num2 != 0) {
        this->num2 = num2;
        return true;
    }
    else {
        return false;
    }
}



int main()
{
    setlocale(LC_ALL, "Russian");

    Calculator my_calculator(0,0);

    double n1, n2;

    while (true)
    {
        std::cout << "Введите num1: ";
        std::cin >> n1;
        while (!n1) {
            std::cout << "Неверный ввод!" << std::endl;
            std::cout << "Введите num1: ";
            std::cin >> n1;
        }
        std::cout << "Введите num2: ";
        std::cin >> n2;
        while (!n2) {
            std::cout << "Неверный ввод!" << std::endl;
            std::cout << "Введите num2: ";
            std::cin >> n2;
        }
        my_calculator.set_param(n1, n2);
        std::cout << "num1 + num2 = " << my_calculator.add() << std::endl;
        std::cout << "num1 - num2 = " << my_calculator.subtract_2_1() << std::endl;
        std::cout << "num2 - num1 = " << my_calculator.subtract_1_2() << std::endl;
        std::cout << "num1 * num2 = " << my_calculator.multiply() << std::endl;
        std::cout << "num1 / num2 = " << my_calculator.divide_1_2() << std::endl;
        std::cout << "num2 / num1 = " << my_calculator.divide_2_1() << std::endl;
    }

    return 0;
}


