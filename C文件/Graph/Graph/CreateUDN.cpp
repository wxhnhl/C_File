Status CreateUDN(MGraph &G){
	//采用数组（邻接矩阵）表示法，构造无向网
	scanf(&G.vexnum,&G.arcnum,&IncInfo);		//IncInfo为0则各弧不含其他信息
	for(i=0;i<G.vexnum;++i)		scanf(&G.vexs[i]);		//构造顶点向量
	for(i=0;i<G.vexnum;++i)						//初始化邻接矩阵
		for(j=0;j<G.vexnum;++j)			G.arcs[i][j]={INFINITY,NULL};		//{adj,info}
	for(k=0;k<G.arcnum;++k){			//构造邻接矩阵
		scanf(&v1,&v2,&w);				//输入一条边依附的顶点及权值
		i=LocateVex(G,v1);				j=LocateVex(G,v2);		//确定v1和v2在G中位置
		G.arcs[i][j].adj=w;				//弧<v1,v2>的权值
		if(IncInfo)	Input(*G.arcs[i][j].info);		//若弧含有相关信息，则输入
		G.arcs[j][i]=G.arcs[i][j];		//置<v1,v2>的对称弧<v2,v1>
	}
	return OK;
}//CreateUDN