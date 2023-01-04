julien@ubuntu:~/0x08. Recursion cat 3-main.c)
{
    intr

    r = factorial(1)
    printf("%d\n", r)
    r = factorial(5)
    printf("%d\n", r)
    r = factorial(10)
    printf("%d\n", r)
    r = factorial(-1024)
    printf("%d\n", r)
    return (0)
}
julien@ubuntu:~/0x08. Recursion gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-factorial.c -o 3-factorial
julien@ubuntu:~/0x08. Recursion$ ./3-factorial 
1
120
3628800
-1
julien@ubuntu:~/0x08. Recursion
