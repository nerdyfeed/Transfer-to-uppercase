#include "stdafx.h"
#include <iostream>
#include <locale>

int main()
{
	setlocale(LC_ALL, "rus");
	char letter('a');
	cout << "Введите букву нижнего регистра:\n";
	cin >> letter;
	letter = letter - 32;
	cout << "Та же буква верхнего регистра: " << letter << "\n";
	return 0;
}