#pragma once
#include "../../naturals.h"

int COM_NN_D(natural* first, int* second)
{
    if (first->n != second->n) {
        return first->n > second->n ? 2 : 1; // Compare sizes
    } else {
        for (int i = n - 1; i >= 0; --i) {
            if (first->digits[i] != second->number[i]) // Compare nums
                return first->digits[i] > second->number[i] ? 2 : 1;
        }
        return 0;
    }
}