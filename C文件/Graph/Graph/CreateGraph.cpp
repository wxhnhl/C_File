Status CreateGraph(MGraph &G){
	//采用数组（邻接矩阵）表示法，构造图G;
	scanf(&G.kind);
	switch(G.kind){
		case DG:return CreateDG(G);				//构造有向图G
		case DN:return CreateDN(G);				//构造有向网G
		case UDG:return CreateUDG(G);			//构造无向图G
		case UDN:return CreateUDN(G)			//构造无向网G
		default:return ERROR;
	}
}//CreateGraph
