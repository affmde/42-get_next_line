# <center>Get Next Line - 42 School project</center>
## Description
This is a 42 project where you need to create a function that reads the next line of the given file descriptor. The function must read from standard input or from a external file. 
In this project the use of former libft library is forbidden.
The function must return the next line of the file, or null in case of an error or no more lines to read in the file.

### Bonus
In the bonus part we must replicate the same function, but this time, is required that the functions handles multiple file descriptors.
<br>
<br>

## Language Used:
[![My Skills](https://skills.thijs.gg/icons?i=c)](https://skills.thijs.gg)

<br>

## Function Prototype:

    char	*get_next_line(int fd);

<br>

# <img src="https://cdn-icons-png.flaticon.com/128/627/627495.png" data-canonical-src="https://gyazo.com/eb5c5741b6a9a16c692170a41a49c858.png" width="40" height="40" /> Usage

## *Requirements:*

The library is written in C, so it needs the gcc compiler as well has the libraries <unist.d> and <stdlib.h> to compile
<br>
<br>
## *Instalation:*


**1- Include the header on your program:**

    # include "libft.h"

**2- When compile don´t forget to add it:**

    get_next_line.c get_next_line_utils.c -I get_next_line.h -D BUFFER_SIZE=<size>
+ or for the bonus:

        get_next_line_bonus.c get_next_line_utils_bonus.c -I get_next_line.h -D BUFFER_SIZE=<size>
Default buffer size is set to 30, but you can modify it by changing the size field of BUFFER_SIZE on compiling.

<br><br>

# <img src="https://cdn-icons-png.flaticon.com/128/3281/3281329.png" data-canonical-src="https://gyazo.com/eb5c5741b6a9a16c692170a41a49c858.png" width="40" height="40" /> Testing

## **External testers:**
    
+ [gnlTester](https://github.com/Tripouille/gnlTester)

<br><br>

## Related Projects

+ [42-libft](https://github.com/affmde/42-libft)
+ [42-ft_printf](https://github.com/affmde/42-ft_printf)