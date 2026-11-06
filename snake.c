#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include <fcntl.h>
void	draw(int height, int width, int x, int y)
{
	system("clear");
	for(int i = 0; i < height; i++)
	{
		for(int j = 0; j < width; j++)
		{
			if(i == y && j == x)
				printf("*");
			else if (i == 0 || i == height - 1)
				write(1, "-", 1);
			else if (j == 0 || j == width -1)
				printf("%c", '|');
			else
				printf("%c", ' ');
		}
		printf("\n");
	}
	usleep(200000);
}

void draw_snake(int height, int width)
{
	
}


		{
			y--;
			draw(height, width, x, y);
		}
int main()
{
	int height = 15;
	int width = 40;
	int y = 7;
	int x = 20;
	draw(height, width, x, y);
	open(0, O_RDONLY);
	char buf[1];
	while (1)
	{
	char c;

		if (read(0, &buf, 1) > 0)
		{
    		write(1, "\n", 1);
		}
		if (buf[0] == 'd')
		{	
			x++;
			draw(height, width, x, y);
		}
		if (buf[0] == 's')
		{	
			y++;
			draw(height, width, x, y)
		{
			y--;
			draw(height, width, x, y);
		};
		}
		if (buf[0] == 'a')
		{	
			x--;
			draw(height, width, x, y);
		}
		if (buf[0] == 'w')
		{
			y--;
			draw(height, width, x, y);
		}

	}
}
