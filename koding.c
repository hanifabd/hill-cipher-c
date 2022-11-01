#include "header.h"

int nbChar(char pesan[])
{
    int len;
    len = strlen(pesan);
    return len;
}

void WtoN(char pesan[], int enkrip[])
{
    int jml = nbChar(pesan);
    int i;
    for(i=0 ; i<jml ; i++)
    {
        if(pesan[i] == 'A' || pesan[i] == 'a')
        {
            enkrip[i] = 1;
        }
        else if(pesan[i] == 'B' || pesan[i] == 'b')
        {
            enkrip[i] = 2;
        }
        else if(pesan[i] == 'C' || pesan[i] == 'c')
        {
            enkrip[i] = 3;
        }
        else if(pesan[i] == 'D' || pesan[i] == 'd')
        {
            enkrip[i] = 4;
        }
        else if(pesan[i] == 'E' || pesan[i] == 'e')
        {
            enkrip[i] = 5;
        }
        else if(pesan[i] == 'F' || pesan[i] == 'f')
        {
            enkrip[i] = 6;
        }
        else if(pesan[i] == 'G' || pesan[i] == 'g')
        {
            enkrip[i] = 7;
        }
        else if(pesan[i] == 'H' || pesan[i] == 'h')
        {
            enkrip[i] = 8;
        }
        else if(pesan[i] == 'I' || pesan[i] == 'i')
        {
            enkrip[i] = 9;
        }
        else if(pesan[i] == 'J' || pesan[i] == 'j')
        {
            enkrip[i] = 10;
        }
        else if(pesan[i] == 'K' || pesan[i] == 'k')
        {
            enkrip[i] = 11;
        }
        else if(pesan[i] == 'L' || pesan[i] == 'l')
        {
            enkrip[i] = 12;
        }
        else if(pesan[i] == 'M' || pesan[i] == 'm')
        {
            enkrip[i] = 13;
        }
        else if(pesan[i] == 'N' || pesan[i] == 'n')
        {
            enkrip[i] = 14;
        }
        else if(pesan[i] == 'O' || pesan[i] == 'o')
        {
            enkrip[i] = 15;
        }
        else if(pesan[i] == 'P' || pesan[i] == 'p')
        {
            enkrip[i] = 16;
        }
        else if(pesan[i] == 'Q' || pesan[i] == 'q')
        {
            enkrip[i] = 17;
        }
        else if(pesan[i] == 'R' || pesan[i] == 'r')
        {
            enkrip[i] = 18;
        }
        else if(pesan[i] == 'S' || pesan[i] == 's')
        {
            enkrip[i] = 19;
        }
        else if(pesan[i] == 'T' || pesan[i] == 't')
        {
            enkrip[i] = 20;
        }
        else if(pesan[i] == 'U' || pesan[i] == 'u')
        {
            enkrip[i] = 21;
        }
        else if(pesan[i] == 'V' || pesan[i] == 'v')
        {
            enkrip[i] = 22;
        }
        else if(pesan[i] == 'W' || pesan[i] == 'w')
        {
            enkrip[i] = 23;
        }
        else if(pesan[i] == 'X' || pesan[i] == 'x')
        {
            enkrip[i] = 24;
        }
        else if(pesan[i] == 'Y' || pesan[i] == 'y')
        {
            enkrip[i] = 25;
        }
        else if(pesan[i] == 'Z' || pesan[i] == 'z')
        {
            enkrip[i] = 26;
        }
        else if(pesan[i] == ' ')
        {
            enkrip[i] = 27;
        }
    }
}

