#include "../../lib/libft.h"

int		ft_intlen_base(long long int nb, size_t len_base)
{
		int len_nb;

		len_nb = 0;
		while (nb >= (int) len_base)
		{
				len_nb++;
				nb = nb / len_base;
		}
		return (len_base);
}
