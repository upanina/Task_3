void	vyvod(char c);

void	dlina(int x, int y) //вывод символов в столбцы
{
	int	i;
	int	count;

	if (y > 1)
	{
		count = 0;
		while (count < (y - 2))
		{
			vyvod('\n');
			vyvod('B');
			i = 0;
			while (i < (x - 2))
			{
				vyvod(' ');
				++i;
			}
			if (x > 1)
				vyvod('B');
			++count;
		}
	}
}

void	niz(int x, int y)  //вывод символов в нижний ряд
{
	int	i;

	if (x > 0 && y > 1)
	{
		vyvod('\n');
		vyvod('C');
		i = 0;
		while (i < (x - 2))
		{
			vyvod('B');
			++i;
		}
		if (x > 1)
			vyvod('C');
	}
	if (x > 0 && y > 0)
		vyvod('\n');
}

void	rush(int x, int y) //вывод символов в верхний ряд
{
	int	i;

	if (x > 0 && y > 0)
		vyvod('A');
	i = 0;
	while (i < (x - 2) && y > 0)
	{
		vyvod('B');
		++i;
	}
	if (x > 1 && y > 0)
		vyvod('A');
	dlina(x, y);
	niz(x, y);
}