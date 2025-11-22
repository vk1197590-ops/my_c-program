#include<stdio.h>
enum level {
    low=5,
    medium=10,
    high=15,
};
int main ()
{
    enum level speed;
    speed=low;
    printf("speed is=%d", speed);
}