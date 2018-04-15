#pragma once
#include "struct.h"
#include "../../naturals.h"

int NZER_N_B(natural *num) {
    // Check if there's any digits that aren't 0, ifso
    // number is not zero.
    for (int i = 0; i < num->n; i++) {
        if (num->number[i] != 0) {
            return 0;
        }
    }
    return 1;
}
