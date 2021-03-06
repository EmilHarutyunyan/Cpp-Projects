// Խնդիր 14  Զանգվածների տարբերություն.cpp

/* Պահանջվում է գրել ծրագիր, որը մուտքում կստանա 10 երկարությամբ երկու ամբողջ թվերի հաջորդականություն և կարտածի բոլոր այն տարրերը առաջին հաջորդականությունից, որոնք չկան երկրորդում։ Արտածվող թվերը միմյանցից պետք է բաժանված լինեն բացատանիշով և պետք է արտածվեն նույն հերթականությամբ ինչպես ներմուծվել են։ Խնդիրը լուծելիս օգտագործել զանգված։ */

/*
    Օրինակներ
    ====== Թեստ #1 =======
    Մուտք
    1 2 3 4 5 6 7 8 9 10
    1 2 3 4 5 6 7 8 9 10

    Ելք

    ====== Թեստ #2 =======
    Մուտք
    10 20 30 40 50 60 70 80 90 100
    10 20 30 40 50 50 40 30 20 10

    Ելք
    60 70 80 90 100
    ====== Թեստ #3 =======
    Մուտք
    1 2 3 4 5 6 7 8 9 10
    -1 -2 -3 -4 -5 -6 -7 -8 -9 -10

    Ելք
    1 2 3 4 5 6 7 8 9 10
    ====== Թեստ #4 =======
    Մուտք
    15 -50 68 78 194 66 752 -111 789 -1000
    0 -10000 85 -50 456 -111 854 15 -752 78

    Ելք
    68 194 66 752 789 -1000
*/

#include <iostream>

int main()
{
    const int n = 10;
    int arr_1[n];
    int arr_2[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr_1[i];
    }
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr_2[i];
    }
    for (int k = 0; k < n; k++)
    {
        for (int j = 0; j < n;)
        {
            int x = arr_1[k];
            int y = arr_2[j];
            if (arr_1[k] == arr_2[j])
            {
                break;
            }
            if (j == 9)
            {
                std::cout << arr_1[k] << " ";
                break;
            }
            j++;
        }
    }
}
