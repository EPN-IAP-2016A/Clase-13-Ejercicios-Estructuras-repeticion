/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: chalosalvador
 *
 * Created on July 12, 2016, 8:21 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    int n;
    int esPrimo = 1;
    
    printf("Ingrese un numero: ");
    scanf("%d", &n);
    
    if( n == 1){
        esPrimo = 0;
    } else {
        for(int i = 2; i <= n / 2; i++){
            if( n % i == 0){
                esPrimo = 0;
                break;
            }
        }
    }
    
    if(esPrimo){
        printf("%d es primo", n);
    } else {
        printf("%d NO es primo", n);
    }
    
    return (EXIT_SUCCESS);
}

