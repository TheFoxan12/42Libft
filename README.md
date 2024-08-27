# 42Libft
My project Libft from School 42
Finale grade : 125/100

![42Libft-cover](cover-libft-bonus.png)

<table>
  <tr><td>Program name</td><td>libft.a</td></tr>
  <tr><td>Turn in files</td><td>Makefile, libft.h, ft_*.c</td></tr>
  <tr><td>Makefile</td><td>NAME, all, clean, fclean, re</td></tr>
  <tr><td>External functions</td><td>Detailed below</td></tr>
  <tr><td>Libft authorized</td><td>n/a</td></tr>
  <tr><td>Description</td><td>Write your own library: a collection of functions that will be a useful tool for your cursus.</td></tr>
</table>

## Technical considerations

* Declaring global variables is forbidden.
* If you need helper functions to split a more complex function, define them as static
functions. This way, their scope will be limited to the appropriate file.
* Place all your files at the root of your repository.
* Turning in unused files is forbidden.
* Every .c files must compile with the flags -Wall -Wextra -Werror.
* You must use the command ar to create your library. Using the libtool command
is forbidden.
• Your libft.a has to be created at the root of your repository.

## Part 1 - Libc functions

To begin, you must redo a set of functions from the libc. Your functions will have the
same prototypes and implement the same behaviors as the originals. They must comply
with the way they are defined in their man. The only difference will be their names. They
will begin with the ’ft_’ prefix. For instance, strlen becomes ft_strlen.

You must write your own function implementing the following original ones. They do
not require any external functions:

<table>
  <tr><td>isalpha</td><td>isdigit</td><td>isalnum</td></tr>
  <tr><td>isascii</td><td>isprint</td><td>strlen</td></tr>
  <tr><td>memset</td><td>bzero</td><td>memcpy</td></tr>
  <tr><td>memmove</td><td>strlcpy</td><td>strlcat</td></tr>
  <tr><td>toupper</td><td>tolower</td><td>strchr</td></tr>
  <tr><td>strrchr</td><td>strncmp</td><td>memchr</td></tr>
  <tr><td>memcmp</td><td>strnstr</td><td>atoi</td></tr>
</table>

In order to implement the two following functions, you will use malloc():
<table><tr><td>calloc</td><td>strdup</td></tr></table>

## Part 2 - Additional functions

In this second part, you must develop a set of functions that are either not in the libc,
or that are part of it but in a different form.

<table>
  <tr><td>ft_substr</td><td>ft_strjoin</td><td>ft_strtrim</td></tr>
  <tr><td>ft_split</td><td>ft_itoa</td><td>ft_strmapi</td></tr>
  <tr><td>ft_striteri</td><td>ft_putchar_fd</td><td>ft_putstr_fd</td></tr>
  <tr><td>ft_putendl_fd</td><td>ft_putnbr_fd</td></tr>
</table>

## Bonus Part

If you completed the mandatory part, do not hesitate to go further by doing this extra
one. It will bring bonus points if passed successfully.
Functions to manipulate memory and strings is very useful. But you will soon discover
that manipulating lists is even more useful.
You have to use the following structure to represent a node of your list. Add its
declaration to your libft.h file:

```c
typedef struct s_list
{
  void *content;
  struct s_list *next;
}  t_list;
```

The members of the t_list struct are:
• content: The data contained in the node.
void * allows to store any kind of data.
• next: The address of the next node, or NULL if the next node is the last one.
In your Makefile, add a make bonus rule to add the bonus functions to your libft.a.

Implement the following functions in order to easily use your lists.

<table>
  <tr><td>ft_lstnew</td><td>ft_lstadd_front</td><td>ft_lstsize</td></tr>
  <tr><td>ft_lstlast</td><td>ft_lstadd_back</td><td>ft_lstdelone</td></tr>
  <tr><td>ft_lstclear</td><td>ft_lstiter</td><td>ft_lstmap</td></tr>
</table>



<img align="right" src="libftm.png">
