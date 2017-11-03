/*
 * File:   main.c
 * Author: Admin
 *
 * Created on 2017?11?3?, ??3:34
 */


#include <xc.h>

void main(void) 
{
    while(1)
    {
        CLRWDT();
        LATAbits.LATA0 = 1;
        LATAbits.LATA1 = 1;
    }
    return;
}
