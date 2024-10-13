# libmeta-2.1
A modular static library for c projects
# Modular and static ???
libmeta does not work like a shared-object (.so) file.
The concept of modularity involves the ability to use only sections of libmeta like in c standard library
an example of this is :
```c
#include <stdio.h>
```
which is not only a header but a type of library injected into your code.
You can also see it like a tree structure, the stream of object files (.o) climbs up the branches to be merged together, or be used as a library on its own as shown in this simple graph :

# Meta_modules
![alt text](image.png)
