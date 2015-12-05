#include <stdio.h>
#include <conio.h>
  
void to_base_n(unsigned long, unsigned int);
  
int main(void)
{
    unsigned long number;
    unsigned int base;
    printf("Enter an integer and the base(q to quit):n");
    while( scanf("%lu%u", &number, &base) == 2 )
    {
        printf("%lu's base %u equivalent:", number, base);
        to_base_n(number, base);
        putchar('n');
        printf("Enter an interger(q to quit):n");
    }
    printf("Done.n");
  
    getch();
    return 0;
}
  
void to_base_n(unsigned long n, unsigned int base)  //*recursive function
{
    int i;
    i = n % base;
  
    if(n >= base)
    {
        to_base_n(n/base, base);
    }
  
    putchar('0' + i);
    //printf("%d", i);
    return ;
}

