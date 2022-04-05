#include "base.h"

#include<string.h>
#include"draw.h"

void base::DrawGameGrid()
{
//	这里不可用出错！！！
//	memset(Grid,0,sizeof(Grid));
	
	for(int i=0;i<base::GridHeight;i++){
		for(int j=0;j<base::GridWidth;j++){
			Draw::ASquareBox(GtoA(GridPosition(j,i)),base::BaseGridWidth);
			//画一个基础网格
		}
		//TODO
	}
}

ActualLocation base::GtoA(GridPosition Location)
{
	ActualLocation Position;
	Position.x=Location.x*base::BaseGridWidth;
	Position.y=Location.y*base::BaseGridHeight;
	return Position;
}

GridPosition base::AtoG(ActualLocation Location)
{
	GridPosition Position;
	Position.x=Location.x/base::BaseGridWidth;
	Position.y=Location.y/base::BaseGridHeight;
	return Position;
}
