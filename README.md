# Libft - Your Very First Own Library

## Overview

This project, **Libft**, is your very first library written in C. It is designed to be a collection of useful functions that will serve as a foundation for your future projects during your programming cursus. The library includes a variety of functions that mimic the behavior of standard C library functions, as well as additional utility functions that are not part of the standard library.

The project must adhere to strict coding standards (referred to as the "Norm") and must be free of memory leaks, segmentation faults, and other runtime errors. The library is compiled into a static library named `libft.a`.

---

## Project Structure

The project is structured as follows:

- **Source Files**: All C source files are named with the prefix `ft_` (e.g., `ft_strlen.c`, `ft_atoi.c`).
- **Header File**: The `libft.h` file contains all the function prototypes and necessary includes.
- **Makefile**: The `Makefile` is used to compile the library and includes the following rules:
  - `$(NAME)`: Compiles the library.
  - `all`: Compiles the library.
  - `clean`: Removes object files.
  - `fclean`: Removes object files and the library.
  - `re`: Recompiles the library from scratch.
  - `bonus`: Compiles the bonus part of the project.

---

## Requirements

- **Coding Standards**: The project must comply with the **Norm**, which includes specific formatting and naming conventions. Any deviation from the Norm will result in a failing grade.
- **Memory Management**: All heap-allocated memory must be properly freed. Memory leaks are not tolerated.
- **Error Handling**: Functions should not quit unexpectedly (e.g., segmentation fault, bus error, double free). Undefined behavior is the only exception.
- **Makefile**: The `Makefile` must compile the project with the flags `-Wall -Wextra -Werror`. It must not relink and must include the rules `all`, `clean`, `fclean`, and `re`.
- **Bonus**: If the project includes bonus functions, they must be placed in separate files named `*_bonus.c` and `*_bonus.h`. The `Makefile` must include a `bonus` rule to compile these files.

---

## Part 1 - Libc Functions

The first part of the project involves reimplementing a set of standard C library functions. These functions must have the same prototypes and behavior as their original counterparts, but with the `ft_` prefix. The functions to be implemented are:

### **Character Classification:**
- `ft_isalpha`
- `ft_isdigit`
- `ft_isalnum`
- `ft_isascii`
- `ft_isprint`

### **String Manipulation:**
- `ft_strlen`
- `ft_memset`
- `ft_bzero`
- `ft_memcpy`
- `ft_memmove`
- `ft_strlcpy`
- `ft_strlcat`
- `ft_strchr`
- `ft_strrchr`
- `ft_strncmp`
- `ft_strnstr`
- `ft_strdup`

### **Memory Manipulation:**
- `ft_memchr`
- `ft_memcmp`

### **Conversion:**
- `ft_atoi`
- `ft_toupper`
- `ft_tolower`

### **Dynamic Memory Allocation:**
- `ft_calloc`

---

## Part 2 - Additional Functions

The second part of the project involves implementing additional utility functions that are not part of the standard C library. These functions include:

### **String Manipulation:**
- `ft_substr`: Extracts a substring from a string.
- `ft_strjoin`: Concatenates two strings.
- `ft_strtrim`: Trims specified characters from the beginning and end of a string.
- `ft_split`: Splits a string into an array of substrings based on a delimiter.
- `ft_strmapi`: Applies a function to each character of a string.
- `ft_striteri`: Applies a function to each character of a string, passing its index.

### **Conversion:**
- `ft_itoa`: Converts an integer to a string.

### **Output:**
- `ft_putchar_fd`: Outputs a character to a file descriptor.
- `ft_putstr_fd`: Outputs a string to a file descriptor.
- `ft_putendl_fd`: Outputs a string followed by a newline to a file descriptor.
- `ft_putnbr_fd`: Outputs an integer to a file descriptor.

---

## Bonus Part

The bonus part of the project includes additional functions that are not required but can enhance the functionality of your library. These functions must be placed in separate files named `*_bonus.c` and `*_bonus.h`. The `Makefile` must include a `bonus` rule to compile these files.

---

## Compilation

To compile the library, run the following command:
```bash
make
```
This will generate the `libft.a` static library.

To compile the bonus part, run:
```bash
make bonus
```

---

## Cleaning the Project

To remove object files, run:
```bash
make clean
```

To remove object files and the library, run:
```bash
make fclean
```

To recompile the library from scratch, run:
```bash
make re
```

---

## Testing

Although not required, it is highly recommended to create test programs to verify the correctness of your functions. These tests can be used during your defense to demonstrate the functionality of your library.

---

## Submission

Submit your work to the assigned git repository. Only the work in the git repository will be graded. If **Deepthought** is assigned to grade your work, it will be done after your peer evaluations. Any errors during Deepthought's grading will result in the evaluation stopping immediately.

---

## Conclusion

This project is an excellent opportunity to build a solid foundation in C programming. By adhering to the **Norm** and ensuring your code is free of errors, you will create a library that will be useful throughout your programming cursus. **Good luck!** 🎯

