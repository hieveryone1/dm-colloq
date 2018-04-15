#pragma once
#include "struct.h"

int COM_NN_D(natural* first, natural* second)
{
    if (first->n != second->n) {
        return first->n > second->n ? 2 : 1; // Compare sizes
    } else {
        for (int i = first->n - 1; i >= 0; --i) {
            if (first->number[i] != second->number[i]) // Compare nums
                return first->number[i] > second->number[i] ? 2 : 1;
        }
        return 0;
    }
}