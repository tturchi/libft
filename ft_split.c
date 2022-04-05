#include "libft.h"

char	**ft_clear(**res)
{
	int i;

	i = 0;
	while (res[i])
	{
		free(res[i]);
		i++;
	}
	free(res);
	return (NULL);
}

int	ft_nbstr(char const *s, char c)
{
	int nb_str;
	int i;

	nb_str = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c) //what to do if two consecutive c
			nb_str++;
		i++;
	}
	return (nb_str + i);
}

char	**ft_split(char const *s, char c)
{
	//ft_strtrim()	
}
