# _printf


Implement the C standard library's printf function. It returns the number of characters printed (excluding the null byte used to end output to strings) and writes output to stdout, the standard output stream.

It handles the following specifiers:
Supported formats:

| Type | Action                             |
|:----:|:----------------------------------:|
| %c   | prints character                   |
| %s   | prints string                      |
| %i   | prints integer                     |
| %d   | prints double                      |
| %u   | prints unsigned integer            |
| %b   | prints integer converted to binary |


| Function       | Description                                                                                      |
| -------------- |:-------------------------------------------------------------------------------------------------|
| \_printf       | a function that produces output according to a format.                                           |
| \_putchar.c    | prints a character to stdout.                                                                    |
| convert_b.c    | converts an integer to binary.                                                                   |
| get_b.c        | converts valist argument to integer argument.                                                    |
| get_length_i.c | gets the number of digits of an integer or double.                                               |
| get_num.c      | converts valist argument to an integer or double argument.                                       |
| get_u.c        | converts valist argument to an unsigned integer argument.                                        |
| holberton.h    | header file containing included libraries, header guard, and struct definition.                  |
| man_3_printf   | man page for \_printf.                                                                           |
| op_parse.c     | loops through array of struct to match conversion specifier and return correct function pointer. |
| print_b.c      | prints binary.                                                                                   |
| print_char.c   | prints character.                                                                                |
| print_int.c    | prints integer.                                                                                  |
| print_string.c | prints string.                                                                                   |
| print_u.c      | prints unsigned integer.                                                                         |

## Use
1. Clone repository.

2. In your file containing your main function:

    ```_printf("%c %s %i %s\n", 'A', "Holberton student works", 25, "hours a day.");```

3. Compile:

    ```gcc -Wall -Werror -Wextra -pedantic *.c ```

4. Output:

    A Holberton student works 25 hours a day.
    




**To report bugs or ask questions, please contact:**

Alex Mapatelian, *526@holbertonschool.com*

Kelly Hodis, *668@holbertonschool.com*
