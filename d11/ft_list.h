/*
** L. K. created Aug. 28 2017
** file name: ft_list.h
**
**
*/

#ifndef FT_LIST_H
#define FT_LIST_H

typedef struct s_list
{
	struct s_list *next;
	void	*data;
} t_list;
