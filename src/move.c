#include "among3D.h"

void	ft_w_press(t_data *data)
{
	data->plr->x += cos(data->plr->pov) * MOVE_SPEED;
	ft_move_check(data, data->plr, 1, -cos(data->plr->pov));
	data->plr->y += sin(data->plr->pov) * MOVE_SPEED;
	ft_move_check(data, data->plr, 0, -sin(data->plr->pov));
}

void	ft_s_press(t_data *data)
{
	data->plr->x -= cos(data->plr->pov) * MOVE_SPEED;
	ft_move_check(data, data->plr, 1, cos(data->plr->pov));
	data->plr->y -= sin(data->plr->pov) * MOVE_SPEED;
	ft_move_check(data, data->plr, 0, sin(data->plr->pov));
}

void	ft_a_press(t_data *data)
{
	data->plr->x += sin(data->plr->pov) * MOVE_SPEED;
	ft_move_check(data, data->plr, 1, -sin(data->plr->pov));
	data->plr->y -= cos(data->plr->pov) * MOVE_SPEED;
	ft_move_check(data, data->plr, 0, cos(data->plr->pov));
}

void	ft_d_press(t_data *data)
{
	data->plr->x -= sin(data->plr->pov) * MOVE_SPEED;
	ft_move_check(data, data->plr, 1, sin(data->plr->pov));
	data->plr->y += cos(data->plr->pov) * MOVE_SPEED;
	ft_move_check(data, data->plr, 0, -cos(data->plr->pov));
}

int		ft_button_press(int butt, t_data *data)
{
	butt == 13 ? ft_w_press(data) : 0;
	butt == 1 ? ft_s_press(data) : 0;
	butt == 0 ? ft_a_press(data) : 0;
	butt == 2 ? ft_d_press(data) : 0;
	butt == 123 ? data->plr->pov -= 0.04 : 0;
	butt == 124 ? data->plr->pov += 0.04 : 0;
	butt == 53 ? exit(0) : 0;
	return (0);
}
