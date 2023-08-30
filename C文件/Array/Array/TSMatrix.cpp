#define  MAXSIZE 12500		//假设非零元个数的最大值为12500
typedef struct{
	int i,j;
	ElemType e;
}Triple;

typedef struct{
	Triple data[MAX_SIZE=1];			//非零元三元组表，data[0]未用
	int mu,nu,tu;						//矩阵的行数，列数和非零元个数
}TSMatrix;