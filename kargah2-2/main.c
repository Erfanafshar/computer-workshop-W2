//#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Please enter two numbers separated by a single space.\n");
    int a,b;
    char c='1';
    while (c!=' '){
        scanf("%d%c%d",&a,&c,&b);
        if (c!=' ')
            printf ("Use single space between the numbers!\n");
    }
    //printf("%d",a+b);

    char x;
    printf("Enter a character:\n");
    scanf(" %c", &x);
    printf("%d\n", x);
    float x2;
    printf("Enter a decimal number:\n");
    scanf("%d", &x2);
    printf("%f\n", x2);
}
