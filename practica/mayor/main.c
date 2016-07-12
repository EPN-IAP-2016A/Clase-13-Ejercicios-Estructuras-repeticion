#include <stdio.h>

int main() {
    int n, mayor = 0;
    
    do{
        printf("Ingrese un valor: ");
        scanf("%d", &n);
        if (n > mayor) {
            mayor = n;
        }
    } while (n != 0);
        
    printf("EL mayor es: %d\n", mayor);
    return 0;
}