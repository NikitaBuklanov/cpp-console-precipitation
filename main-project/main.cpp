#include <iostream>

using namespace std;

#include "book_subscription.h"
#include "file_reader.h"
#include "constants.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Лабораторная работа №1. GIT\n";
    cout << "Вариант №3. Осадки\n";
    cout << "Автор: Никита Букланов\n\n";
    book_subscription* subscriptions[MAX_FILE_ROWS_COUNT];
    int size;
    try
    {
        read("data.txt", subscriptions, size);
        cout << "***** Осадки *****\n\n";
        for (int i = 0; i < size; i++)
        {
            /********** вывод даты **********/
            cout << "Дата........: ";
            // вывод дня
            cout << subscriptions[i]->den_mes_kol.day << ' ';
            // вывод месяца
            cout << subscriptions[i]->den_mes_kol.month << ' ';
            /********** вывод количества осадков и тип осадков **********/
            cout << "Осадки...........: ";
            // вывод количества осадков
            cout << subscriptions[i]->den_mes_kol.kol_precipitations << ' ';
            // вывод типа осадков
            cout << subscriptions[i]->vid_precipitations.tip_precipitations << '\n';
        }
        for (int i = 0; i < size; i++)
        {
            delete subscriptions[i];
        }
    }
    catch (const char* error)
    {
        cout << error << '\n';
    }
    cout << "Лабораторная работа №1. GIT\n";
    cout << "Вариант №3. Осадки\n";
    cout << "Автор: Никита Букланов\n";
    cout << "Группа: 14\n";
    return 0;
}