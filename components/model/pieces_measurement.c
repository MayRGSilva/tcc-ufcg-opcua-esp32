#include <stdio.h>
#include "pieces_measurement.h"

#define EMPTY_STOCK 31.0
#define FULL_STOCK 8.0
#define PIECE_SIZE 2.3

int pieces_quantity(float *distance){

    int quantity = 0;
    float distance_cm = (*distance)*100;
    if((distance_cm <= EMPTY_STOCK)){
        if(distance_cm >=(EMPTY_STOCK - PIECE_SIZE)){
            quantity = 1;
        }else if(distance_cm <=(EMPTY_STOCK - PIECE_SIZE) && distance_cm >=(EMPTY_STOCK - PIECE_SIZE*2)){
            quantity = 2;
        }else if(distance_cm <=(EMPTY_STOCK - PIECE_SIZE*2) && distance_cm >=(EMPTY_STOCK - PIECE_SIZE*3)){
            quantity = 3;
        }else if(distance_cm <=(EMPTY_STOCK - PIECE_SIZE*3) && distance_cm >=(EMPTY_STOCK - PIECE_SIZE*4)){
            quantity = 4;
        }else if(distance_cm <=(EMPTY_STOCK - PIECE_SIZE*4) && distance_cm >=(EMPTY_STOCK - PIECE_SIZE*5)){
            quantity = 5;
        }else if(distance_cm <=(EMPTY_STOCK - PIECE_SIZE*5) && distance_cm >=(EMPTY_STOCK - PIECE_SIZE*6)){
            quantity = 6;
        }else if(distance_cm <=(EMPTY_STOCK - PIECE_SIZE*6) && distance_cm >=(EMPTY_STOCK - PIECE_SIZE*7)){
            quantity = 7;
        }else if(distance_cm <=(EMPTY_STOCK - PIECE_SIZE*7) && distance_cm >=(EMPTY_STOCK - PIECE_SIZE*8)){
            quantity = 8;
        }else if(distance_cm <=(EMPTY_STOCK - PIECE_SIZE*8) && distance_cm >=(EMPTY_STOCK - PIECE_SIZE*9)){
            quantity = 9;
        }else if(distance_cm <=(EMPTY_STOCK - PIECE_SIZE*9) && distance_cm >=(EMPTY_STOCK - PIECE_SIZE*10)){
            quantity = 10;
        }else{
            quantity = 11;
        }
    }else{
        printf("OUT OF RANGE\n");
    }
    return quantity;
}