
/*
 * Sum of 2 matrices
 */

 #include <stdio.h>

 int main( void ) {
    float a[4][4];
    float b[4][4];
    float c[4][4];
    int i,j,k;

    /*
    Intialise the matrix a and b entries to 1. 
    Write code to compute the sum.
    Store your answer in matrix c
    Print your final answer
    */

    for ( i=0; i<4; ++i) {
      for ( j=0; j<4; ++j) {
         a[i][j] = 1;
         b[i][j] = 1;
         c[i][j] = a[i][j] + b[i][j];
      }
    }

    for ( k=0; k<4; ++k) {
      printf("%.1f  %.1f  %.1f  %.1f\n",c[k][0],c[k][1],c[k][2],c[k][3]);
    }


    return 0;
 }
