julien@ubuntu:~/0x08. Recursion cat 4-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r

    r = _pow_recursion(1, 10)
    printf("%d\n", r)
    r = _pow_recursion(1024, 0)
    printf("%d\n", r);
    r = _pow_recursion(2, 16)
    printf("%d\n", r);
    r = _pow_recursion(5, 2)
    printf("%d\n", r);
    r = _pow_recursion(5, -2)
    printf("%d\n", r);
    r = _pow_recursion(-5, 3)
    printf("%d\n", r)
    return (0)
}
julien@ubuntu:~/0x08. Recursion gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-pow_recursion.c -o 4-pow
julien@ubuntu:~/0x08. Recursion ./4-pow 
1
1
65536
25
-1
-125
julien@ubuntu:~/0x08. Recursion
