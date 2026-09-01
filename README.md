*This project has been created as part of the 42 curriculum by mutalay.*

# ft_printf

## Description

The **ft_printf** project requires recoding the standard C library function `printf()`. The main objective of this project is to understand and implement variadic functions in C using `<stdarg.h>`.

The library `libftprintf.a` manages the following conversion specifiers:

* `%c` - Prints a single character.
* `%s` - Prints a string.
* `%p` - Prints a `void *` pointer argument in hexadecimal format.
* `%d` - Prints a decimal (base 10) number.
* `%i` - Prints an integer in base 10.
* `%u` - Prints an unsigned decimal (base 10) number.
* `%x` - Prints a number in lowercase hexadecimal (base 16) format.
* `%X` - Prints a number in uppercase hexadecimal (base 16) format.
* `%%` - Prints a percent sign.

---

## Algorithm and Data Structure

### Algorithm

The function iterates through the input string character by character:
1. Standard characters are written directly to the standard output using `write()`, incrementing the total character counter.
2. When a `%` symbol is encountered, the algorithm evaluates the subsequent character to determine the conversion specifier.
3. The corresponding argument is extracted from the `va_list` structure using `va_arg` and passed to a specific handler function (e.g., base conversion, string output, pointer formatting).
4. The total number of printed bytes is aggregated and returned at the end of execution.

### Data Structure

* **`va_list`**: The standard C variadic list structure provided by `<stdarg.h>` is used to hold and access arguments sequentially via `va_start`, `va_arg`, and `va_end`.

* Primitive data types (`int`, `unsigned int`, `uintptr_t`, `char *`) are passed to low-level conversion and helper functions.

---

## Instructions

### Compilation

The project includes a `Makefile` with the required flags (`-Wall -Wextra -Werror`).

To compile the library `libftprintf.a`:

make

Other available rules:

* `make clean` - Removes object files (`.o`).
* `make fclean` - Removes object files and `libftprintf.a`.
* `make re` - Recompiles the entire project.

### Usage

Include the header file in your C code and link the compiled library during compilation:

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s! Number: %d\n", "world", 42);
    return (0);
}

```
Compile your program with `libftprintf.a`:

```bash
cc main.c -L. -lftprintf -o test_program

```
---

## Resources

* **Documentation:**
* `man 3 printf`
* `man 3 stdarg`
* C Library Manuals (`va_start`, `va_arg`, `va_end`)
* https://www.geeksforgeeks.org/c/variadic-functions-in-c/

* **AI Usage:**
* **Tasks:** Used AI for formatting and generating this README.md structure to match 42 requirements.
* **Scope:** AI was utilized solely for documentation design and understanding subject guidelines, without generating core C logic or variadic handling code.