#include "file_reader.h"
#include "constants.h"

#include <fstream>
#include <cstring>

void read(const char* file_name, book_subscription* array[], int& size)
{
    std::ifstream file(file_name);
    if (file.is_open())
    {
        size = 0;
        char tmp_buffer[MAX_STRING_SIZE];
        while (!file.eof())
        {
            book_subscription* item = new book_subscription;
            file >> item->den_mes_kol.day;
            file >> item->den_mes_kol.month;
            file >> item->den_mes_kol.kol_precipitations;
            file >> item->vid_precipitations.tip_precipitations;
            file >> tmp_buffer;
            array[size++] = item;
        }
        file.close();
    }
    else
    {
        throw "Ошибка открытия файла";
    }
}