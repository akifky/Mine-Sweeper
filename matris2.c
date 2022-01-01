#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    /// Matrisi ve değişenkleri oluştur
    int y,x,sutun, satir, alan[10][10] = { 0 };

    /// Matrise rastgele X ata
    srand(time(NULL));

    for (int i = 0; i <= 10; ++i) {
        y = rand() % 11;
        x = rand() % 11;
        alan[y][x] = 'X';
    }

    /// Sayıların etrafını X için tara
    for (sutun = 0; sutun < 10; sutun++){

        for(satir = 0; satir < 10; satir++){
            if (alan[satir][sutun] == 'X' && alan[satir-1][sutun] != 'X'){     ///X'in sağı
                alan[satir-1][sutun] += 1;
            }
            if (alan[satir][sutun] == 'X' && alan[satir+1][sutun] != 'X') {    ///X'in solu
                alan[satir+1][sutun] += 1;
            }
            if (alan[satir][sutun] == 'X' && alan[satir][sutun-1] != 'X') {    ///X'in üstü
                alan[satir][sutun-1] += 1;
            }
            if (alan[satir][sutun] == 'X' && alan[satir][sutun+1] != 'X') {    ///X'in altı
                alan[satir][sutun+1] += 1;
            }
            if (alan[satir][sutun] == 'X' && alan[satir+1][sutun+1] != 'X') {    ///X'in sağ altı
                alan[satir+1][sutun+1] += 1;
            }
            if (alan[satir][sutun] == 'X' && alan[satir-1][sutun+1] != 'X') {    ///X'in sağ üstü
                alan[satir-1][sutun+1] += 1;
            }
            if (alan[satir][sutun] == 'X' && alan[satir-1][sutun-1] != 'X') {    ///X'in sol üstü
                alan[satir-1][sutun-1] += 1;
            }
            if (alan[satir][sutun] == 'X' && alan[satir+1][sutun-1] != 'X') {    ///X'in sol altı
                alan[satir+1][sutun-1] += 1;
            }

        }
    }

    /// Matrisi yazdır
    for (sutun = 0; sutun < 10; sutun++){

        for(satir = 0; satir < 10; satir++){
                if('X' == alan[satir][sutun]){
                    printf("%c  ",alan[satir][sutun]); /// X'leri Char formatında yaz
                }
                else{
                    printf("%d  ",alan[satir][sutun]); ///Sayıları Int formatında yaz
                }
        }
        printf("\n");
    }

}
