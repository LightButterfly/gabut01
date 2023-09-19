#include <stdio.h>

int main(){
    int HargaBarang = 0, Kredit6Bulan = 0, Tenor6Bulan = 0, Cicilan6Bulan = 0;
    int Kredit12Bulan = 0, Tenor12Bulan = 0, Cicilan12Bulan = 0;
    int Kredit18Bulan = 0, Tenor18Bulan = 0, Cicilan18Bulan = 0;
    char Loop = 'y';

    puts("===================================================");
    puts("                   Program Kredit                  ");
    puts("===================================================");

    while(Loop != 'n' && Loop != 'N'){
    printf("\nmasukkan harga barang: ");
    scanf("%d", &HargaBarang);

    //Kredit 6 Bulan
    Kredit6Bulan = 0.25 * HargaBarang;
    Tenor6Bulan = HargaBarang + Kredit6Bulan;

    printf("\nTenor 6 bulan: Rp.%d", Tenor6Bulan);
    Cicilan6Bulan = Tenor6Bulan / 6;
    printf("\nCicilan perbulannya: Rp.%d", Cicilan6Bulan);

    //Kredit 12 Bulan
    Kredit12Bulan = 0.35 * HargaBarang;
    Tenor12Bulan = HargaBarang + Kredit12Bulan;

    printf("\n\nTenor 12 bulan: Rp.%d", Tenor12Bulan);
    Cicilan12Bulan = Tenor12Bulan / 12;
    printf("\nCicilan perbulannya: Rp.%d", Cicilan12Bulan);

    //Kredit 18 Bulan
    Kredit18Bulan = 0.45 * HargaBarang;
    Tenor18Bulan = HargaBarang + Kredit18Bulan;

    printf("\n\nTenor 18 bulan: Rp.%d", Tenor18Bulan);
    Cicilan18Bulan = Tenor18Bulan / 18;
    printf("\nCicilan perbulannya: Rp.%d", Cicilan18Bulan);

    printf("\n\nKetik y untuk ngulang, ketik n untuk keluar dari program");
    scanf("%c", &Loop);
    while(Loop != 'y' && Loop != 'Y' && Loop != 'n' && Loop != 'N'){
    printf("\n");
    scanf("%c", &Loop);
    }
    }

    puts("\nTerima kasih");

    return 0;
}