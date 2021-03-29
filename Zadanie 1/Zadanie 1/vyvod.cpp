#include <stdio.h>
#include <io.h>
#include <fcntl.h>
#include <stdlib.h>

void	vyvod(char c) //функция для вывода символов на экран
{
	_write(1, &c, 1);
}