/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 11:53:42 by exam              #+#    #+#             */
/*   Updated: 2017/10/31 11:53:45 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int     ft_strlen(char *str)
{
  int i;

  i = 0;
  while (str[i])
  {
    i++;
  }
  return (i);
}

char    *ft_strrev(char *str)
{
  int len;
  int i;

  i = 0;
  len = ft_strlen(str);
  while (len > 0)
  {
    str = &str[len - 1];
    len--;
    str++;
  }
  return (str);
}
