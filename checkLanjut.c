#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "header.h"

void checkLanjut(char * check,int skor){
    printf("Apakah Anda Ingin Lanjut (lanjut/tidak) ? ");
    scanf("%s",check);
    for(int i=0;i<strlen(check);i++){
        check[i]=tolower(check[i]);
    }
    if(strcmp(check,"tidak")==0){
        printf("\nTerima Kasih Sudah Bermain\n");
        printf("Anda Mendapatkan Point Sebesar %d Point",skor);
        exit(1);
    }
    system_clear();
}
