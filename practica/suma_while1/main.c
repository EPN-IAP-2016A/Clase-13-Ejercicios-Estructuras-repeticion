/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: chalosalvador
 *
 * Created on July 12, 2016, 7:47 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    int n, suma = 0, i = 1;
    
    do{
        printf("Ingrese el valor %d: ", i);
        scanf("%d", &n);
        
        suma = suma + n;
        if( n != 0 )
            i = i + 1;
    }while( n != 0 );

    printf("Usted ingreso %d valores y la suma total es: %d\n", i, suma);  
    return (EXIT_SUCCESS);
}

