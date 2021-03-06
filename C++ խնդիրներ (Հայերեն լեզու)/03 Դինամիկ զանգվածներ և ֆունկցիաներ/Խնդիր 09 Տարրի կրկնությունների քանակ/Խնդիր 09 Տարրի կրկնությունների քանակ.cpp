// Խնդիր 09 Տարրի կրկնությունների քանակ.cpp

/* Գրել ծրագիր, որը մուտքում կստանա N բնական թիվ, ապա հաջորդականություն N ամբողջ տարրերից կազմված։ Պահանջվում է արտածել հաջորդականության յուրաքանչյուր տարրի կրկնությունների քանակը։ */

/*
    Օրինակներ
    ====== Թեստ #1 =======
    Մուտք
    5 1 2 3 4 5

    Ելք
    1 1 1 1 1
    ====== Թեստ #2 =======
    Մուտք
    10 1 1 2 2 3 3 4 4 5 5

    Ելք
    2 2 2 2 2 2 2 2 2 2
    ====== Թեստ #3 =======
    Մուտք
    10 1 2 -10 5 2 -6 -6 7 7 7

    Ելք
    1 2 1 1 2 2 2 3 3 3
*/

#include <iostream>

int main()
{
    int count;
    unsigned size;
    std::cin >> size;
    short* dynArr = new short[size];
    for (int i = 0; i < size; i++)
        std::cin >> dynArr[i];
    for (int i = 0; i < size; i++)
    {
        count = 0;
        for (int j = 0; j < size; ++j)
        {
            if (dynArr[i] == dynArr[j])
                ++count;
        }
        std::cout << count << " ";
    }
}