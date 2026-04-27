//C
#include <stdio.h>

int main() {

    printf ("Hello World\n") ;
    printf ("Este programa fue compilado con GCC version: %d.%d.%d\n", __GNUC__, __GNUC_MINOR__, __GNUC_PATCHLEVEL__) ;
    printf ("Con la version de C:%d", __STDC_VERSION__ ) ;

return 0 ; }