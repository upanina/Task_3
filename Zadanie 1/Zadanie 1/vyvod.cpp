#include <stdio.h>
#include <io.h>
#include <fcntl.h>
#include <stdlib.h>

void	vyvod(char c) //������� ��� ������ �������� �� �����
{
	_write(1, &c, 1);
}