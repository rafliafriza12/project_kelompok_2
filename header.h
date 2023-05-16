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
