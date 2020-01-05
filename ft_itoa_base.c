#include "../../lib/libft.h"

char			*ft_itoa_base(long long int nb, int len_nb, size_t len_base, char *base)
{
		char 	*tmp;
		int		index;

		if (!(tmp = malloc(sizeof(char) * (len_nb + 1))))
				return (NULL);
		tmp[len_nb] = '\0';
		ft_bzero((void*)tmp, (size_t)len_nb);
		nb = nb & ((~0) >> 1);
		index = 0;
		while (nb >= base)
		{
				tmp[len_nb - index] = (nb % base) + '0';
				nb = nb / base;
				index++;
		}
		return (tmp);
}
