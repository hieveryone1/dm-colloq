//
// Created by vms on 15.04.18.
//

#ifndef DM_COLLOC_STRUCT_H
#define DM_COLLOC_STRUCT_H
#define MAX_LENGTH 400

#include "string.h"


struct natural {
    int n;
    int number[MAX_LENGTH];
};

natural* copy(natural* instance) {
    natural* result = (natural *)malloc(sizeof(natural));
    result->n = instance->n;
    for (int i = 0; i < result->n; i++) {
        result->number[i] = instance->number[i];
    }
    return result;
}

#endif //DM_COLLOC_STRUCT_H
