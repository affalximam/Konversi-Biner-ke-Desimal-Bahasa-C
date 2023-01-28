#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void clear(){
    // linux
    // system("clear");
    
    // windows
    system("cls");
}

int main(void){

    int biner, desimal = 0 , i = 1, digit;
    char ulang;

    top:
    clear();
    printf("\n-------------------------\n");
    printf("Konversi Biner ke Desimal\n");
    printf("By : AFFALXIMAM\n");
    printf("-------------------------\n\n");

    printf("Masukan angka biner : ");
    scanf(" %d", &biner);

    while (biner != 0)
    {
        digit = biner % 10;
        desimal = desimal + (digit*i);
        i = i * 2;
        biner = biner/10;
    }

    printf("Angka Desimal adalah : %d \n\n", desimal);

    cek:
    printf("Apakah ingin mengulang ? (y/t) : ");
    scanf(" %c", &ulang);
        if(ulang == 'y'){
            biner = 0;
            desimal = 0;
            i = 1;
            digit = 0;
            goto top;
        }
        if(ulang == 't'){
            printf("\nProgram Selesai");
        }
        else{
            goto cek;
        }
    return 0;

}