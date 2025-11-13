# libmeta-3
`libmeta-3` is a modular C library that provides a custom implementation of common C standard library functions and fundamental data structures. It is designed to be a self-contained, reusable tool for C projects, with a focus on simplicity and a consistent coding style enforced through a rich set of utility macros.

## Features

*   A custom reimplementation of the C standard library (`meta_libc`).
*   A robust doubly linked list implementation (`meta_links`).
*   A collection of utility macros (`utils.h`) for cleaner and more readable conditional logic.
*   A modular architecture for easy extension and maintenance.

## Modules

The library is organized into two main modules:

### `meta_libc`
A comprehensive suite of functions mimicking the standard C library.

*   **String Manipulation**: `meta_strcpy`, `meta_strcmp`, `meta_strlen`, `meta_strcat`, `meta_strstr`, `meta_strsplt`, `meta_strdup`, and their `n` variants (e.g., `meta_strncpy`).
*   **Printing**: A custom `meta_mprintf` supporting `%s`, `%d`, `%i`, `%c`, and `%%`, along with file-descriptor-specific versions and helpers like `meta_putstr`, `meta_putchar`, `meta_putnbr`.
*   **Conversions**: Functions to convert strings to numbers (`meta_atoi`, `meta_atol`, `meta_atoll`) and numbers to strings (`meta_nbtoa`).
*   **Memory**: Basic memory functions like `meta_memset` and `meta_calloc`.

### `meta_links`
A full-featured doubly linked list library for managing dynamic collections of strings.

*   Node creation (`meta_node_create`), deletion (`meta_node_delete`), and traversal (forward with `meta_list_display` and reverse with `meta_list_rdisplay`).
*   Functions to push nodes to the front (`meta_node_push`) and back (`meta_node_push_back`).
*   Utilities to search for data (`meta_node_fetch`) and overwrite data (`meta_node_overwrite`) within the list.
*   A function to safely destroy the entire list (`meta_list_destroy`).

## Building the Library

To build the static library `libmeta.a`, clone the repository and run `make`.

1.  **Clone the repository:**
    ```bash
    git clone https://github.com/lyzer-px/libmeta-3.git
    ```

2.  **Navigate to the project directory:**
    ```bash
    cd libmeta-3
    ```

3.  **Compile the library:**
    ```bash
    make
    ```
    This will create the `libmeta.a` file in the root directory.

### Build Commands

The `Makefile` provides several targets for managing the build process:
*   `make` or `make all`: Compiles the static library `libmeta.a`.
*   `make clean`: Removes all compiled object files from the modules.
*   `make fclean`: Removes all object files and the final `libmeta.a` library.
*   `make re`: Cleans and rebuilds the entire library.
*   `make debug`: Compiles the library with `-g3` debugging symbols.

## Usage

To use `libmeta-3` in your project, include the necessary headers from the `include` directory and link against the compiled `libmeta.a` library.

### Example

Here is a sample `main.c` file demonstrating how to use functions from both `meta_libc` and `meta_links`.

```c
#include "meta/libc/printers.h"
#include "meta/libc/string.h"
#include "meta/links/links.h"
#include <stdlib.h>

int main(void)
{
    // Using meta_libc
    meta_mprintf("Hello from libmeta-3!\n");
    const char *my_string = "Testing string length.";
    ssize_t len = meta_strlen(my_string);
    meta_mprintf("The length of \"%s\" is %d.\n\n", my_string, len);

    // Using meta_links
    meta_list_t *my_list = NULL;
    meta_mprintf("Creating a linked list...\n");
    meta_node_push("world", &my_list);
    meta_node_push("hello", &my_list);

    meta_mprintf("Displaying list:\n");
    meta_list_display(my_list);

    // Clean up the list
    meta_list_destroy(&my_list);
    
    return 0;
}
```

### Compiling Your Project

Compile your `main.c` file with `gcc`, making sure to specify the include path (`-I`), library path (`-L`), and library name (`-l`).

```bash
gcc main.c -Iinclude -L. -lmeta -o my_program
```

Then, run your executable:
```bash
./my_program
```

**Expected Output:**
```
Hello from libmeta-3!
The length of "Testing string length." is 22.

Creating a linked list...
Displaying list:
hello
world
```

## License

This project is licensed under the GNU General Public License v3.0. See the `LICENSE` file for more details.
