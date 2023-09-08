/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_line.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kramjatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 19:32:44 by kramjatt          #+#    #+#             */
/*   Updated: 2022/08/28 19:32:48 by kramjatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*tab_line(char pnt, int nxt)
{
	char	taba[6][4] = {{'4', '1', '2', '3'}, {'4', '2', '1', '3'},
	{'4', '1', '3', '2'}, {'4', '2', '3', '1'},
	{'4', '3', '1', '2'}, {'4', '3', '2', '1'}};
	char	tabb[11][4] = {{'3', '1', '2', '4'}, {'3', '2', '1', '4'},
	{'1', '4', '2', '3'}, {'2', '1', '4', '3'},
	{'2', '4', '1', '3'}, {'3', '1', '4', '2'},
	{'3', '2', '4', '1'}, {'3', '4', '1', '2'},
	{'1', '4', '3', '2'}, {'2', '4', '3', '1'},
	{'3', '4', '2', '1'}};
	char	tabc[6][4] = {{'1', '3', '2', '4'}, {'2', '1', '3', '4'},
	{'2', '3', '1', '4'}, {'1', '2', '4', '3'},
	{'2', '3', '4', '1'}, {'1', '3', '4', '2'}};
	char	tabd[4] = {'1', '2', '3', '4'};

	if (pnt == '1')
	{
		if (nxt > 5)
			nxt = 5;
		return (taba[nxt]);
	}
	if (pnt == '2')
	{
		if (nxt > 10)
			nxt = 10;
		return (tabb[nxt]);
	}
	if (pnt == '3')
	{
		if (nxt > 5)
			nxt = 5;
		return (tabc[nxt]);
	}
	if (pnt == '4')
		return (tabd);
	return (tabc[0]);
}
