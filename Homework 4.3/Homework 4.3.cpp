// Homework 4.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
	int mas[100], n;
	bool flag = true;
    std::cout << "Enter the number of items\n";
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		std::cout << "Enter element:\n";
		std::cin >> mas[i];
	}

	while (flag)
	{
		flag = false;
		for (int i = 0; i < n - 1; i++)
		{
			if (mas[i] > mas[i + 1])
			{
				flag = true;
				int z = mas[i];
				mas[i] = mas[i + 1];
				mas[i + 1] = z;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		std::cout << mas[i];
	}
}

