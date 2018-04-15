//
// Created by User on 4/11/2018.
//
#pragma once

#include <stdio.h>
#include <malloc.h>
#include "src/naturals/ADD_1N_N.c"
//#include "src/naturals/ADD_NN_N.c"
#include "src/naturals/COM_NN_D.c"
//#include "src/naturals/DIV_NN_Dk.c"
//#include "src/naturals/DIV_NN_N.c"
//#include "src/naturals/GCF_NN_N.c"
//#include "src/naturals/LCM_NN_N.c"
//#include "src/naturals/MOD_NN_N.c"
//#include "src/naturals/MUL_ND_N.c"
//#include "src/naturals/MUL_Nk_N.c"
//#include "src/naturals/MUL_NN_N.c"
#include "src/naturals/NZER_N_B.c"
//#include "src/naturals/SUB_NDN_N.c"
//#include "src/naturals/SUB_NN_N.c"
#include <string.h>


// For debugging and testing
char *str_repr(natural *num); // String representation of natural, e.g. [3, 1, 2, 3] is represented as "3123"
void print_natural(natural* num); // Outputs string representation to stdout
natural from_string(char *s) {
    int size = strlen(s);
    natural result;
    result.n = size;
    for (int i = size - 1; i >= 0; --i) {
        result.number[size - 1 - i] = s[i] - '0';
    }
    return result;
}

// For Pozdnyakov S.N.
int  COM_NN_D(natural *, natural *);
int NZER_N_B(natural *);
natural *ADD_1N_N(natural *);
//int* ADD_NN_N(int *, int *);
//int* SUB_NN_N(int *, int *);
//int *MUL_ND_N(int *, int );
//int *MUL_Nk_N(int *, int );
//int *MUL_NN_N(int *, int *);
//int *SUB_NDN_N(int *, int *, int );
//int  DIV_NN_Dk(int *, int *);
//int *DIV_NN_N(int *, int *);
//int *MOD_NN_N(int *, int *);
//int *GCF_NN_N(int *, int *);
//int *LCM_NN_N(int *, int *);

char *str_repr(natural *num) {
    char *str = (char *)malloc(num->n + 1);
    for (int i = num->n - 1; i >= 0; --i) {
        str[num-> n - 1 - i] = num->number[i] + '0';
    }
    str[num->n + 1] = 0;
    return str;
}

void print_natural(natural *num) {
    printf("%s\n", str_repr(num));
}