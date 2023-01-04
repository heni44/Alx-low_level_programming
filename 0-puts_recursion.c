void_putchar(int* nb)
{
    if (nb < 0) 
    {
        return;
    }
    _putchar("%d", nb);
    nb --;
    _putchar(nb);
}

int main(void)
{
    print(4);
    return (0);
}
