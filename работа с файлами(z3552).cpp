#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int action = 0;
	int mans;
	char buff[1000000];
	std::string line = "";

	std::cout << "Выберите действие\n1)Записать в файл данные пользователя\n2)Получить все данные из файла\n";
	std::cin >> action;

	if (action == 1) {
		std::cout << "Выберите количество пользователей,которые нужно внести:";
		std::cin >> mans;
		for (int numd = 0; numd < mans; numd++)
		{
			std::string ID = "";
			std::string fam = "";
			std::string name = "";
			std::string voz = "";
			std::string gor = "";
			std::string nom = "";
			std::string str = "";

			std::cout << "Введите id пользователя:\n";
			std::cin >> ID;

			std::cout << "Введите фамилию пользователя: \n";
			std::cin >> fam;

			std::cout << "Введите имя пользователя:\n";
			std::cin >> name;

			std::cout << "Введите возраст пользоваля: \n";
			std::cin >> voz;

			std::cout << "Введите город пользоваля: \n";
			std::cin >> gor;

			std::cout << "Введите номер пользоваля: \n";
			std::cin >> nom;

			str = "\n" + ID + "\n" + fam + "\n" + name + "\n" + voz + "\n" + gor + "\n" + nom + "\n";

			std::ofstream z3552("z3552.txt", std::ios::app);
			z3552 << str;
		}
	}
	else if (action == 2) {
		std::ifstream z3552("z3552.txt");

		if (z3552.is_open())
		{
			while (getline(z3552, line))
			{
				std::cout << line << std::endl;
			}
		}
	}
	return 0;
	system("pause");
}