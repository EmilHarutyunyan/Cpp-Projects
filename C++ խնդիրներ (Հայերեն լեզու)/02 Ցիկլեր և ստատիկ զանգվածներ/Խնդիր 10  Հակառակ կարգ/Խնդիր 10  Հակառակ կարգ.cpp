// Խնդիր 10  Հակառակ կարգ.cpp

/* Գրել ծրագիր, որը մուտքում ստանում է N (N ≤ 1000) բնական թիվ, ապա հաջորդականություն N ամբողջ տարրերից կազմված։ Որպես արդյունք ծրագիրը պետք է արտածի հաջորդականությունը հակառակ կարգով։ Խնդիրը լուծելիս օգտագործել զանգված։ */

/*
    Օրինակներ
    ====== Թեստ #1 =======
    Մուտք
    5 1 2 3 4 5

    Ելք
    5 4 3 2 1
    Правильный ответ
    5 4 3 2 1
    ====== Թեստ #2 =======
    Մուտք
    10 -100 100 -753 999 -159 9 45 7 -8 -1

    Ելք
    -1 -8 7 45 9 -159 999 -753 100 -100
*/

/*
// Տարբերակ 1
#include <iostream>

int main()
{
    int N;
    std::cin >> N;
    int arr[1000]{};
    for (int i = 0; i < N; ++i)
    {
        std::cin >> arr[i];

    }
    
    for (int j = N; j > 0; j--) 
    {

        std::cout << arr[j-1] << " ";

     }
  
  
}
*/

// Տարբերակ 2
#include <iostream>

    int main() 
    {
        int i, b, N;
        int a[1000]{};
        std::cin >> N;
        for (i = 0; i < N; i++)
        {
            std::cin >> a[i];
        }
        for (i = 0; i < N / 2; i++) 
        {
            b = a[i];
            a[i] = a[N - i - 1];
            a[N - i - 1] = b;
        }
        for (i = 0; i < N; i++) 
        {
            std::cout << a[i] << " ";
        }
    }