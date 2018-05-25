/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 16:41:40 by gscott            #+#    #+#             */
/*   Updated: 2018/05/25 16:41:55 by gscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int        ft_word_count(char *str)
{
    int word_count;
    int i;

    i = 0;
    word_count = 0;
    while (str[i])
    {
        if ((str[i] == '\t' || str[i] == '\n' || str[i] == ' ') && str[i])
        {
            i++;
            word_count++;
        }
        while (str[i] != '\t' && str[i] != '\n' && str[i] != ' ' && str[i])
            i++;
    }
    return (word_count);
}

char    *ft_get_current_word(char *str)
{
    int        i;
    char    *word;
    int        cnt;

    i = 0;
    cnt = 0;
    while (str[cnt] != '\t' && str[cnt] != '\n' && str[cnt] != ' ' && str[cnt])
    {
        cnt++;
    }
    word = (char *)malloc(sizeof(char)* (cnt + 1));
    while (str[i] != '\t' && str[i] != '\n' && str[i] != ' ' && str[i])
    {
        word[i] = str[i];
        i++;
    }
    word[i] = '\0';
    return (word);
}

char    **ft_split_whitespaces(char *str)
{
    char    **new_string;
    int        i;
    int        current_wc;
    int        word_count;

    i = 0;
    current_wc = 0;
    word_count = ft_word_count(str);
    new_string = (char **)malloc(sizeof(char*) * (word_count + 1));
    while (str[i])
    {
        if (str[i] != '\t' && str[i] != '\n' && str[i] != ' ')
        {
            new_string[current_wc] = ft_get_current_word(&str[i]);
            current_wc++;
            i++;
            while (str[i] != '\t' && str[i] != '\n' && str[i] != ' ' && str[i])
                i++;
        }
        else
            i++;
    }
    new_string[current_wc] = 0;
    return (new_string);
}
