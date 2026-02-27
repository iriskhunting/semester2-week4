
#include <stdio.h>

int main( void ) {

    // define suitable data
    // use scanf to read from the terminal
    // print the output from scanf and the data values 

    /* scanf() implementation
    int i,j;
    int count = scanf("%d + %d =",&i,&j);
    printf("%d\n",count);
    printf("%d, %d",i,j);
    */

    char buffer[100];
    fgets(buffer, 100, stdin);
    int i,j;
    int count = sscanf( buffer, "%d + %d", &i,&j);
    printf("%d\n",count);
    printf("%d, %d",i,j);


    



    return 0;
}