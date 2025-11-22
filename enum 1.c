#include<stdio.h>
enum week {
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday,
};
int main ()
{
    enum week today ;
    today=Tuesday;
    printf("today is=%d\n", today);
}