#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "header.h"


typedef struct registrasi
{
    char emial[255];
    char password[255];
}regist;

typedef struct registration
{
    char username[255];
    char password[255];
}signUp;

void registrasi(signUp regis);
int countSizeBinary(int ,regist login);
int login(regist login1[],int ,char * username,char * password);
void game();
void  checkLanjut(char *,int );
void system_clear();


int main(int argc,char * argv[]){
    system_clear();
    int size=0;
    int result;    
    
    char username[255];
    char password[255];

    regist login1;
    signUp regis;

    size = countSizeBinary(size,login1);
    regist login2[size];

    int check;
    if(argc==1){
        do{
            printf("\nApakah Anda Sudah Pernah Registrasi ?\n\n");
            printf("[1] Belum Pernah\n");
            printf("[2] Sudah Pernah\n");
            printf("[3] Keluar\n");
            printf("Silahkan Pilih Terlebih Dahulu=> ");
            scanf("%d",&check);
            if(check==1){
                registrasi(regis);
                exit(1);
            }
            else if(check==2){
                printf("Silahkan Login Menggunakan CLA : main username password\n");
                exit(1);
            }
            else if(check==3){
                printf("\nTerima Kasih\n");
                exit(1);
            }
            else{
                printf("\n===============================\n");
                printf("Pilihlah angka 1 atau 2 saja!!!\n");
                printf("===============================\n\n");
            }

        }while(check<1 || check>3);
    }
    else if(argc==3){
        strcpy(username, argv[1]);
        strcpy(password, argv[2]);
        result = login(login2,size,username,password);   
    }

    if(result==1){
        printf("\nLogin Berhasil\n\n");
    }
    else if(result==0){
        printf("\nGagal Login\nEmail atau Password salah\n");
        printf("Gunakan format sebagai berikut : ");
        printf("main username password\n");
        exit(1);
    }
    char main[10];
    printf("\nApakah Anda Sudah Yakin Untuk Memainkan Game (ya/tidak) ? ");
    scanf("%s",main);
    for(int i=0;i<strlen(main);i++){
        main[i]=tolower(main[i]);
    }
    if(strcmp(main,"ya")==0){
        system_clear();
        game();
    }
    else if(strcmp(main,"tidak")==0){
        exit(1);
    }

    return 0;

}
