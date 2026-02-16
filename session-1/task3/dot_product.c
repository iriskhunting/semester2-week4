
/*
 * Dot product of 2 vectors
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main( void ) {
    int n = 5;
    float *a, *b, *d;  // stack-based pointers#
    int i;
    float dp = 0;

    // allocation of heap memory for vectors
    a = calloc( n, sizeof(float) );
    b = calloc( n, sizeof(float) );
    d = calloc( n, sizeof(float) );

    /*
    Code to initialise the vectors with numerical data 
    Code to compute the dot product 
    - does this differ from the initial code?
    - note that loop now run k=0;k<n 
    Store your answer in d
    print your final answer
    */

   float tempA[5] = {5.6, 6.1, 4.0, 1.7, 3.2};
   float tempB[5] = {7.1, 0.5, 5.3, 8.4, 9.0};

   for (i = 0; i < n; i++) {
      a[i] = tempA[i];
      b[i] = tempB[i];
}
    for ( i=0; i<5; ++i) {
      d[i] += a[i] * b[i];
      dp = dp + d[i];
      printf("%.2f\n",d[i]);
    }

    printf("%f\n",dp);

    // explicit deallocation of heap memory before exit */
    free(a);
    free(b);
    free(d);

    return 0;
 }