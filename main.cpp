#include"draw.h"
#include"base.h"
#include<graphics.h>


int main()
{
	Draw::CreategameWindow();
	base a;
	a.DrawGameGrid();
	getch();
	Draw::ClosegameWindow();
	return 0;
}
