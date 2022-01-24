#ifndef BOOK_SUBSCRIPTION_H
#define BOOK_SUBSCRIPTION_H

#include "constants.h"

struct date
{
    int day;
    int month;
    double kol_precipitations;
};

struct characteristic
{
    char tip_precipitations[MAX_STRING_SIZE];
};

struct book_subscription
{
    date den_mes_kol;
    characteristic vid_precipitations;
};

#endif
