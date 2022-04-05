#include "draw.h"

#include<graphics.h>

void Draw::CreategameWindow() {
	initgraph(base::GetGameWinW(), base::GetGameWinH());
}

void Draw::CreategameWindow(int width, int height)
{
	initgraph(width,height);
}

void Draw::ClosegameWindow() {
	closegraph();
}

void Draw::ClearWindow() {
	cleardevice();
}

void Draw::RectangularBox(float x, float y, float w, float h) {
	ege_rectangle(x, y, w, h);
}

void Draw::ASquareBox(float x, float y, float SideLength) {
	RectangularBox(x, y, x + SideLength, y + SideLength);
}

void Draw::ASquareBox(ActualLocation Position, float SideLength) {
	ASquareBox(Position.x, Position.y, SideLength);
}

void Draw::MovegameWindow(int x,int y)
{
	//Ĭ���ƶ����ں����»��ƴ����е����� ������ͨ�����������������Ƿ����»���
	movewindow(x, y,true);
}

void Draw::Resizegamewindow(int width, int height)
{
	//�������ô��ڴ�С�󣬴������ݻ���գ������»��ƴ����е�����
	resizewindow(width,height);
}

IMAGE Draw::CreateAnImage(LPCSTR  filename)
{
	IMAGE Image=newimage(base::GetGameWinW(),base::GetGameWinH());
	if(getimage_pngfile(Image,filename)){
		exit(0);
		//TODO
	}
	return Image;
}

void Draw::FillInSqImage(int w,int h,IMAGE Image)
{
	putimage(h*base::GetUnitGridH(),w*base::GetUnitGridW(),
		base::GetUnitGridW(),base::GetUnitGridH(),Image,0,0);
}

void Draw::OutSqText(ActualLocation Position,LPCSTR text)
{
	outtextrect(Position.x,Position.y,Position.x+base::GetUnitGridH(),
		Position.y+base::GetUnitGridW(),text);
}
