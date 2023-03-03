#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    long long int login;
    long long int password;
    
    printf("Введите логин ");
    scanf("%lli",&login);
    printf("Введите пароль ");
    scanf("%lli",&password);
    
    if ((login == 765432) && (password == 12345678)||(login == 567890) && (password == 87654321))
    {
        printf("Вход выполнен успешно!");
    }
    else
    {
        printf("Проверьте логин или пароль!");
    }
}
