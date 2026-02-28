#include <stdio.h>
#include <stdlib.h>

int main( void ) {

    int *kp = calloc( 10, sizeof(int) );
    kp[0] = 2;

    printf("%d\n", kp[0]);


    return 0;
}