#include <stdio.h>

void print_space(int counter, int size);

void print_block(int counter);

int main()
{
    int i, size;

    printf("What is the size of your pyramid: ");
    scanf("%d",&size);

    for (i = 1; i <= size; i++)
    {
        print_space(i, size);

        print_block(i);

        printf(" ");

        print_block(i);

        printf("\n");
    }

    return 0;
}

void print_space(int counter, int size)
{
    do
    {
        printf(" ");
        counter++;
    } while (counter <= size);
}

void print_block(int counter)
{
    do
    {
        printf("#");
        counter--;
    } while (counter != 0);
}