
# ft_printf

---
## Overview

`ft_printf` is a project in the **42** curriculum focused on recreating the standard C `printf` function, which formats and prints data to the standard output. This project involves implementing a custom version of `printf` that supports various format specifiers and closely mimics the behavior of the original function.

## Features
The `ft_printf` function supports a subset of the format specifiers provided by the standard `printf`. This includes:

- **Conversion Specifiers**
  - **%c**: Prints a single character
  - **%s**: Prints a string of characters
  - **%p**: Prints a pointer address in hexadecimal format
  - **%d** and **%i**: Prints a signed decimal integer
  - **%u**: Prints an unsigned decimal integer
  - **%x**: Prints a number in lowercase hexadecimal
  - **%X**: Prints a number in uppercase hexadecimal
  - **%%**: Prints a literal percent sign

- **Handling Flags and Widths**  
  Basic support for field width and precision, enabling better control over output formatting.

- **Bonus (Optional)**  
  Optional functionality might include support for flags such as `-`, `0`, `.`, width, and precision, as specified by the project.

## Getting Started

### Prerequisites
To compile and use `ft_printf`, you need:
- A Unix-like operating system (Linux, macOS).
- `make` and `gcc` (or another C compiler) installed.

### Compilation
To compile the library, clone the repository and run:

```bash
make
```

This will produce a `libftprintf.a` static library file, which you can link to your projects as follows:

### Usage
To use `ft_printf` in your project, include the header file:

```c
#include "ft_printf.h"
```

Then, link the compiled library when compiling your project:

```bash
gcc your_file.c -L. -lftprintf -o your_program
```

After this, you can call `ft_printf` as you would `printf`:

```c
ft_printf("Hello, %s! The answer is %d.\n", "world", 42);
```

## Project Structure
- **src/**: Source files for the implemented `ft_printf` function and its helper functions.
- **includes/**: Header file (`ft_printf.h`) defining function prototypes and any macros.
- **Makefile**: Automates compilation and cleanup of the library.

## Goals
- Understand the intricacies of formatted output in C.
- Deepen knowledge of variadic functions, memory management, and output formatting.
- Develop a custom version of `printf` for use in future **42** projects.

## Author
- **Hakki Abdelaziz**  
  1337 (42 Network)

