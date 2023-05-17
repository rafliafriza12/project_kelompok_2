#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "header.h"

void game()
{
    char * jawab;
    char check[10];
    int skor = 0;

    jawab = malloc(1*sizeof(char));
    printf("\nPertanyaan Pertama (skor 10)\n");
    printf("Dimana Letak Lukisan Mona Lisa\n");
    printf("[A] Indonesia\n");
    printf("[B] Maroko\n");
    printf("[C] Prancis\n");
    printf("[D] Italia\n");
    printf("Jawaban anda => ");
    scanf(" %c",&jawab[0]);
    jawab[0] = tolower(jawab[0]);
    if (jawab[0] == 'c')
    {
        skor += 10;
        printf("\nSelamat Jawaban Anda Benar\n");
        printf("Point anda sekarang sebesar %d Point\n\n", skor);
    }
    else
    {
        printf("\nJawaban anda salah\n");
        printf("Terima kasih telah bermain\nJangan menyerah, cobalah dilain waktu :))\n");
        exit(1);
    }


    checkLanjut(check,skor);
    free(jawab);

    jawab = malloc(1*sizeof(char));

    printf("\nPertanyaan Kedua (skor 50)\n");
    printf("Jumlah Provinsi Di Indonesia Saat Ini\n");
    printf("[A] 38\n");
    printf("[B] 42\n");
    printf("[C] 27\n");
    printf("[D] 33\n");
    printf("Jawaban anda => ");
    scanf(" %c", &jawab[0]);
    jawab[0] = tolower(jawab[0]);
    if (jawab[0]== 'a')
    {
        skor += 50;
        printf("\nSelamat Jawaban Anda Benar\n");
        printf("Point anda sekarang sebesar %d Point\n\n", skor);
    }
    else
    {
        printf("\nJawaban anda salah\n");
        printf("Terima kasih telah bermain\n Jangan menyerah, cobalah dilain waktu :))\n");
        exit(1);
    }

    checkLanjut(check,skor);
    free(jawab);

    jawab = malloc(1*sizeof(char));

    printf("\nPertanyaan Ketiga (skor 100)\n");
    printf("Negara Dengan Penduduk Terbanyak di Dunia\n");
    printf("[A] Singapura\n");
    printf("[B] Rusia\n");
    printf("[C] Amerika\n");
    printf("[D] China\n");
    printf("Jawaban anda => ");
    scanf(" %c", &jawab[0]);
    jawab[0] = tolower(jawab[0]);
    if (jawab[0]== 'd')
    {
        skor += 100;
        printf("\nSelamat Jawaban Anda Benar\n");
        printf("Point anda sekarang sebesar %d Point\n\n", skor);
    }
    else
    {
        printf("\nJawaban anda salah\n");
        printf("Terima kasih telah bermain\n Jangan menyerah, cobalah dilain waktu :))\n");
        exit(1);
    }

    checkLanjut(check,skor);
    free(jawab);

    jawab = malloc(1*sizeof(char));

    printf("\nPertanyaan Keempat (skor 150)\n");
    printf("Pemenang Piala Dunia tahun 1950\n");
    printf("[A] Brasil\n");
    printf("[B] Italia\n");
    printf("[C] Uruguay\n");
    printf("[D] Jerman\n");
    printf("Jawaban anda => ");
    scanf(" %c",&jawab[0]);
    jawab[0] = tolower(jawab[0]);
    if (jawab[0] == 'c')
    {
        skor += 150;
        printf("\nSelamat Jawaban Anda Benar\n");
        printf("Point anda sekarang sebesar %d Point\n\n", skor);
    }
    else
    {
        printf("\nJawaban anda salah\n");
        printf("Terima kasih telah bermain\n Jangan menyerah, cobalah dilain waktu :))\n");
        exit(1);
    }


    checkLanjut(check,skor);
    free(jawab);

    jawab = malloc(1*sizeof(char));

    printf("\nPertanyaan Kelima (skor 200)\n");
    printf("Siapakah Penulis Drama \"Romeo && Juliet\'\n");
    printf("[A] William Shakespeare\n");
    printf("[B] Oscar Wilde\n");
    printf("[C] George Bernard Show\n");
    printf("[D] Tennese Williams\n");
    printf("Jawaban anda => ");
    scanf(" %c",&jawab[0]);
    jawab[0] = tolower(jawab[0]);
    if (jawab[0] == 'a')
    {
        skor += 200;
        printf("\nSelamat Jawaban Anda Benar\n");
        printf("Point anda sekarang sebesar %d Point\n\n", skor);
    }
    else
    {
        printf("\nJawaban anda salah\n");
        printf("Terima kasih telah bermain\n Jangan menyerah, cobalah dilain waktu :))\n");
        exit(1);
    }


    checkLanjut(check,skor);
    free(jawab);

    jawab = malloc(1*sizeof(char));

    printf("\nPertanyaan Keenam (skor 250)\n");
    printf("Negara yang membagi perbatasan dengan Nepal untuk memiliki Gunung Everest\n");
    printf("[A] Tibet\n");
    printf("[B] India\n");
    printf("[C] Bhutan\n");
    printf("[D] Bangladesh\n");
    printf("Jawaban anda => ");
    scanf(" %c",&jawab[0]);
    jawab[0] = tolower(jawab[0]);
    if (jawab[0] == 'b')
    {
        skor += 250;
        printf("\nSelamat Jawaban Anda Benar\n");
        printf("Point anda sekarang sebesar %d Point\n\n", skor);
    }
    else
    {
        printf("\nJawaban anda salah\n");
        printf("Terima kasih telah bermain\n Jangan menyerah, cobalah dilain waktu :))\n");
        exit(1);
    }


    checkLanjut(check,skor);
    free(jawab);

    jawab = malloc(1*sizeof(char));

    printf("\nPertanyaan Ketujuh (skor 300)\n");
    printf("Orang terkaya kedua di dunia menurut Forbes 2023\n");
    printf("[A] Bill Gates\n");
    printf("[B] Elon Musk\n");
    printf("[C] Jeff Bezos\n");
    printf("[D] Warren Buffett\n");
    printf("Jawaban anda => ");
    scanf(" %c",&jawab[0]);
    jawab[0] = tolower(jawab[0]);
    if (jawab[0] == 'b')
    {
        skor += 300;
        printf("\nSelamat Jawaban Anda Benar\n");
        printf("Point anda sekarang sebesar %d Point\n\n", skor);
    }
    else
    {
        printf("\nJawaban anda salah\n");
        printf("Terima kasih telah bermain\n Jangan menyerah, cobalah dilain waktu :))\n");
        exit(1);
    }


    checkLanjut(check,skor);
    free(jawab);

    jawab = malloc(1*sizeof(char));

    printf("\nPertanyaan Kedelepan (skor 350)\n");
    printf("\"La Tomatina\" festival yang melibatkan pelemparan tomat massal, diadakan setiap tahun di kota\n");
    printf("[A] Seville\n");
    printf("[B] Madrid\n");
    printf("[C] Barcelona\n");
    printf("[D] Valencia\n");
    printf("Jawaban anda => ");
    scanf(" %c",&jawab[0]);
    jawab[0] = tolower(jawab[0]);
    if (jawab[0] == 'd')
    {
        skor += 350;
        printf("\nSelamat Jawaban Anda Benar\n");
        printf("Point anda sekarang sebesar %d Point\n\n", skor);
    }
    else
    {
        printf("\nJawaban anda salah\n");
        printf("Terima kasih telah bermain\n Jangan menyerah, cobalah dilain waktu :))\n");
        exit(1);
    }


    checkLanjut(check,skor);
    free(jawab);

    jawab = malloc(1*sizeof(char));

    printf("\nPertanyaan Kesembilan (skor 400\n");
    printf("Perang dunia II berawal pada tahun\n");
    printf("[A] 1939\n");
    printf("[B] 1945\n");
    printf("[C] 1938\n");
    printf("[D] 1940\n");
    printf("Jawaban anda => ");
    scanf(" %c",&jawab[0]);
    jawab[0] = tolower(jawab[0]);
    if (jawab[0] == 'a')
    {
        skor += 400;
        printf("\nSelamat Jawaban Anda Benar\n");
        printf("Point anda sekarang sebesar %d Point\n\n", skor);
    }
    else
    {
        printf("\nJawaban anda salah\n");
        printf("Terima kasih telah bermain\n Jangan menyerah, cobalah dilain waktu :))\n");
        exit(1);
    }


    checkLanjut(check,skor);
    free(jawab);

    jawab = malloc(1*sizeof(char));

    printf("\nPertanyaan Kesepuluh (skor 600)\n");
    printf("Pencipta bahasa pemrograman C adalah\n");
    printf("[A] James Gosling\n");
    printf("[B] Guido Van Rossum\n");
    printf("[C] Larry Wall\n");
    printf("[D] Dennis Ritchie\n");
    printf("Jawaban anda => ");
    scanf(" %c",&jawab[0]);
    jawab[0] = tolower(jawab[0]);
    if (jawab[0] == 'd')
    {
        skor += 600;
        printf("\nSelamat Jawaban Anda Benar\n");
        printf("Total point anda sekarang adalah %d Point\n\n", skor);
    }
    else
    {
        printf("\nJawaban anda salah\n");
        printf("Terima kasih telah bermain\n Jangan menyerah, cobalah dilain waktu :))\n");
        exit(1);
    }


    free(jawab);

    printf("Selamat Anda Telah Berhasil Memenangkan Game ini!!!\n");

}
