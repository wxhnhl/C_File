Status CreateGraph(MGraph &G){
	//�������飨�ڽӾ��󣩱�ʾ��������ͼG;
	scanf(&G.kind);
	switch(G.kind){
		case DG:return CreateDG(G);				//��������ͼG
		case DN:return CreateDN(G);				//����������G
		case UDG:return CreateUDG(G);			//��������ͼG
		case UDN:return CreateUDN(G)			//����������G
		default:return ERROR;
	}
}//CreateGraph