void NtoW(int angkaENKpesan[], char hasilENK[])
{
    int jml = nbChar(pesan);
    int i;
    for(i=0 ; i<jml ; i++)
    {
        if(angkaENKpesan[i] == 1)
        {
            hasilENK[i] = 'A';
        }
        else if(angkaENKpesan[i] == 2)
        {
            hasilENK[i] = 'B';
        }
        else if(angkaENKpesan[i] == 3)
        {
            hasilENK[i] = 'C';
        }
        else if(angkaENKpesan[i] == 4)
        {
            hasilENK[i] = 'D';
        }
        else if(angkaENKpesan[i] == 5)
        {
            hasilENK[i] = 'E';
        }
        else if(angkaENKpesan[i] == 6)
        {
            hasilENK[i] = 'F';
        }
        else if(angkaENKpesan[i] == 7)
        {
            hasilENK[i] = 'G';
        }
        else if(angkaENKpesan[i] == 8)
        {
            hasilENK[i] = 'H';
        }
        else if(angkaENKpesan[i] == 9)
        {
            hasilENK[i] = 'I';
        }
        else if(angkaENKpesan[i] == 10)
        {
            hasilENK[i] = 'J';
        }
        else if(angkaENKpesan[i] == 11)
        {
            hasilENK[i] = 'K';
        }
        else if(angkaENKpesan[i] == 12)
        {
            hasilENK[i] = 'L';
        }
        else if(angkaENKpesan[i] == 13)
        {
            hasilENK[i] = 'M';
        }
        else if(angkaENKpesan[i] == 14)
        {
            hasilENK[i] = 'N';
        }
        else if(angkaENKpesan[i] == 15)
        {
            hasilENK[i] = 'O';
        }
        else if(angkaENKpesan[i] == 16)
        {
            hasilENK[i] = 'P';
        }
        else if(angkaENKpesan[i] == 17)
        {
            hasilENK[i] = 'Q';
        }
        else if(angkaENKpesan[i] == 18)
        {
            hasilENK[i] = 'R';
        }
        else if(angkaENKpesan[i] == 19)
        {
            hasilENK[i] = 'S';
        }
        else if(angkaENKpesan[i] == 20)
        {
            hasilENK[i] = 'T';
        }
        else if(angkaENKpesan[i] == 21)
        {
            hasilENK[i] = 'U';
        }
        else if(angkaENKpesan[i] == 22)
        {
            hasilENK[i] = 'V';
        }
        else if(angkaENKpesan[i] == 23)
        {
            hasilENK[i] = 'W';
        }
        else if(angkaENKpesan[i] == 24)
        {
            hasilENK[i] = 'X';
        }
        else if(angkaENKpesan[i] == 25)
        {
            hasilENK[i] = 'Y';
        }
        else if(angkaENKpesan[i] == 26)
        {
            hasilENK[i] = 'Z';
        }
        else if(angkaENKpesan[i] == 27)
        {
            hasilENK[i] = ' ';
        }
    }
}

void enkripsi(char pesan[100])
{
    int i;

    /// KUNCI
    char key[] = "AMAN";
    int nbkey = nbChar(key);
    WtoN(key, angkakey);

    ///PESAN
    int nbpesan = nbChar(pesan); /// BERAPA JUMLAH KARAKTER DALAM PESAN
    puts("");

    printf("\t\t");
    printf("PESAN \t\t: ");printKalimat(pesan); /// MENCETAK PESAN
    puts("");

    WtoN(pesan, angkapesan); /// MERUBAH PESAN MENJADI ANGKA

    ///-------------------------MULAI ENKRIPSI DENGAN METODE PERKALIAN MATRIK--------------------------------------
    int angkaENKpsn [100];
    for(i=0 ; i<nbpesan ; i++)
    {
        angkaENKpsn[i] = angkapesan[i];
    }
    for(i=0 ; i<nbpesan ; i++)
    {
        if(i%2 == 0)
        {
            angkaENKpsn[i] = (angkapesan[i]*angkakey[0]) + (angkapesan[i+1]*angkakey[2]);
        }
        else if(i%2 != 0)
        {
            angkaENKpsn[i] = (angkapesan[i-1]*angkakey[1]) + (angkapesan[i]*angkakey[3]);
        }
    }
    ///------------------------------------------------------------------------------------------------------------

    ///PROSES MODULO 27
    for(i=0 ; i<nbpesan ; i++)
    {
        angkaENKpsn[i] = angkaENKpsn[i]%27;
    }
    ///HASIL DARI ENKRIPSI PESAN
    printf("\t\t");
    printf("HASIL ENKRIPSI \t: ");
    NtoW(angkaENKpsn, hasilENK);
    for(i=0 ; i<nbpesan ; i++)
    {
        printf("%c", hasilENK[i]);
    }
    puts("");
    puts("");

    /// DEKRIPSI PESAN
    ///HASIL DARI ENKRIPSI PESAN
    printf("\t\t");


    char tampung[2];
    tampung[0] = pesan[0];
    tampung[1] = pesan[1];
    pesan[0]=pesan[nbpesan-2];
    pesan[1]=pesan[nbpesan-1];
    pesan[nbpesan-2]=tampung[0];
    pesan[nbpesan-1]=tampung[1];
    printf("HASIL DEKRIPSI \t: ");
    NtoW(angkapesan, hasilENK);
    for(i=0 ; i<nbpesan ; i++)
    {
        printf("%c", pesan[i]);
    }
    puts("");
    puts("");

}

void printKalimat(char kalimat[100])
{
    int i;
    int nbkalimat = nbChar(kalimat);
    for(i=0 ; i<nbkalimat ; i++)
    {
        printf("%c", kalimat[i]);
    }
}

void printAngka(char kalimat[100], int angka[100])
{
    int i;
    int nbkalimat = nbChar(kalimat);
    for(i=0 ; i<nbkalimat ; i++)
    {
        printf("%d ", angka[i]);
    }
}
