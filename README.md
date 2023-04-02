<body>	
<h1>Printf Function</h1>
<ul>
<li>Introduction</li>
<li>Requirements</li>
<li>Repository</li>
<li>Installation & use</li>
<li>Collaboration</li>
</ul>

<h1>Introduction</h1>

Welcome to our printf function. This project try to replicate and replace the usual printf C's library function.
The function will take a variable number of arguments, and send back a formatted output stdout, formatting the 
arguments and converting them into strings of characters.


| Specifier | Output |
| --------- | ------ |
| c | characters |
| s | string |
| % | percentage |
| d and i | decimal and inter |

<h1>Requirements</h1>

*General*

<ul>
<li>Allowed editors: vi, vim, emacs</li>
<li>All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89</li>
<li>All your files should end with a new line</li>
<li>A README.md file, at the root of the folder of the project is mandatory</li>
<li>Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl</li>
<li>You are not allowed to use global variables</li>
<li>No more than 5 functions per file</li>
<li>In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples</li>
<li>The prototypes of all your functions should be included in your header file called main.h</li>
<li>Don't forget to push your header file</li>
<li>All your header files should be include guarded</li>
<li>Note that we will not provide the _putchar function for this project</li>
</ul>

*Authorized functions and macros*

<ul>
<li>write (man 2 write)</li>
<li>malloc (man 3 malloc)</li>
<li>free (man 3 free)</li>
<li>va_start (man 3 va_start)</li>
<li>va_end (man 3 va_end)</li>
<li>va_copy (man 3 va_copy)</li>
<li>va_arg (man 3 va_arg)</li>
</ul>

<h1>Repository</h1>

The repository contains the following files:
  
| File | Description |
| --------- | ------ |
| _printf.c | Principal functions of the program |
| main.h | Header file, contains prototypes |
| structs.c | File with format printing functions |
| aux_funcs.c | Auxiliar functions |

<h1>Installation and use</h1>

`Tested on Ubuntu 20.04`
     
Clone the repository to start:

>git clone git@github.com/IsmaelMolina-code/holbertonschool-printf.git'

For running the function, after cloning the repository, is necessary to compile the program with the following code:

>gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c


After compiling, run de executable on your console, remember that you will need a main function with the arguments to print with the format.
This main function should be on a c file, in the same directory as the repository to the moment of compiling.
<h1>Collaboration</h1>
This is a project developed by Ismael Molina and Janis Núñez, for Holberton School Uruguay program.
</body>
