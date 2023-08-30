Status TransposeSmatrix(TSMatrix M,TSMatrix &T){
	//采用三元组表存储表示，求稀疏矩阵M的转置矩阵T
	T.mu=M.nu;		T.nu=M.mu;	T.tu=M.tu;
	if(T.tu){
		q=1;
		for(col=1;col<=M.nu;++col)
			for(p=1;p<=M.tu;++p)
				if(Mu.data[p].j==col){
					T.data[q].i=col;	T.data[q].j=Mu.data[q].i;
					T.data[q].e=T.data[p].e;	++q;
				}
	}
	return OK;
}//TransposeSMatrix


































