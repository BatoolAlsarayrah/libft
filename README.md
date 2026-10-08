*This project has been created as part of the 42 curriculum by balsaray.*

# Libft

## Description

**Libft** is the first project of the 42 curriculum. The goal is to build, from scratch, our own static C library (`libft.a`) containing general-purpose functions that will be reused in all later projects of the curriculum.

The project is split into three parts:

1. **Libc functions**: re-implementations of standard C library functions, with the same prototypes and behaviour as the originals (see their man pages), prefixed with `ft_`.
2. **Additional functions**: useful functions that are either not in the libc or exist in a different form (string manipulation, number conversion, output to a file descriptor).
3. **Linked list**: a small set of functions to create and manipulate singly linked lists, built around the `t_list` structure.

Main constraints of the project:

- Written in C and compliant with the 42 Norm.
- Compiled with `cc -Wall -Wextra -Werror`.
- No global variables; helper functions are `static`.
- No memory leaks and no unexpected crashes (segmentation fault, double free, etc.).
- The library is built with `ar` (no `libtool`) and placed at the root of the repository.

## Instructions

### Compilation

```
make          # builds libft.a
make clean    # removes the object files
make fclean   # removes the object files and libft.a
make re       # fclean, then all
```

The Makefile lists every source file explicitly, rebuilds objects when `libft.h` changes, and does not relink when nothing has changed.

### Using the library

Include the header in your source file and link against `libft.a`. The library must come after the source file on the command line:

```c
#include "libft.h"
```

```
cc -Wall -Wextra -Werror main.c -L. -lft -o program
```

If `main.c` is not in the same folder as `libft.h`, add `-I <path/to/libft>`.

### Testing

A personal `main.c` is useful for quick checks, and leaks can be verified with:

```
valgrind --leak-check=full ./program
```

## Library description

The library contains 43 functions. The `t_list` structure used by Part 3 is declared in `libft.h`:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

### Part 1: Libc functions

| Function | Description |
|----------|-------------|
| `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint` | Character classification. Return `1` if the character matches the class, `0` otherwise. |
| `ft_toupper`, `ft_tolower` | Convert a character to upper or lower case. |
| `ft_strlen` | Length of a string. |
| `ft_memset`, `ft_bzero` | Fill a memory area with a byte, or with zeros. |
| `ft_memcpy`, `ft_memmove` | Copy memory. `ft_memmove` handles overlapping areas. |
| `ft_memchr`, `ft_memcmp` | Search for a byte in memory; compare two memory areas as `unsigned char`. |
| `ft_strlcpy`, `ft_strlcat` | Size-bounded string copy and concatenation. They always terminate the result when `size` allows and return the length they tried to create. |
| `ft_strchr`, `ft_strrchr` | First and last occurrence of a character in a string. |
| `ft_strncmp` | Compare at most `n` characters, as `unsigned char`. |
| `ft_strnstr` | Locate a substring in a string, searching at most `len` characters. |
| `ft_atoi` | Convert the beginning of a string to an `int` (whitespace, optional sign, digits). |
| `ft_calloc` | Allocate zero-initialised memory. When `nmemb` or `size` is 0, it returns a unique pointer that can be passed to `free()`. |
| `ft_strdup` | Duplicate a string with `malloc`. |

### Part 2: Additional functions

| Function | Description |
|----------|-------------|
| `ft_substr` | Allocate and return a substring of `s`, starting at `start`, of at most `len` characters. |
| `ft_strjoin` | Allocate and return the concatenation of two strings. |
| `ft_strtrim` | Allocate and return a copy of a string with the characters of `set` removed from both ends. |
| `ft_split` | Split a string with a delimiter character. Returns a NULL-terminated array of independently allocated strings. |
| `ft_itoa` | Convert an `int` to an allocated string, including negative numbers and `INT_MIN`. |
| `ft_strmapi` | Apply a function (index, character) to each character and return the new string. |
| `ft_striteri` | Apply a function (index, address of character) to each character of a string, in place. |
| `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd` | Write a character, string, string followed by a newline, or integer to a file descriptor. |

### Part 3: Linked list

| Function | Description |
|----------|-------------|
| `ft_lstnew` | Allocate a new node with the given content and `next` set to `NULL`. |
| `ft_lstadd_front` | Add a node at the beginning of the list. |
| `ft_lstadd_back` | Add a node at the end of the list. |
| `ft_lstsize` | Count the nodes of the list (returns `unsigned int`). |
| `ft_lstlast` | Return the last node of the list. |
| `ft_lstdelone` | Free one node and its content (using `del`), without touching the next node. |
| `ft_lstclear` | Free a node and all its successors, then set the list pointer to `NULL`. |
| `ft_lstiter` | Apply a function to the content of each node. |
| `ft_lstmap` | Build a new list by applying a function to each node's content. If an allocation fails, the new list is cleared with `del` and `NULL` is returned. |

### Technical choices

- Every function that allocates memory returns `NULL` on failure and frees what it already allocated (`ft_split`, `ft_lstmap`).
- Comparison functions (`ft_strncmp`, `ft_memcmp`) cast to `unsigned char`, as the libc does.
- Size-bounded functions (`ft_strlcpy`, `ft_strlcat`) never write beyond `size`, including when `size` is 0.
- `ft_lstmap` calls `del` on the content returned by `f` when node creation fails, so no value is leaked.

## Resources

### References

- Linux man pages (`man 3 strlen`, `man 3 strlcpy`, `man 3 calloc`, etc.)
- *The C Programming Language*, B. Kernighan and D. Ritchie
- The GNU C Library reference manual
- The 42 Norm and `norminette`
- Valgrind documentation (memory error and leak detection)
- [libftTester](https://github.com/Tripouille/libftTester) by Tripouille, used for testing

### Use of AI

AI (Claude) was used as a support tool for understanding and debugging, Tasks and parts of the project concerned:

- **Understanding linked lists:** step-by-step explanations of how it work (pointer to pointer, traversal, ownership of content).
- **Debugging against the tester:** help interpreting `libftTester` and valgrind output.
- **header:** Checking `libft.h` against the subject (missing prototype, unnecessary includes).
- **Documentation:** help structuring this README.

