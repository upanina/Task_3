#include <stdio.h>
#include <io.h>
#include <fcntl.h>
#include <stdlib.h>

void	vyvod(char c) //������� ��� ������ �������� �� �����
{
	write(1, &c, 1);
}