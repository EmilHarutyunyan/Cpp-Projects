// Խնդիր 05 Թվերի գումար.cpp

/* Պահանջվում է գրել ծրագիր, որը մուտքում կստանա ամբողջ թիվ այնքան ժամանակ քանի դեռ չի ներմուծվել 0։ Եվ կարտածի ներմուծված թվերի գումարը։ Արգելվում է օգտագործել զանգված */

/*
	Օրինակներ
	====== Թեստ #1 =======
	Մուտք
	1 0

	Ելք
	1
	====== Թեստ #2 =======
	Մուտք
	5 -2 7 -11 0

	Ելք
	-1
	====== Թեստ #3 =======
	Մուտք
	0

	Ելք
	0
	====== Թեստ #4 =======
	Մուտք
	1 2 3 4 5 6 7 8 9 10 0

	Ելք
	55
	====== Թեստ #5 =======
	Մուտք: размер 54 ---
	1 2 3 4 5 6 7 8 9 10 -1 -2 -3 -4 -5 -6 -7 -8 -9 -10 0

	Ելք
	0
*/

#include <iostream>

int main()
{
	int n, sum;
	sum = 0;
	while (true)
	{
		std::cin >> n;
		if (n == 0)
		{
			break;
		}
		else
		{
			sum += n;
		}
	}
	std::cout << sum;
}
