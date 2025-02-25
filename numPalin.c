#include <stdio.h>

int invNum(int numero){
    int original = numero;
    int invertido = 0;
    int digito;
    while(numero > 0){
        digito = numero % 10;
        invertido = (invertido * 10) + digito;
        numero /= 10;
    }
    if(original == invertido){
        printf("ES PALINDROMO YA QUE SE LEE DE LA MISMA MANERA DE DERECHA A IZQUIERDA\n");
    }
    else{
        printf("NO ES PALINDROMO YA QUE SE LEE DE LA MISMA MANERA DE DERECHA A IZQUIERDA\n");
    }
}

int main(){
    int num;}
    printf("INGRESA UN NUMERO: ");
    scanf("%f", &num);
    invNum(num);

    return 0;
}