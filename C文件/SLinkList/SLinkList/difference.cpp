void difference(SLinkList &space,int &S){
	//�������뼯��A��B��Ԫ�أ���һά����space�н�����ʾ���ϣ�A-B������B-A��
	//�ľ�̬����SΪ��ͷָ�룬���豸�ÿռ��㹻��space[0].curΪ��ͷָ��
	InitSpace_SL(space);
	S=Malloc_SL(space);
	r=S;	//rָ��S�ĵ�ǰ�����
	scanf(m,n);
	for(j=1;j<=m;++j){				//��������A������
		i=Malloc_SL(space);
		scanf(space[i].data);
		space[r].cur=i;
		r=i;
	}
	space[r].cur=0;
	for(j=1;j<=n;++j){
	scanf(b); p=S; k=space[S].cur;   //kָ�򼯺�A�ĵ�һ�����
	while(k!=space[r].cur&&space[k].data!=b)
	{p=k; k=space[k].cur;}
	if(k==space[r].cur;){			//��ǰ���в����ڸ�Ԫ�أ�������r��ָ���֮����r��λ�ò���
		i=Malloc_SL(space);
		space[i].data=b;
		space[i].cur=space[r].cur;
		space[r].cur=i;
	}
	else{							//	��Ԫ�����ڱ��У�ɾ��֮
		space[p].cur=space[k].cur;
		Free_SL(space,k);
		if(r==k) r=p;				//��ɾ������r��ָ��㣬����Ҫ�޸�βָ��
	}//else
	}//for
}//difference