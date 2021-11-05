#define SOLONG_H
#ifdef SOLONG_H

# include "libft/libft.h"
# include <stdlib.h>
# include <fcntl.h>

void	parseinput(const int argc, const char *argv);
void	parsemap(int fd);

/*
** Helper functions
*/

int		printerror(char *error);
void	checkmapcontent(const char *line, const int call);

# endif