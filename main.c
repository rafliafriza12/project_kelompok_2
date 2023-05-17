#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


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



void registrasi(signUp regis){
FILE *fp ;
fp = fopen("./database/login.bin","ab");

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





int login(regist login2[],int size,char * username,char * password){
    int result;
    FILE * bin;
    bin = fopen("./database/login.bin","rb");
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

void system_clear(){

#if defined(_WIN32) || defined(_WIN64)
    system("cls");  // Perintah untuk membersihkan layar pada Windows
#else
    system("clear");  // Perintah untuk membersihkan layar pada Unix/Linux
#endif

}

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
