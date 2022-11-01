#include "header.h"

int main()
{
    puts("");
    puts("");
    puts("");
    puts("");
    printf("\t\t\t     *************************************************************\n");
    printf("\t\t\t     *************************************************************\n");
    printf("\t\t\t     ***    |--------------------------------------------|     ***\n");
    printf("\t\t\t     ***    |PROGRAM ENKRIPSI DENGAN METODE HILL CHIPPER |     ***\n");
    printf("\t\t\t     ***    |--------------------------------------------|     ***\n");
    printf("\t\t\t     ***    |            HANIF YULI ABDILLAH P           |     ***\n");
    printf("\t\t\t     ***    |               A11.2017.10105               |     ***\n");
    printf("\t\t\t     ***    |             TEKNIK INFORMATIKA             |     ***\n");
    printf("\t\t\t     ***    |           FAKULTAS ILMU KOMPUTER           |     ***\n");
    printf("\t\t\t     ***    |        UNIVERSITAS DIAN NUSWANTORO         |     ***\n");
    printf("\t\t\t     ***    |--------------------------------------------|     ***\n");
    printf("\t\t\t     *************************************************************\n");
    printf("\t\t\t     *************************************************************\n\n");
    system("pause");
    system("cls");
    puts("");
    puts("");
    puts("");
    printf("\t\t-----SILAHKAN MASUKAN PESAN YANG AKAN DI ENKRIPSI-----\n\n");
    printf("\t\tMASUKAN PESAN : \n\n\t\t\t");gets(pesan);
    puts("");
    system("pause");
    system("cls");

    printf("\n\n\t\t-----BERIKUT ADALAH HASIL DARI PESAN YANG DIENKRIPSI-----\n\n");
    enkripsi(pesan);

    system("pause");
    system("cls");

    return 0;
}
