#ifndef BASE_H
#define BASE_H

//网格位置
struct GridPosition {
	GridPosition():x(0),y(0){}
	GridPosition(int x1,int y1):x(x1),y(y1){}
	int x;
	int y;
};
//实际位置
struct ActualLocation {
	ActualLocation():x(0),y(0){}
	ActualLocation(int x1,int y1):x(x1),y(y1){}
	int x;
	int y;
};

class base {
	public:
		void DrawGameGrid();

		//实际位置转换网格位置
		GridPosition AtoG(ActualLocation Location);
		//网格位置转换实际位置 (格子的左上角坐标)
		ActualLocation GtoA(GridPosition Location);

		static int GetGameWinH() {
			return GameWindowHeight;
		}
		static int GetGameWinW() {
			return GameWindowWidth;
		}
		static int GetUnitGridH(){
			return BaseGridHeight;
		}
		static int GetUnitGridW(){
			return BaseGridWidth;
		}
		static void SetGrid(int h,int w,int value)
		{
			Grid[h][w]=value;
		}
		static int GetGrid(int h,int w)
		{
			return Grid[h][w];
		}
	private:
		//设置网格长宽方向的格子个数
		static const int GridHeight = 9;
		static const int GridWidth = 12;
		
		static int Grid[GridHeight][GridWidth];
		
		//设置单位网格中格子的长宽
		static const int BaseGridHeight = 80;
		static const int BaseGridWidth = BaseGridHeight;

		static const int GameWindowHeight = GridHeight * BaseGridHeight;
		static const int GameWindowWidth = GridWidth * BaseGridWidth;
};

#endif
