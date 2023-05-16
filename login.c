#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

int login(regist login2[],int size,char * username,char * password){
    int result;
    FILE * bin;
    bin = fopen("./assets/login.bin","rb");
    if(bin==NULL){
        printf("File Tidak Dapat Dibuka...\n");
    }

    for(int i = 0;i<size;i++){
        fread(login2[i].emial,sizeof(login2[i].emial),1,bin);
        fread(login2[i].password,sizeof(login2[i].password),1,bin);
    }

    for(int i = 0 ; i<size ;i++){
        if(strcmp(login2[i].emial,username)==0 && strcmp(login2[i].password,password)==0){
            result = 1;
        }
        else{
            result = 0;
        }
    }
    fclose(bin);
    return (result);
}