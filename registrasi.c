#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

void registrasi(signUp regis){
FILE *fp ;
fp = fopen("./data/binaryfile.bin","ab");

if(fp== NULL){
    printf("Error opening file\n");
    exit(1);
}


printf("buat username : ");
scanf("%s",regis.username);

printf("buat password : ");
scanf(" %s",regis.password);

fwrite(regis.username,sizeof(regis.username),1,fp);
fwrite(regis.password,sizeof(regis.password),1,fp);
}