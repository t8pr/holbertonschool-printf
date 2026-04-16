# Custom Printf Project

## Description
This is a custom implementation of the `printf` function in C, created as part of the software engineering curriculum. The function `_printf` produces output according to a format and writes it to the standard output stream.

## Requirements
* All files are compiled on Ubuntu 20.04 LTS.
* Allowed editors: `vi`, `vim`, `emacs`.
* All C files follow the Betty style guidelines.
* No global variables are used.
* The prototypes of all functions are included in the `main.h` header file.

## Supported Features
Currently, `_printf` handles the following conversion specifiers:
* `%c`: Characters
* `%s`: Strings
* `%%`: Percent signs
* `%d`: Signed decimal integers
* `%i`: Signed decimal integers

## Installation
Clone the repository to your local machine:
```bash
git clone https://github.com/your-username/holbertonschool-printf.git
cd holbertonschool-printf
```

## Examples
Include the header file `main.h` in your main C file to use the `_printf` function:
```c
#include "main.h"

int main(void)
{
    _printf("Character: %c\n", 'H');
    _printf("String: %s\n", "Hello, Holberton!");
    _printf("Number: %d\n", 2026);
    _printf("Percent sign: %%\n");
    return (0);
}
```

## Testing
To test the program, compile all `.c` files using the following command:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o my_printf
```
Then, run the compiled executable:
```bash
./my_printf
```

## Files
* `_printf.c`: The main function logic.
* `main.h`: The header file with all prototypes.
* `utils.c`: Helper functions for printing strings and characters.
* `print_number.c`: Helper function for printing integers and handling negative numbers.
* `man_3_printf`: Manual page for the custom `_printf` function.

## Authors
Created by: Osama Alhamdan, Aseel Alzhrani
