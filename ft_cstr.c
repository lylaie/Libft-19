#include "../../lib/libft.h"

const char *ft_c_to_str(char c)
{
		char *str;
		if (!(str = malloc(sizeof(char) + 1)))
				return (NULL);
		str[0] = c;
		str[1] = '\0';
		return ((const char *)str);
}
