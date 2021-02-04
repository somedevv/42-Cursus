## Libft
|    Program Name    |              libft.a           |
|--------|----------------------------------------------|
|   Files to turn-in     |  *.c, libft.h, Makefile  |
|    Makefile    | Yes |
|    Authorized external functions    | See below |
|    Authorized libft    | Doesn't apply |
| Description | Write your own library, containing a excerpt of the functions you will need more forward during your training. |

==>[SPANISH SUBJECT](https://github.com/somedevv/42-Cursus/blob/master/C/libft/es.subject.pdf)

==>[HEADER](https://github.com/somedevv/42-Cursus/blob/master/C/libft/libft.h)

==>[MAKEFILE](https://github.com/somedevv/42-Cursus/blob/master/C/libft/Makefile)

### 1. Technical considerations
* The use of global variables is prohibited.

* If you need auxiliary functions to write a complex function, you will have to define those auxiliary functions in static, respecting the Standard.

* Upload all files to the root of the repository.

* Use the <code>ar</code> command to create your library, it is forbidden to use the <code>libtool</code> command.

### 2. Part 1 - Libc functions
In this first part, you will have to program a set of functions of the **libc**, as they are described in the respective man of your system. Their functions will
have to have exactly the same prototype and the same behavior as the originals. Their names will have to have the prefix "ft_". For example, strlen becomes 
ft_strlen.
```diff
! Some of the prototypes of the functions that you have to redo use the "restrict" type qualifier.
! This word key belongs to the c99 standard,  therefore you should not include it in your prototypes and should not
! compile with the -std = c99 flag.
```

You have to program the following functions. These functions need
no external function:

• [memset](https://github.com/somedevv/42-Cursus/blob/master/C/libft/ft_memset.c)  • [bzero](https://github.com/somedevv/42-Cursus/blob/master/C/libft/ft_bzero.c) • [memcpy](https://github.com/somedevv/42-Cursus/blob/master/C/libft/ft_memcpy.c) • [memccpy](https://github.com/somedevv/42-Cursus/blob/master/C/libft/ft_memccpy.c) • [memmove](https://github.com/somedevv/42-Cursus/blob/master/C/libft/ft_memmove.c)
• [memchr](https://github.com/somedevv/42-Cursus/blob/master/C/libft/ft_memchr.c) • [memcmp](https://github.com/somedevv/42-Cursus/blob/master/C/libft/ft_memcpm.c) • [strlen](https://github.com/somedevv/42-Cursus/blob/master/C/libft/ft_strlen.c) • [strlcpy](https://github.com/somedevv/42-Cursus/blob/master/C/libft/ft_strlcpy.c) • [strlcat](https://github.com/somedevv/42-Cursus/blob/master/C/libft/ft_strlcat.c) 
• [strchr](https://github.com/somedevv/42-Cursus/blob/master/C/libft/ft_strchr.c) • [strrchr](https://github.com/somedevv/42-Cursus/blob/master/C/libft/ft_strrchr.c) • [strnstr](https://github.com/somedevv/42-Cursus/blob/master/C/libft/ft_strnstr.c) • [strncmp](https://github.com/somedevv/42-Cursus/blob/master/C/libft/ft_strncmp.c) • [atoi](https://github.com/somedevv/42-Cursus/blob/master/C/libft/ft_atoi.c)
• [isalpha](https://github.com/somedevv/42-Cursus/blob/master/C/libft/ft_isalpha.c) • [isdigit](https://github.com/somedevv/42-Cursus/blob/master/C/libft/ft_isdigit.c) • [isalnum](https://github.com/somedevv/42-Cursus/blob/master/C/libft/ft_isalnum.c) • [isascii](https://github.com/somedevv/42-Cursus/blob/master/C/libft/ft_isascii.c) • [isprint](https://github.com/somedevv/42-Cursus/blob/master/C/libft/ft_isprint.c)
• [toupper](https://github.com/somedevv/42-Cursus/blob/master/C/libft/ft_toupper.c) • [tolower](https://github.com/somedevv/42-Cursus/blob/master/C/libft/ft_tolower.c)

You will also have to program these functions by calling the <code>malloc</code> function:

• [calloc](https://github.com/somedevv/42-Cursus/blob/master/C/libft/ft_calloc.c)  • [strdup](https://github.com/somedevv/42-Cursus/blob/master/C/libft/ft_strdup.c)

### 3. Part 2 - Additional functions
In this second part, you will have to program some functions that are not
found in the libc or that they are in a different form. Some of these functions
they can be interesting to facilitate the writing of the functions of the first part.
|    Function name    |              [ft_substr](https://github.com/somedevv/42-Cursus/blob/master/C/libft/ft_substr.c)                   |
|--------|----------------------------------------------|
|   Prototype     |     char *ft_substr(char const *s, unsigned int start,size_t len); |
|    Parameters    |   #1. The string from which the new string is extracted. #2. The index of the beginning of the new string #3. The maximum size of the new string.           |
|    Return value    | The new character string. NULL if the memory reserve.    |
|    Authorized functions    |  malloc             |
| Description | Reserve memory (with malloc (3)) and return the character string that comes from the string passed as an argument. This new string starts at the index ’start’ and has a maximum size ’len’|

|    Function name    |              [ft_strjoin](https://github.com/somedevv/42-Cursus/blob/master/C/libft/ft_strjoin.c)         |
|--------|----------------------------------------------|
|   Prototype     |   char *ft_strjoin(char const *s1, char const *s2);   |
|    Parameters    |   #1. The prefix string. #2. The suffix string. |
|    Return value    |  The new character string. NULL if the memory reserve. |
|    Authorized functions    | malloc |
| Description | Reserve memory (with malloc (3)) and return the new character string resulting from the concatenation of 's1' and 's2'. |

|    Function name    |              [ft_strtrim](https://github.com/somedevv/42-Cursus/blob/master/C/libft/ft_strtrim.c)         |
|--------|----------------------------------------------|
|   Prototype     |  char *ft_strtrim(char const *s1, char const *set);  |
|    Parameters    |  #1. The character string to debug. #2. The character reference set to be remove.  |
|    Return value    |  The debugged character string. NULL if the memory reserve. |
|    Authorized functions    | malloc |
| Description | Reserve memory (with malloc (3)) and return the character string that is a copy of 's1', without the characters indicated in the 'set' at the beginning and at the end of the character string. |

|    Function name    |              [ft_split](https://github.com/somedevv/42-Cursus/blob/master/C/libft/ft_split.c)           |
|--------|----------------------------------------------|
|   Prototype     |  char **ft_split(char const *s, char c);  |
|    Parameters    | #1. The character string to chop up. #2. The delimiting character. |
|    Return value    | The table with the new character strings that result from the chopping. NULL if reservation fails memory |
|    Authorized functions    | malloc, free |
| Description | Reserve memory (with malloc (3)) and return a string table obtained by separating ’S’ with the character ’c’, which is used as delimiter. The table must end with NULL. |

|    Function name    |              [ft_itoa](https://github.com/somedevv/42-Cursus/blob/master/C/libft/ft_itoa.c)           |
|--------|----------------------------------------------|
|   Prototype     |  char *ft_itoa(int n);  |
|    Parameters    | #1. The integer to convert. |
|    Return value    | The character string representing the integer. NULL if the memory reservation fails. |
|    Authorized functions    | malloc |
| Description | Reserve memory (with malloc (3)) and return the character string representing the integer passed as argument. You must manage the negative numbers. |

|    Function name    |              [ft_strmapi](https://github.com/somedevv/42-Cursus/blob/master/C/libft/ft_strmapi.c)           |
|--------|----------------------------------------------|
|   Prototype     |  char *ft_strmapi(char const *s, char (*f)(unsigned int, char));  |
|    Parameters    | #1. The character string to iterate over #2. The function to apply to each character. |
|    Return value    | The character string resulting from the successive applications of 'f'. Returns NULL if assignment fails. |
|    Authorized functions    | malloc |
| Description | Apply the function 'f' to each character of the character string 's' to create a new character string (with malloc (3)) that results of the successive applications of 'f'. |

|    Function name    |              [ft_putchar_fd](https://github.com/somedevv/42-Cursus/blob/master/C/libft/ft_putchar_fd.c)           |
|--------|----------------------------------------------|
|   Prototype     | void ft_putchar_fd(char c, int fd); |
|    Parameters    | #1. The character to write #2. The file descriptor on which to write. |
|    Return value    | None |
|    Authorized functions    | write |
| Description | Write the character 'c' above the descriptor of file provided. |

|    Function name    |              [ft_putstr_fd](https://github.com/somedevv/42-Cursus/blob/master/C/libft/ft_putstr_fd.c)           |
|--------|----------------------------------------------|
|   Prototype     |  void ft_putstr_fd(char *s, int fd);  |
|    Parameters    | #1. The character string to write #2. The file descriptor on which to write. |
|    Return value    | None |
|    Authorized functions    | write |
| Description |  Write the character string 's' over it provided file descriptor. |

|    Function name    |              [ft_putendl_fd](https://github.com/somedevv/42-Cursus/blob/master/C/libft/ft_putendl_fd.c)           |
|--------|----------------------------------------------|
|   Prototype     |  void ft_putendl_fd(char *s, int fd);  |
|    Parameters    | #1. The character string to write #2. The file descriptor on which to write. |
|    Return value    | None |
|    Authorized functions    | write |
| Description | Write the character string 's' over it provided file descriptor, followed by a line break. |

|    Function name    |              [ft_putnbr_fd](https://github.com/somedevv/42-Cursus/blob/master/C/libft/ft_putnbr_fd.c)           |
|--------|----------------------------------------------|
|   Prototype     |  void ft_putnbr_fd(int n, int fd);  |
|    Parameters    | #1. The integer to write #2. The descriptor file on which to write. |
|    Return value    | None |
|    Authorized functions    | write |
| Description | Write the integer 'n' over the descriptor of file provided. |

### 4. Extra Part - Extra Functions

If you have managed to do the required part perfectly, this section proposes some tips to go further. It's a bit like when you buy a DLC for a video game.
Have raw memory and string manipulation functions available
is very useful, but you will quickly understand that having manipulation functions
list is even more useful.
You will use the following structure to represent the nodes in your list. You will need to add
this structure to your **libft.h** file.
<code>make bonus</code> will add the bonus functions to the **libft.a** library.
You don't have to add **_bonus** at the end of the **.c** and **.h** files for this part just add
**_bonus** to additional files that you would have created just for bonuses.
```C
typedef struct    s_list
{
    void          *content;
    struct s_list *next;
}                 t_list
```
The description of the fields of the <code>t_list</code> structure is as follows:

* **content:** The data contained in the node. The void * allows you to store data from any kind.

* **next:** The address of the next node in the list or NULL, if it is the last node.

The following functions will allow you to manipulate your lists with ease:

|    Function name    |              [ft_lstnew](https://github.com/somedevv/42-Cursus/blob/master/C/libft/ft_lstnew.c)           |
|--------|----------------------------------------------|
|   Prototype     |  t_list *ft_lstnew(void *content);  |
|    Parameters    | #1. The content of the new element. |
|    Return value    | The new element |
|    Authorized functions    | malloc |
| Description | Reserve memory (with malloc (3)) and return a new element. The variable ’content’ is initialized using the value of the 'content' parameter. The variable 'next' is initialized with NULL. |

|    Function name    |              [ft_lstadd_front](https://github.com/somedevv/42-Cursus/blob/master/C/libft/ft_lstadd_front.c)           |
|--------|----------------------------------------------|
|   Prototype     |  void ft_lstadd_front(t_list **alst, t_list *new);  |
|    Parameters    | #1. The direction of the pointer to the first element of the list. #2. The direction of the pointer to the element there to add to the list. |
|    Return value    | None |
|    Authorized functions    | None |
| Description | Add the element 'new' to the beginning of the list |

|    Function name    |              [ft_lstsize](https://github.com/somedevv/42-Cursus/blob/master/C/libft/ft_lstsize.c)           |
|--------|----------------------------------------------|
|   Prototype     |  int ft_lstsize(t_list *lst);  |
|    Parameters    | #1. Top of the list. |
|    Return value    | List size |
|    Authorized functions    | None |
| Description | Counts de number of elements in the list  |

|    Function name    |              [ft_lstlast](https://github.com/somedevv/42-Cursus/blob/master/C/libft/ft_lstlast.c)           |
|--------|----------------------------------------------|
|   Prototype     |  t_list *ft_lstlast(t_list *lst);  |
|    Parameters    | #1. Top of the list. |
|    Return value    | Last element in the list |
|    Authorized functions    | None |
| Description | Returns the last element in the list |

|    Function name    |              [ft_lstadd_back](https://github.com/somedevv/42-Cursus/blob/master/C/libft/ft_lstadd_back.c)           |
|--------|----------------------------------------------|
|   Prototype     |  void ft_lstadd_back(t_list **lst, t_list *new);  |
|    Parameters    | #1. The direction of the pointer to the first element of the list. #2. The direction of the pointer to the element there to add to the list. |
|    Return value    | None |
|    Authorized functions    | None |
| Description | Add element 'new' to the end of the list |

|    Function name    |              [ft_lstdelone](https://github.com/somedevv/42-Cursus/blob/master/C/libft/ft_lstdelone.c)           |
|--------|----------------------------------------------|
|   Prototype     |  void ft_lstdelone(t_list *lst, void (*del)(void*)); |
|    Parameters    | #1. The item whose memory should be freed #2. The address of a function used to clear the content of the element. |
|    Return value    | None |
|    Authorized functions    | free |
| Description | Free the memory of the element passed as argument using the 'del' function and then free (3). The 'next' memory must not be freed. |

|    Function name    |              [ft_lstclear](https://github.com/somedevv/42-Cursus/blob/master/C/libft/ft_lstclear.c)           |
|--------|----------------------------------------------|
|   Prototype     |  void ft_lstclear(t_list **lst, void (*del)(void *);  |
|    Parameters    | #1. The direction of the pointer to an element. #2. The address of the function to suppress the content of an element. |
|    Return value    | None |
|    Authorized functions    | free |
| Description | Suppresses and frees the memory of the last item as a parameter and of all the following elements, with 'del' and free (3) Lastly, the initial pointer must be set to NULL. |

|    Function name    |              [ft_lstiter](https://github.com/somedevv/42-Cursus/blob/master/C/libft/ft_lstiter.c)           |
|--------|----------------------------------------------|
|   Prototype     |  void ft_lstiter(t_list *lst, void (*f)(void *)); |
|    Parameters    | #1. The address of the pointer to an element. #2. The address of the function to apply. |
|    Return value    | None |
|    Authorized functions    | None |
| Description | Perform an iteration on the list ’lst’ and apply the function 'f' to the content of each element. |

|    Function name    |              [ft_lstmap](https://github.com/somedevv/42-Cursus/blob/master/C/libft/ft_lstmap.c)           |
|--------|----------------------------------------------|
|   Prototype     |  t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));  |
|    Parameters    | #1. The direction of the pointer to an element. #2. The address of the function to apply on the list. #3. The address of the function to apply on an element to delete ’content’, if it is necessary. |
|    Return value    | The new list. NULL if memory allocation fails. |
|    Authorized functions    | malloc |
| Description | Perform an iteration on the list ’lst’ and apply the function 'f' to the content of each element. Creates a new list resulting from the applications successive of 'f'. We have the function 'of' yes you have to remove the content of some element. |

You can add functions to your libft as you like.
