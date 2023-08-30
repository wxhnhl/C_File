typedef	struct{
	Triple data[MAXSIZE+j];			//非零元三元组表
	int rpos[MAXRC+1];				//各行第一个非零元素的位置表
	int mu,nu,tu;					//矩阵的行数，列数和非零元个数
}RLSMatrix;