# ft_printf

The goal of this project is to create your own implementation of the C standard library function printf(). printf() is used to print formatted output to the console, and is a very important function in many C programs.

# How to use the function

The ft_printf() function works much like the standard printf() function, but has a few differences. To use it, you will need to include the ft_printf.h header file in your program, and call the ft_printf() function in place of printf().

#include "ft_printf.h"

```
int main()
{
    ft_printf("Hello, %s!\n", "world");
    return 0;
}
```

The ft_printf() function takes a format string as its first argument, followed by any number of additional arguments. The format string is a string literal that contains placeholders for the values of the additional arguments. These placeholders start with a percent sign (%) and are followed by a conversion specifier that indicates the type of value that will be passed.

For example, the %s conversion specifier is used for strings, %d is used for integers, and %f is used for floating point numbers.
List of conversion specifiers

The ft_printf() function supports a wide variety of conversion specifiers, including:

* %c: Character
* %s: String
* %d, %i: Signed decimal integer
* %u: Unsigned decimal integer
* %x, %X: Unsigned hexadecimal integer
* %o: Unsigned octal integer
* %f, %e, %g: Floating point number
* %p: Pointer address
* %%: Percent sign

In addition to these conversion specifiers, there are also several flags and modifiers that can be used to control the formatting of the output.

# What I learned

My first serious project, ft_printf, was one I truly enjoyed working on. Because you can always compare it to the actual function output, it was simple and evident what to do.