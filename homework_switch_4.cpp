#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int day;
    
    printf("Введите день недели ");
    scanf("%i",&day);
    
    switch(day)
    {
        case 1:
        {
            printf("Понедельник");
        }
        break;
    
        case 2:
        {
            printf("Вторник");
        }
        break;

        case 3:
        {
            printf("Среда");
        }
        break;
   
        case 4:
        {
            printf("Четверг");
        }
        break;
    
        case 5:
        {
            printf("Пятница");
        }
        break;
    
        case 6:
        {
            printf("Суббота");
        }
        break;
   
        case 7:
        {
            printf("Воскресенье");
        }
        break;
        
        default:
        {
            printf("Ошибка, такой день недели не найден!");
        }
    }
}
