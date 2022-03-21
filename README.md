# FT_PRINTF Project
FT_PRINTF is a 42 Project that aims to mimic libc printf function

## Mandatory part
You have to recode the printf() function from libc. <br>
The prototype of ft_printf() is:
```bash
int ft_printf(const char *, ...);
```

Here are the requirements:
* Don’t implement the buffer management of the original printf().
* Your function has to handle the following conversions: cspdiuxX%
* Your function will be compared against the original printf().
* You must use the command ar to create your library. Using the libtool command is forbidden.
* Your libftprintf.a has to be created at the root of your repository.

Implemention of the following conversions:
* %c Prints a single character.
* %s Prints a string (as defined by the common C convention).
* %p The void * pointer argument has to be printed in hexadecimal format.
* %d Prints a decimal (base 10) number.
* %i Prints an integer in base 10.
* %u Prints an unsigned decimal (base 10) number.
* %x Prints a number in hexadecimal (base 16) lowercase format.
* %X Prints a number in hexadecimal (base 16) uppercase format.
* %% Prints a percent sign.
