#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

void registrasi(signUp regis){
FILE *fp ;
fp = fopen("./Database/login.bin","ab");

if(fp== NULL){
    printf("Error opening file\n");
    exit(1);
}

printf("\nSilahkan Registrasi Terlebih dahulu\n\n");

printf("buat username : ");
scanf("%s",regis.username);

printf("buat password : ");
scanf(" %s",regis.password);

fwrite(regis.username,sizeof(regis.username),1,fp);
fwrite(regis.password,sizeof(regis.password),1,fp);

printf("\nTerima kasih\nAnda Sudah Berhasil Registrasi\n");
printf("Silahkan Login Menggunakan CLA : main username password\n");

fclose(fp);
}
