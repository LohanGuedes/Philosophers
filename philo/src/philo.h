#ifndef PHILO_H
#define PHILO_H

/*
** Headers for functions allowed by the subject.
** Following the allowed functions
*/
# include <pthread.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <sys/time.h>

/*
** memset, printf, malloc, free, write, usleep, gettimeofday, pthread_create,
** pthread_detach, pthread_join, pthread_mutex_init, pthread_mutex_destroy,
** pthread_mutex_lock, pthread_mutex_unlock
*/

/*
** Text Colors
*/
# define BLK "\e[0;30m"
# define RED "\e[0;31m"
# define GRN "\e[0;32m"
# define YEL "\e[0;33m"
# define BLU "\e[0;34m"
# define MAG "\e[0;35m"
# define CYN "\e[0;36m"
# define WHT "\e[0;37m"
# define RST "\e[0m"

/*
** Error messages:
*/
# define ERR_N_PARAM RED"Error: "RST"Wrong number of arguments"

/*
** Structs
*/

/* Philosopher Struct */
typedef struct s_philosopher {
	int id;
	int ms_to_die;
	int ms_to_eat;
	int ms_to_think;
	pthread_t thread;
} t_philosopher;

/*
** Utility Functions:
*/
int	ft_strlen(char *str);

#endif // PHILO_H_
