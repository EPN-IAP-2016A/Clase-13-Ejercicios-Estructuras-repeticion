/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: chalosalvador
 *
 * Created on July 12, 2016, 7:33 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int i, n;
    
    printf("Ingrese un valor: ");
    scanf("%d", &n);
    
    i = 0;
    
    while( i < n ){
        printf("%d\n", i);
        i++;
    }
    
    return (EXIT_SUCCESS);
}

