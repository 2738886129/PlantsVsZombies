#ifndef BASE_H
#define BASE_H

//����λ��
struct GridPosition {
	GridPosition():x(0),y(0){}
	GridPosition(int x1,int y1):x(x1),y(y1){}
	int x;
	int y;
};
//ʵ��λ��
struct ActualLocation {
	ActualLocation():x(0),y(0){}
	ActualLocation(int x1,int y1):x(x1),y(y1){}
	int x;
	int y;
};

class base {
	public:
		void DrawGameGrid();

		//ʵ��λ��ת������λ��
		GridPosition AtoG(ActualLocation Location);
		//����λ��ת��ʵ��λ�� (���ӵ����Ͻ�����)
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
		//�������񳤿���ĸ��Ӹ���
		static const int GridHeight = 9;
		static const int GridWidth = 12;
		
		static int Grid[GridHeight][GridWidth];
		
		//���õ�λ�����и��ӵĳ���
		static const int BaseGridHeight = 80;
		static const int BaseGridWidth = BaseGridHeight;

		static const int GameWindowHeight = GridHeight * BaseGridHeight;
		static const int GameWindowWidth = GridWidth * BaseGridWidth;
};

#endif
