#include "main.h"

/**
 * main - The main function of the program
 * 
 * Return: Always returns 0.
 */
int main(void)
{
    _printf("Let's try to printf a simple sentence.\n");
    _printf("String:[%s]\n", "I am a string !");
    _printf("Percent:[%%]\n");
    _printf("Unknown:[%r]\n");
    _printf("Int:[%i]\n", 24);

    return (0);
}