#include<stdio.h>

int square(int a)
{
    return  a*a;
}

int main()
{
    int num;
    printf("Enter any integer number: ");
    scanf("%d",&num);

    int result = square(num);
    printf("square is: %d\n",result);

    getch();
}

