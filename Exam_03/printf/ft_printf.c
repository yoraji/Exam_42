#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int ft_putchar(char c) {
    return (write(1, &c, 1));
}

int ft_putstr(char *str) {
    int i = 0;
    while (str && str[i]) {
        write(1, &str[i], 1);
        i++;
    }
    return i;
}

int count_len(int num) {
    int result = 0;
    if (num == 0) return 1;
    while (num) {
        num /= 10;
        result++;
    }
    return result;
}

int ft_putnbr(int num) {
    int count = 0;
    if (num == -2147483648)
        return (ft_putstr("-2147483648"));
    if (num == 0)
        return (ft_putchar('0'));
    if (num < 0) {
        count += ft_putchar('-');
        num = -num;
    }
    int size = count_len(num);
    char *str = malloc(size + 1);
    if (!str) return 0;
    str[size] = '\0';
    while (size--) {
        str[size] = (num % 10) + '0';
        num /= 10;
    }
    count += ft_putstr(str);
    free(str);
    return count;
}

int ft_pointer(void *ptr) {
    unsigned long num = (unsigned long)ptr;
    int count = 0;
    char base[] = "0123456789abcdef";
    char buffer[17];
    int i = 0;

    if (!ptr)
        return (ft_putstr("(nil)"));

    count += ft_putstr("0x");
    if (num == 0)
        return (ft_putchar('0'));

    while (num) {
        buffer[i++] = base[num % 16];
        num /= 16;
    }

    while (i--)
        count += ft_putchar(buffer[i]);

    return count;
}

int ft_unsigned(unsigned int num) {
    int count = 0;
    char buffer[11]; 
    int i = 0;

    if (num == 0)
        return (ft_putchar('0'));

    while (num) {
        buffer[i++] = (num % 10) + '0';
        num /= 10;
    }

    while (i--)
        count += ft_putchar(buffer[i]);

    return count;
}

int ft_hexadecimal(unsigned int num, char specifier) {
    char *base = (specifier == 'x') ? "0123456789abcdef" : "0123456789ABCDEF";
    char buffer[9]; 
    int i = 0, count = 0;
    if (num == 0)
        return (ft_putchar('0'));

    while (num) {
        buffer[i++] = base[num % 16];
        num /= 16;
    }

    while (i--)
        count += ft_putchar(buffer[i]);

    return count;
}

int ft_operation(char c, va_list args) {
    int result = 0;

    if (c == 'p')
        result += ft_pointer(va_arg(args, void *));
    else if (c == 'c')
        result += ft_putchar(va_arg(args, int));
    else if (c == 's')
        result += ft_putstr(va_arg(args, char *));
    else if (c == 'd' || c == 'i')
        result += ft_putnbr(va_arg(args, int));
    else if (c == 'u')
        result += ft_unsigned(va_arg(args, unsigned int));
    else if (c == 'x' || c == 'X')
        result += ft_hexadecimal(va_arg(args, unsigned int), c);
    else if (c == '%')
        result += ft_putchar('%');

    return result;
}

int ft_printf(const char *format, ...) {
    va_list args;
    int result = 0;
    int i = 0;

    va_start(args, format);

    while (format[i]) {
        if (format[i] == '%' && format[i + 1]) {
            i++;
            result += ft_operation(format[i], args);
        } else {
            result += ft_putchar(format[i]);
        }
        i++;
    }

    va_end(args);
    return result;
}

int main()
{
	ft_printf("hello_friend %i %s %p %u",1337, "future_is_loading", 47, 2000);
}
