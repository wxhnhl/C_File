Status CreateUDN(MGraph &G){
	//�������飨�ڽӾ��󣩱�ʾ��������������
	scanf(&G.vexnum,&G.arcnum,&IncInfo);		//IncInfoΪ0���������������Ϣ
	for(i=0;i<G.vexnum;++i)		scanf(&G.vexs[i]);		//���춥������
	for(i=0;i<G.vexnum;++i)						//��ʼ���ڽӾ���
		for(j=0;j<G.vexnum;++j)			G.arcs[i][j]={INFINITY,NULL};		//{adj,info}
	for(k=0;k<G.arcnum;++k){			//�����ڽӾ���
		scanf(&v1,&v2,&w);				//����һ���������Ķ��㼰Ȩֵ
		i=LocateVex(G,v1);				j=LocateVex(G,v2);		//ȷ��v1��v2��G��λ��
		G.arcs[i][j].adj=w;				//��<v1,v2>��Ȩֵ
		if(IncInfo)	Input(*G.arcs[i][j].info);		//�������������Ϣ��������
		G.arcs[j][i]=G.arcs[i][j];		//��<v1,v2>�ĶԳƻ�<v2,v1>
	}
	return OK;
}//CreateUDN