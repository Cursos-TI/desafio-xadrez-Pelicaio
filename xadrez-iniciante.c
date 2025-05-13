#include <stdio.h>


int main(){
    //Movimento da Rainha com DO WHILE
    int i = 0;
    do{
        printf("Esquerda\n", i);
        i++;
    } while(i <= 7);

    //Movimento da Torre com FOR
    for(int z = 0; z < 5; z++){
        printf("Direita\n");
    }
    //Movimento do Bispo com WHILE
    int x = 0;
    while(x < 5){
        printf("Cima,Direita\n");
        x++;

    }
    return 0;

    

    
}