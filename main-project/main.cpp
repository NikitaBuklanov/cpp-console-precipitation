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
        for (int i = 0; i < size; i++)
        {
            cout << subscriptions[i]->den_mes_kol.day << ' ';
            cout << subscriptions[i]->den_mes_kol.month << ' ';
            cout << subscriptions[i]->den_mes_kol.kol_precipitations << ' ';
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
    return 0;
}