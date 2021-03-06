// Задача 20 Insertion sort.cpp

/* Требуется написать программу, которая получает естественное число N (n ≤ 1000) в входе, а затем последовательность N, состоящая из целых элементов. Необходимо, чтобы программа выстроила элементы последовательности в порядке убывания. Вычитаемые цифры должны быть разделены друг от друга на пробелом. При решении проблемы использовать массив и алгоритм insertion sort. */

/*
    Примеры
    ====== Тест #1 =======
    Входные данные
    10 1 2 3 4 5 6 7 8 9 10

    Результат работы
    10 9 8 7 6 5 4 3 2 1
    ====== Тест #2 =======
    Входные данные
    5 -1 8 -15 99 -100

    Результат работы
    99 8 -1 -15 -100
*/

#include <iostream>

int main()
{
    int N;
    int arr[1000]{};
    std::cin >> N;
    for (int i = 0; i < N; ++i)
    {
        std::cin >> arr[i];
    }
    for (int j = 1; j < N; ++j)
    {
        int k = j;
        while (k - 1 >= 0 && arr[k - 1] < arr[k])
        {
            int temp = arr[k - 1];
            arr[k - 1] = arr[k];
            arr[k] = temp;
            --k;
        }
    }
    for (int t = 0; t < N; ++t)
    {
        std::cout << arr[t] << " ";
    }
}