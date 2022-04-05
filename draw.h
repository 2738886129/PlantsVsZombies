#ifndef DRAW_H
#define DRAW_H

#include<graphics.h>
#include"base.h"
#define IMAGE PIMAGE

class Draw {
public:
	static void CreategameWindow();
	static void CreategameWindow(int width, int height);
	static void ClosegameWindow();
	static void ClearWindow();
	static void Resizegamewindow(int width, int height);
	static void MovegameWindow(int x,int y);
	static void RectangularBox(float x,float y,float w,float h);
	static void ASquareBox(float x,float y,float SideLength);
	static void ASquareBox(ActualLocation Position,float SideLength);
	static IMAGE CreateAnImage(LPCSTR  filename);
	static void FillInSqImage(int w,int h,IMAGE Image);
	static void OutSqText(ActualLocation Position,LPCSTR text);
private:
	
};

#endif
