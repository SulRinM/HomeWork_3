/*
В этом задании вам нужно будет создать класс-счётчик

Создайте класс Counter. Класс должен выполнять функцию счётчика, для этого он должен предоставлять:

возможность увеличить своё значение на 1
возможность уменьшить своё значение на 1
возможность посмотреть своё текущее значение
возможность создания экземпляра класса с начальным значением по умолчанию (1)
возможность создания экземпляра класса с инициализирующим начальным значением
Обратите внимание на то, что у внешнего кода не должно быть возможности изменить 
внутреннее значение счётчика напрямую

Напишите код, демонстрирующий работу класса Counter. Спросите у пользователя, хочет ли он указать
начальное значение для счётчика. Если хочет, дайте ему возможность это сделать. Затем предоставьте 
пользователю возможность вводить команды:

+: увеличьте счётчик на 1
-: уменьшите счётчик на 1
=: выведите текущее значение счётчика
x: завершите работу программы
*/


#include <iostream>
#include <locale.h>

class Counter
{
public:
	Counter(int i);
	Counter();
	void inc();
	void dec();
	int get();

private:
	int i;
};

Counter::Counter(int i)
{
	this->i = i;
}
Counter::Counter()
{
	this->i = 1;
}
void Counter::inc()
{
	i++;
}
void Counter::dec()
{
	i--;
}
int Counter::get()
{
	return i;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	system("chcp 1251");

	std::string m;
	std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
	std::cin >> m;
	if (m == "да") 
	{
		int val;
		std::cout << "Введите начальное значение счётчика: ";
		std::cin >> val;
		Counter count = Counter(val);
		bool flag = true;
		while (flag)
		{
			std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
			std::cin >> m;
			if (m == "+") {
				count.inc();
			}
			else if (m == "-") {
				count.dec();
			}
			else if (m == "=") {
				std::cout << count.get() << std::endl;
			}
			else if (m == "x") { // латиницей
				flag = false;
				std::cout << "До свидания!";
			}
		}
	}
	if (m == "нет")
	{
		Counter counter = Counter();
		bool flag = true;
		while (flag)
		{
			std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
			std::cin >> m;
			if (m == "+") {
				counter.inc();
			}
			else if (m == "-") {
				counter.dec();
			}
			else if (m == "=") {
				std::cout << counter.get() << std::endl;
			}
			else if (m == "x") { // латиницей
				flag = false;
				std::cout << "До свидания!";
			}
		}
	}



	return 0;
}
