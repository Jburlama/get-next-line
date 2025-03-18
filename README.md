![image](https://github.com/user-attachments/assets/24f79340-3a35-4255-8cfe-a4678a2414ca)

## This project is about creating a function that, allows one to read a line ending with a newline character ('\n') from a file descriptor, without knowing its size beforehand. 


After this project, I understand how files are opened, read, and closed in an OS,
and how they are interpreted by a programming language for further analysis.
This task is crucial to understand for a future programmer since much of the time is based
on manipulating files for data management and persistence.
This project consists of coding a function that returns one line at a time from a text file.

# 🛠️ Usage

### Instructions

**1. Using it in your code**

To use the function in your code, simply include its header:

```C
#include "get_next_line.h"
```

and, when compiling your code, add the source files and the required flag:

```shell
get_next_line.c get_next_line_utils.c -D BUFFER_SIZE=<size>
```
