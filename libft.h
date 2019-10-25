/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: audumont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 11:45:01 by audumont          #+#    #+#             */
/*   Updated: 2019/10/25 14:31:38 by audumont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>

typedef	struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int					ft_atoi(const char *str);
void				ft_bzero(void *s, size_t n);
void				*ft_calloc(size_t count, size_t size);
int					ft_isalnum(int nb);
int					ft_isalpha(int nb);
int					ft_isascii(int nb);
int					ft_isdigit(int nb);
int					ft_isprint(int nb);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memset(void *b, int c, size_t len);
void				ft_putchar_fd(char c, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int nb, int fd);
void				ft_putstr_fd(char *s, int fd);
char				**ft_split(const char *s, char c);
char				*ft_strchr(const char *str, char to_find);
char				*ft_strdup(const char *s1);
char				*ft_strjoin(const char *s1, const char *s2);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
size_t				ft_strlcpy(char *dst, const char *src, size_t size);
size_t				ft_strlen(const char *str);
int					ft_strncmp(const char *s1, const char *s2, size_t nb);
char				*ft_strnstr(const char *str, const char *to_find, size_t n);
char				*ft_strrchr(const char *str, char to_find);
char				*ft_strtrim(const char *str, const char *set);
char				*ft_substr(const char *s, unsigned int start, size_t len);
int					ft_tolower(int nb);
int					ft_toupper(int nb);
char				*ft_itoa(int nb);
char				*ft_strmapi(char const *str, char (*f)(unsigned int, char));

t_list				*ft_lstnew(void *content);
void				ft_lsadd_front(t_list **alst, t_list *new);
int					ft_lstsize(t_list *lst);
t_list				*ft_lstlast(t_list *lst);
void				ft_lstdelone(t_list *lst, void(*del)(void*));

#endif
