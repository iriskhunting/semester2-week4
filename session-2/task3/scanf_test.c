
#include <stdio.h>

int main( void ) {
    int i,j,k; // initialise the variables

    int count = scanf("%d %d %d",&i,&j,&k); // read input and store at i,j and k
    // scanf returns num of inputs so count stores this

    printf("Read %d values\n",count);
    printf("Values: %d %d %d\n",i,j,k);

    return 0;
}
