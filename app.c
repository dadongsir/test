
#include "other1.h"
#include "other2.h"
#include <stdio.h>
void main(){
        int a=15,b=3,c;
        printf( "test in app\n" );
        welcome();
        c = add(a, b);
        printf( "%d - %d = %d\n", a, b, c );
        c = sub(a, b);
        printf( "%d - %d = %d\n", a, b, c );
}
