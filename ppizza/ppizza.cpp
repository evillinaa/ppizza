﻿#include <iostream>
#include <Windows.h>
#include <cmath>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float choice, sum = 0, pizzas = 0, freepizzas = 0, drinks = 0, drink1 = 0, drink1sum = 0, drink2 = 0, drink2sum = 0, drink3 = 0, drink3sum = 0, pizza1 = 0, pizza1sum = 0, pizza2 = 0, pizza2sum = 0, pizza3 = 0, pizza3sum = 0, pizza4 = 0, pizza4sum = 0;

	std::cout << "\t      Меню\n\n\t      Пицца\n\nНазвание\t\tЦена\t\tкод блюда\n\n";
	std::cout << "Пепперони\t\t10$\t\t    11\nМаргаритта\t\t9$\t\t    12\nС ананасами\t\t13$\t\t    13\nСырная\t\t\t8$\t\t    14\n\n";
	std::cout << "\t      Напитки\n\nНазвание\t\tЦена\t\tкод напитка\n\n";
	std::cout << "Милкшейк\t\t3$\t\t    21\nЗлойКола\t\t2$\t\t    22\nВода\t\t\t1$\t\t    23\n\n";

	while (true)
	{
		std::cout << "\n\nВведите код пиццы/напитка\nЕсли вы желаете завершить заказ, введите '0'\nВведите код: ";
		std::cin >> choice;

		if (choice == 11)
		{
			pizza1++;
			pizza1sum += 10;
			pizzas++;
			if (pizzas == 5)
			{
				pizza1sum = pizza1sum - 10;
				pizzas = 0;
				freepizzas++;
			}
		}
		else if (choice == 12)
		{
			pizza2++;
			pizza2sum += 9;
			pizzas++;
			if (pizzas == 5)
			{
				pizza2sum = pizza2sum - 9;
				freepizzas++;
				pizzas = 0;
			}
		}
		if (choice == 13)
		{
			pizza3++;
			pizza3sum += 13;
			pizzas++;
			if (pizzas == 5)
			{
				pizza3sum = pizza3sum - 13;
				freepizzas++;
				pizzas = 0;
			}

		}
		else if (choice == 14)
		{
			pizza4++;
			pizza4sum += 8;
			pizzas++;
			if (pizzas == 5)
			{
				pizza4sum = sum - 8;
				pizzas = 0;
				freepizzas++;
			}
		}
		if (choice == 21)
		{
			drinks++;
			drink1++;
			drink1sum += 3;

		}
		else if (choice == 22)
		{
			drinks++;
			drink2++;
			drink2sum += 2;
		}
		else if (choice == 23)
		{

			drink3++;
			drink3sum += 1;
		}
		else if (choice == 0)
		{
			break;
		}




	}

	if (drinks >= 3)
	{
		float discount1, discount2;
		discount1 = 3 - (3 * 0.15);
		discount2 = 2 - (2 * 0.15);

		drink1sum = drink1 * discount1;
		drink2sum = drink2 * discount2;
	}

	if (pizza1sum < 0)
	{
		pizza1sum = 0;
	}
	if (pizza2sum < 0)
	{
		pizza2sum = 0;
	}
	if (pizza3sum < 0)
	{
		pizza3sum = 0;
	}
	if (pizza4sum < 0)
	{
		pizza4sum = 0;
	}

	sum = pizza1sum + pizza2sum + pizza3sum + pizza4sum + drink1sum + drink2sum + drink3sum;


	if (sum >= 50)
	{
		sum = sum - (sum * 0.2);
	}


	std::cout << "\n\nВаш заказ\n\n";

	if (pizza1 > 0)
	{
		std::cout << "Пепперони\t\t" << pizza1 << "шт\t\t" << pizza1sum << "$\n";
	}
	if (pizza2 > 0)
	{
		std::cout << "Маргаритта\t\t" << pizza2 << "шт\t\t" << pizza2sum << "$\n";
	}
	if (pizza3 > 0)
	{
		std::cout << "С ананасами\t\t" << pizza3 << "шт\t\t" << pizza3sum << "$\n";
	}
	if (pizza4 > 0)
	{
		std::cout << "Сырная\t\t\t" << pizza4 << "шт\t\t" << pizza4sum << "$\n";
	}
	if (drink1 > 0)
	{
		std::cout << "Милкшейк\t\t" << drink1 << "шт\t\t" << drink1sum << "$\n";
	}
	if (drink2 > 0)
	{
		std::cout << "ЗлойКола\t\t" << drink2 << "шт\t\t" << drink2sum << "$\n";
	}
	if (drink3 > 0)
	{
		std::cout << "Вода\t\t\t" << drink3 << "шт\t\t" << drink3sum << "$\n";
	}
	std::cout << "\nКоличество бесплатных пицц: " << freepizzas;
	std::cout << "\n\nИтого (с учётом скидок): " << sum << "$\n";

	return 0;
}