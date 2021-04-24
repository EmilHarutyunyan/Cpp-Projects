﻿// Խնդիր 09  Մաքսիմալի հաճախակիություն.cpp

/* Գրել ծրագիր, որը մուտքում ստանում է N ոչ բացասական ամբողջ թիվ, ապա հաջորդականություն N ամբողջ տարրերից կազմված։ Որպես արդյունք ծրագիրը պետք է արտածի հաջորդականությունում մաքսիմալ տարրի հանդիպելու քանակը։ Արգելվում է օգտագործել զանգված։ */

/*
	Օրինակներ
	====== Թեստ #1 =======
	Մուտք
	0

	Ելք
	0
	====== Թեստ #2 =======
	Մուտք
	5 2 6 6 3 -5

	Ելք
	2
	====== Թեստ #3 =======
	Մուտք
	10 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1

	Ելք
	10
*/

#include <iostream>
#include <limits>

int main()
{
	int unsigned N, qount;
	long max;
	qount = 1;
	max = std::numeric_limits<long>::min();
	std::cin >> N;
	if (N == 0)
	{
		std::cout << 0;
	}
	else
	{
		for (int i = 0; i < N; ++i)
		{
			int x;
			std::cin >> x;

			if (x > max)
			{
				max = x;
			}

			else if (x == max)
			{
				++qount;
			}
		}

		std::cout << qount << "\n";
	}
}
