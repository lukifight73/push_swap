/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenatar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:22:28 by lbenatar          #+#    #+#             */
/*   Updated: 2024/12/03 14:45:35 by lbenatar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <string.h>
# include <strings.h>
# include <ctype.h>
# include <bsd/string.h>
# include <stdarg.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

typedef struct s_slist
{
	int	*a;
	int	*b;
	int	nba;
	int	nbb;
	int	nbo;
}	t_slist;

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

void	ft_cas1(t_slist *ab, int i);
void	ft_cas2(t_slist *ab, int i);
void	ft_cas3(t_slist *ab, int i);
void	ft_cas4(t_slist *ab, int i);
void	ft_pa(t_slist *ab, int pa);
void	ft_pb(t_slist *ab, int pb);
void	reverse_table_a(t_slist *ab);
void	reverse_table_b(t_slist *ab);
void	ft_transfer_b(t_slist *ab);
void	ft_transfer_a(t_slist *ab, int nb);
void	ft_sa(t_slist *ab, int sa);
void	ft_sb(t_slist *ab, int sb);
void	ft_ss(t_slist *ab, int ss);
void	ft_rrb(t_slist *ab, int rrb);
void	ft_rra(t_slist *ab, int rra);
void	ft_rrr(t_slist *ab, int rrr);
void	ft_ra(t_slist *ab, int ra);
void	ft_rb(t_slist *ab, int rb);
void	ft_rr(t_slist *ab, int rr);
void	ft_printf_ab(t_slist *ab);
void	ft_sort_ab(t_slist *ab);
void	liberator(char **s);
void	liberator_ab(t_slist *ab);
void	put_max_b_front(t_slist *ab);
void	put_max_a_front(t_slist *ab);
void	put_min_a_front(t_slist *ab);
void	put_extreme_b(t_slist *ab);
void	finish_it(t_slist *ab);
void	ft_put_a_in_b(t_slist *ab);
void	join2(char *s1, char *s2, char *conc);
void	exec(char *instructs, t_slist *ab);
int		ft_nombre_operations(t_slist *ab, int i, int rang_b);
int		get_rang_b(t_slist *ab, int a);
int		ft_va(t_slist *ab, int j);
int		verif_entry(char **tab);
int		verif_entry2(int *a, int nbv);
int		get_max_a(t_slist *ab);
int		get_min_a(t_slist *ab);
int		get_max_b(t_slist *ab);
int		get_min_b(t_slist *ab);
int		get_rang_max_a(t_slist *ab);
int		get_rang_min_a(t_slist *ab);
int		get_rang_max_b(t_slist *ab);
int		get_rang_min_b(t_slist *ab);
int		ft_atoi(const char *nptr);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_lstsize(t_list *lst);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		verif_instructs(char **instructs);
int		verif(t_slist *ab);
size_t	write_c(va_list apc, size_t k);
size_t	write_s(va_list apc, size_t k);
size_t	write_d(va_list apc, size_t k);
size_t	write_u(va_list apc, size_t k);
size_t	write_x(va_list apc, size_t k);
size_t	write_xx(va_list apc, size_t k);
size_t	write_c(va_list apc, size_t k);
size_t	ft_putchar_k(int c, size_t k);
size_t	ft_putstr_k(char *str, size_t k);
size_t	write_xx(va_list apc, size_t k);
size_t	write_p(va_list apc, size_t k);
size_t	ft_write_special(char c, va_list apc, size_t k);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *str);
size_t	ft_printf(const char *entry, ...);
t_list	*ft_lstnew(void *content);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
char	*get_standard_input(void);
char	*ft_strjoin2(char *s1, char *s2);
char	*ft_strnstr(const char *big, const char *little, size_t n);
char	*ft_strrchr(const char *s, int c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strtoupper(char *str);
char	*ft_itoa_u(unsigned int n);
char	*ft_int_hex(unsigned int n);
char	*ft_int_hex_add(unsigned long long n);
char	**ft_split(char const *s, char c);
void	ft_bzero(void *s, size_t n);
void	ft_putnbr_fd(int n, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
void	*ft_calloc(size_t nmemb, size_t size);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memchr(void *s, int c, size_t n);
char	*ft_strjjoin(char *line, char *buf);
void	join(char *line, char *buf, char *conc);
char	*ft_strchr(const char *s, int c);
t_slist	*ft_lstnewab(char **tab, int i);

#endif
