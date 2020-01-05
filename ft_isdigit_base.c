#include "../../lib/libft.h"

int		ft_isdigit_base(long long int nb, char	*base)
{
		char	*tmp;
		size_t	len_base;

		len_base = ft_strlen(base);
		while (nb >= (int)len_base)
		{
				tmp = base;
				while (*tmp)
				{
						if (nb != *tmp)
								return (0);
						++tmp;
				}
				nb = nb / (int)len_base;
		}
		return (1);
}
