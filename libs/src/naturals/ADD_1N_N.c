#pragma once
#include <stdio.h>
#include <stdlib.h>
#include "struct.h"
//Adding 1 to a natural number
//About the author:
//Petrova Elizaveta Mikhailovna, group ¹7307
//https://sites.google.com/view/petrovaliza7307
//e-mail: ostenok@gmail.com


natural *ADD_1N_N(natural *input_num) {
    // Copy the input number
    natural* result = copy(input_num);
    result->number[0] += 1;
    for (int i = 0; i < result->n; i++) {
        if (result->number[i] > 9) {
            result->number[i] %= 10;
            // Here may fall when i >= 399
            result->number[i + 1] += 1;
            // If i + 1 was equal size of numbers array, then resize
            if (i + 1 == result->n) {
                result->n++;
            }
        }
    }
    return result;

}
//Time for doing: 15 минут
