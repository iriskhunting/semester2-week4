
/*
 * Matrix-vector product
 */

#include <stdio.h>

int main( void ) {
    int n = 4;           
    float **a, *b, *c;

    /*
    Dynamically allocate the matrix a and vectors b and c using size n
    Intialise the matrix a and vector b entries to 1. 
    Write code to compute the product.
    Store your answer in vector c
    Print your final answer
    Free the allocated memory
    */

    a = calloc(n, sizeof(float));
    for( int i=0; i<4; ++i ) {
        a[i] = calloc( n, sizeof(float) ); // allocate 4 floats in each row
    }

    b = calloc(n, sizeof(float));
    c = calloc(n, sizeof(float));

    for (int j=0; i<4; ++j) {
        for (int k=0; k<4; ++k) {
            a[j][k] = 1
        }
        b[j] = 2
    }

    for (int l=0; l<4; ++l) {
        c[l]
    }

    
    return 0;
 }
