// Խնդիր 01 Չվերթի վերջնակետ-քաղաք.cpp


/*  Գրել ծրագիր, որը մուտքում կստանա N չվերթների մասին տեղեկություն՝ յուրաքանչյուր չվերթի վերջնակետ-քաղաք և գնացքի համար, ապա M քաղաքի անվանում։ Որպես ծրագրի աշխատանքի արդյունք այն պետք է արտածի այն գնացքների համարները , որոնք մեկնում են տրված M քաղաքը։ Այդպիսիք չլինելուն դեպքում արտածել “Unreachable city!” հաղորդագրությունը։ */

    // Նկարագրել TRAIN անունով դաս, որն ունի հետևյալ դաշտերը.

    // .չվերթի վերջնակետ - քաղաք
    // .գնացքի համարը
/*
    Օրինակներ
    ====== Թեստ #1 =======
    Մուտք
    2
    Yerevan K - 154
    Kapan J - 100
    Kapan

    Ելք
    J - 100

    ====== Թեստ #2 =======
    Մուտք
    1
    Gyumri I - 596
    Yerevan

    Ելք
    Unreachable city!

    ====== Թեստ #3 =======
    Մուտք
    3
    Yerevan I - 789
    Yerevan J - 159
    Yerevan A - 465
    Yerevan
    Ելք
    I - 789
    J - 159
    A - 465
*/

/*
// Տարբերակ 1
#include <iostream>
#include <string>

class TRAIN
{
public:
    int a;
    std::string mNameCity[40]{};
    std::string mTrainNumber[40]{};
    std::string mEndCity;

    void print()
    {
        bool val = false;
        for (int j = 0; j < a; j++)
        {
            if (mEndCity == mNameCity[j])
            {
                std::cout << mTrainNumber[j] << "\n";
                val = true;
            }
        }
        if (!val)
            std::cout << "Unreachable city!";
    }
};

int main()
{
    TRAIN train;
    int n;
    std::string name, number, city;
    std::cin >> n;
    const int p = 2 * n;
    std::string lineVariable[p]{};
    for (int i = 0; i < p; i++)
    {
        if (i == 0 || i % 2 == 0)
        {
            std::cin >> lineVariable[i];
            train.mNameCity[i] += lineVariable[i];
        }
        else
        {
            std::cin >> lineVariable[i];
            train.mTrainNumber[i - 1] += lineVariable[i];
        }
    }
    std::cin >> city;
    train.mEndCity = city;
    train.a = 2 * n;
    train.print();
}
*/

// Տարբերակ 2
#include <iostream>
#include <string>
#include <vector>

    class Train
{
public:
    std::string city_name;
    std::string train_number;
};

int main()
{
    int n;
    std::cin >> n;

    std::vector<Train> trains(n);
    for (int i = 0; i < trains.size(); ++i)
    {
        std::cin >> trains[i].city_name >> trains[i].train_number;
    }

    std::string my_city;
    std::cin >> my_city;
    bool cityIsReachable = false;

    for (int i = 0; i < trains.size(); ++i)
    {
        if (my_city == trains[i].city_name)
        {
            std::cout << trains[i].train_number << std::endl;
            cityIsReachable = true;
        }
    }

    if (!cityIsReachable)
    {
        std::cout << "Unreachable city!";
    }
}