Status CreateDG(OLGraph &G){
	//����ʮ������洢��ʾ����������ͼG(G.kind=DG)
	scanf(&G.vexnum,&G.arcnum,&IncInfo);				//IncInfoΪ0���������������Ϣ
	for(i=0;i<G.vexnum;++i){		//�����ͷ����
		scanf(&G.xlist[i].data);	//���붥��ֵ
		G.xlist[i].fistin=NULL;		G.xlist[i].fistout=NULL;		//��ʼ��ָ��
	}
	for(k=0;k<G.arcnum;++k){							//�������������ʮ������
		scanf(&v1,&v2);									//����һ������ʼ����յ�
		i=LocateVex(G,v1);	j=LocateVex(G,v2);			//ȷ��v1��v2��G��λ��
		p=(ArcBox *)malloc(sizeof(ArcBox));				//�ٶ����㹻�ռ�
		*p={i,j,G.xlist[j].firstin,G.xlist[i].firstout,NULL};	//�Ի���㸳ֵ
		G.xlist[i].firstout=p;		G.xlist[j].firstout=p;		//������뻡�ͳ�����ͷ�Ĳ���
	}
		if(IncInfo)	Input(*p->info);				//�������������Ϣ��������
}
}//CreateDG