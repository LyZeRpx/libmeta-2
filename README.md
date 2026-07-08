# libmeta-3

`libmeta-3` is a modular static library for C projects. It groups reusable utilities into focused modules so projects can link one library (`libmeta.a`) while keeping source code organized by domain.

## What this library provides

### `meta_libc`
A lightweight reimplementation of selected libc-style helpers:
- string helpers (`meta_strlen`, `meta_strcpy`, `meta_strcmp`, `meta_strstr`, `meta_strsplt`, ...)
- output/printing helpers (`meta_mprintf`, `meta_putstr`, `meta_putnbr`, ...)
- numeric conversion helpers (`meta_atoi`, `meta_atol`, `meta_atoll`, `meta_nbrtoa`)
- utility helpers (`meta_fetch_var`, `meta_arrfuse`)

### `meta_links`
A doubly-linked list module built around `meta_list_t`:
- node creation and insertion (`meta_node_create`, `meta_node_push`, `meta_node_push_back`)
- search/update helpers (`meta_node_fetch`, `meta_node_overwrite`)
- deletion and cleanup (`meta_node_delete`, `meta_list_destroy`)
- forward/reverse display helpers

### Shared utilities
`include/meta/utils.h` defines project-wide constants and convenience macros used by the modules.

## Build

### Requirements
- `gcc` (or another C compiler compatible with the current Makefiles)
- `make`
- `ar`

### Commands
From the repository root:

```bash
make          # build libmeta.a
make clean    # remove module object files
make fclean   # remove objects + libmeta.a
make re       # full rebuild
make debug    # rebuild with -g3
```

> Note: a placeholder `make tests_run` target exists, but this repository currently has no automated test suite.

## Use in another C project

1. Build the library:
   ```bash
   make
   ```
2. Include headers from `include/` in your source:
   ```c
   #include "meta/libc/string.h"
   #include "meta/libc/printers.h"
   #include "meta/links/links.h"
   ```
3. Compile and link against `libmeta.a`:
   ```bash
   gcc main.c -Iinclude -L. -lmeta -o my_program
   ```

## Project structure

```text
.
├── include/
│   └── meta/
│       ├── libc/      # libc-like API headers
│       ├── links/     # linked-list API headers
│       └── utils.h    # shared macros/constants
├── modules/
│   ├── meta_libc/     # libc-like implementation
│   └── meta_links/    # linked-list implementation
├── Makefile           # top-level orchestration
└── README.md
```

## Contribution and maintenance notes

- Keep changes module-scoped (`meta_libc` vs `meta_links`) to preserve the modular layout.
- Export new public APIs through headers under `include/meta/...`.
- Keep top-level and module Makefiles aligned when adding/removing source files.
- Prefer small, focused changes with clear build verification (`make`, then `make clean`/`make re` as needed).

## License

This project is licensed under the GNU General Public License v3.0. See [LICENSE](./LICENSE).
