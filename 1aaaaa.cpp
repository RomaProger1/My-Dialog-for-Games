#include <iostream>
#include <ctime>
#include <iomanip>
#include <string>
using namespace std;

 void dialog1() {

	 cout << "1.Подойти к стражнику у ворот\n2.Уйти" << endl;
	int Name = 0;
	int Oplata;
	cin >> Name;

	string a = "{Игрок}";
	string b = "{Стражник} ";


	switch (Name)
	{
	case 1:
		cout << a << "Приветствую" << endl;
		cout << b << "Приветствую вас странник " << endl;
		cout << b << "Плата за проход 25 золотых " << endl;
		cout << "1.Оплатить\n2.Уйти" << endl;
		cin >> Oplata;
		if (Oplata == 1)
		{
			cout << " - 25 золотых, проходите ";

		}
		else if (Oplata == 2)
		{
			cout << "Вы вернулись назад" << endl;
				dialog1();
			
		}
		break;
	case 2:
		cout << "Вы прошли мимо" << endl;
		break;
	default:
		while (Name != true)
		{
			cout << "Нет тaкого варианта ! :)" << endl;
			dialog1();
		}
		break;
	}
}

int main()
{
	setlocale(LC_ALL, "ru");

	dialog1();

	return 0;
}
