#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

int countSizeBinary(int size,regist login1){
    FILE * bin;
    bin = fopen("./assets/login.bin","rb");
    if(bin==NULL){
        printf("Tidak Bisa Membuka FIle");
        exit(1);
    }

    fseek(bin,0,SEEK_END);
    long int ukuran = ftell(bin);
    rewind(bin);

    size = ukuran/sizeof(login1);

    fclose(bin);

    return (size);
}