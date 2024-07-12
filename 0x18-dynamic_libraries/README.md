0x18. C - Dynamic libraries
0. A library is not a luxury but one of the necessities of life
Create the dynamic library libdynamic.so containing all the functions listed for this project.
To compile object files(.o) from respective .c files  using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu8:
	gcc -Wall -Wextra -Werror -pedantic -c -fPIC *.c
To  build a library (for examlpe, libFct.so) from all .o with the 'shared' flag:
	gcc -shared -o libFct.so *.o
-fPIC flag stands for 'Position Independent Code' generation: the code contained in the .o file is then valid whatever the virtual address occupied at runtime. This is needed for shared libraries since it is impossible to know at which address the shared library will be.
1. Create a script that creates a dynamic library called liball.so from all the .c files that are in the current directory.
