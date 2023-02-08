#include <stdio.h>
#include <math.h>
#include "pieces_measurement.h"

#define EMPTY_STOCK 31.9
#define FULL_STOCK 7.14
#define PIECE_SIZE 2.3

int pieces_quantity(float *distance){

    int quantity = 0;
    float distance_cm = (*distance)*100;

    if(distance_cm <= EMPTY_STOCK && distance_cm >= FULL_STOCK){
        quantity = round((EMPTY_STOCK - distance_cm)/PIECE_SIZE);
    }else{
        printf("OUT OF RANGE\n");
    }
    return quantity;
}
