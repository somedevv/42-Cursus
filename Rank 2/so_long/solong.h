#define SOLONG_H
#ifdef SOLONG_H

# include "libft/libft.h"
# include "mlx/mlx.h"
# include <stdlib.h>
# include <fcntl.h>

/*
** STRUCTS
*/

typedef struct	s_data {
	void	*img;
	char	*addr;
	void	*win;
	void	*mlx;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
	char	*path;
	int		width;
	int		height;
	char	**map;
	unsigned long int		pos[2];
	int		coin;
	int		cpos[2];
}				t_data;

/*
** Main func
*/

void	parseinput(const int argc, const char *argv);
char	**parsemap(int fd);

/*
** Helper functions
*/

int		printerror(char *error);
void	checkmapcontent(char **line, const int call);
void	printmap(char **map);
int		prgclose(int keycode, t_data *vars);
unsigned long int		getleny(char **str);
void	moveup(t_data *img);
void	moveleft(t_data *img);
void	movedown(t_data *img);
void	moveright(t_data *img);
void	modifymap(t_data *img, int i);
int		checkbujero(t_data img, int i);
void	checkcoin(t_data *img, int i);
int		checkevent(t_data *img, int i);

/*
** MLX FUNCTIONS
*/

int		key_hook(int keycode, void *vars);
void	drawground(t_data *img);
void	drawelse(t_data img);


# endif