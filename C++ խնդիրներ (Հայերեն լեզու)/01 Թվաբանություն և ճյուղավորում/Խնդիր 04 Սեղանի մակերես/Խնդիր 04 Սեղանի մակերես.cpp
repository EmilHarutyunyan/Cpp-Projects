// Խնդիր 04 Սեղանի մակերես.cpp

/* Պահանջվում է գրել ծրագիր, որը մուտքում կստանա ուղղանկյուն սեղանի հիմքերը ու բարձրությունը և կհաշվի այդ սեղանի մակերեսը։ */

/*
	Օրինակներ
	====== Թեստ #1 =======
	Մուտք
	1 1 1

	Ելք
	1

	====== Թեստ #2 =======
	Մուտք
	2 1 1

	Ելք
	1.5

	====== Թեստ #3 =======
	Մուտք
	4 2 5

	Ելք
	15

	====== Թեստ #4 =======
	Մուտք
	4 3 15

	Ելք
	52.5

	====== Թեստ #5 =======
	Մուտք
	50 100 800

	Ելք
	60000

	====== Թեստ #6 =======
	Մուտք
	1258 78965 14785

	Ելք
	5.93049e+08

	====== Թեստ #7 =======
	Մուտք
	2290356220 4 2

	Ելք
	2.29036e+09
*/

#include <iostream>

int main()
{
	double long basis_one, basis_two, height;
	std::cin >> basis_one >> basis_two >> height;
	std::cout << (basis_one + basis_two) / 2 * height;
}