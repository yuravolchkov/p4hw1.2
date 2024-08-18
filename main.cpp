#include <iostream>
#include "Function.h"

int main()
{
	const int array_size = 9;
	int num_array[array_size] = { 14, 16, 19, 32, 32, 32, 56, 69, 72 };
	int input_num;
	
	setlocale(LC_ALL, "Russian"); // задать русский текст
	std::system("chcp 1251"); // настроить кодировку консоли
	std::system("cls"); // очистить экран

	std::cout << "Введите точку отсчёта: ";
	std::cin >> input_num;
	std::cout << "Количество элементов в массиве больших, чем " << input_num << ": " << array_size - super_func(num_array,array_size, input_num)<< std::endl;


	return 12;
}