/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 10:35:15 by exam              #+#    #+#             */
/*   Updated: 2017/10/31 10:35:17 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int   ft_strlen(char *s)
{
  int i;

  i = 0;
  while (s[i])
  {
    i++;
  }
  return (i);
}

int   ft_strcmp(char *s1, char *s2)
{
  int s1len;
  int s2len;

  s1len = ft_strlen(s1);
  s2len = ft_strlen(s2);

  if (s1len == s2len)
  {
    int i;

    i = 0;
    while (i < s1len)
    {
      if (s1[i] - s2[i] == 0)
      {
        return (0);
      }
      else if (s1[i] - s2[i] > 0)
      {
        return (1);
      }
      else
      {
        return (-1);
      }
      i++;
    }
  }
  if ((s1len - s2len) > 0)
  {
    return (s1len - s2len);
  }
  if ((s2len - s1len) > 0)
  {
    return (s2len - s1len);
  }
}
