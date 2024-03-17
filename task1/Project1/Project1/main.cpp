#include <iostream>


int function(std::string str, int forbidden_length)
{
	int strLength = str.length();
	if (strLength == forbidden_length)
	{
		throw std::domain_error("Вы ввели слово запретной длины!До свидания");
	}
	return strLength;
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "ru");
	int forbidden_length = -1;
	std::string text = "";
	std::cout << "Введите запретную длину: ";
	std::cin >> forbidden_length;

	std::cout << "Введите слово: ";
	std::cin >> text;
	try
	{
		function(text, forbidden_length);
	}
	catch (std::domain_error e)
	{
		std::cout << e.what();
	}

	return 0;
}