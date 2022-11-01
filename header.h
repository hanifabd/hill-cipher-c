#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


char pesan[100];
char hasilENK[100];
int angkapesan[100];
int angkaENKpesan[100];
char key[4];
int angkakey[4];

int nbChar(char pesan[100]);
void WtoN(char asal[100], int hasil[100]);
void NtoW(int angkaENKpesan[100], char hasilENK[100]);

void enkripsi(char pesan[100]);

void printKalimat(char kalimat[100]);
void printAngka(char kalimat[100], int angka[100]);

#endif // HEADER_H_INCLUDED
