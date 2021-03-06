// Задача 8 Самая длинная последовательность.cpp

/* Написать программу, которая в входе получит N естественное число, а затем последовательность N, состоящая из целых элементов. Требуется отображение количества наиболее длительных постоянно растущих подпоследовательных элементов последовательности. */

/*
    Примеры
    ====== Тест #1 =======
    Входные данные
    1 -10

    Результат работы
    1
    ====== Тест #2 =======
    Входные данные
    2 123 123

    Результат работы
    1
    ====== Тест #3 =======
    Входные данные
    2 -1245 234

    Результат работы
    2
    ====== Тест #4 =======
    Входные данные
    5 1 2 3 -1 -20

    Результат работы
    3
    ====== Тест #5 =======
    Входные данные
    5 1 1 2 3 1

    Результат работы
    3
    ====== Тест #6 =======
    Входные данные
    5 0 0 0 1 10000

    Результат работы
    3
    ====== Тест #7 =======
    Входные данные
    10 1 2 3 1 2 3 3 4 5 6

    Результат работы
    4
    ====== Тест #8 =======
    Входные данные
    20 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 -2147483648

    Результат работы
    1
*/

#include <iostream>
#include <vector>

int main()
{
    int n;
    std::cin >> n;
    std::vector<int> v(n);
    for (int i = 0; i < v.size(); ++i)
        std::cin >> v[i];
    int count = 1, l;
    for (int i = 1; i < v.size(); i++)
    {
        l = 1;
        while (i < v.size() && v[i] > v[i - 1])
        {
            i++;
            l++;
        }
        if (l > count)
            count = l;
    }
    std::cout << count;
}