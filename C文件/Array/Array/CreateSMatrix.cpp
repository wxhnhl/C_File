Status CreateSMatix_OL(CrossList &M){
	//����ϡ�����M������ʮ������洢��ʾ
	if(M)	free(M);
	scanf(&m,&n,&t);				//����M�������������ͷ���Ԫ����
	M.mu=m;			M.nu=n;			M.tu=t;
	if(!(M.rhead=(OLink *)malloc((m+1)*sizeof(OLink))))		exit(OVERFLOW);
	if(!(M.chead=(OLink *)malloc((n+1)*sizeof(OLink))))		exit(OVERFLOW);
	M.rhead[]=M.chead[]=NULL;		//��ʼ������ͷָ������������������Ϊ������
	for(scanf(&i,&j,&e);i!=0;scanf(&i,&j,&e)){//����������������Ԫ
		if(!(p=(OLNode *)malloc(sizeof(OLNode))))	exit(OVERFLOW);
		p->i=i;		p->j=j;		p->e=e;			//���ɽ��
		if(M.rhead[i]==NULL||M.rhead[i].j>j){p->right = M.rhead[i];	M.rhead[i]=p;}
		else{	//Ѱ�����б��еĲ���λ��
			for(q=M.rhead[i];(q->right)&&q->right->j<j;q=q->right);
			p->right=q->right; q->right=p;}//����в���
		if(M.chead[j]==NULL||M.chead[j]->i>i){p->down=M.chead[j];	M.chead[j]=p;}
		else{			//Ѱ�����б��еĲ���λ��
			for(q=M.chead[j];(q->down)&&q->down->i<i;q->down);
			p->down=q->down;	q->down=p;}//����в���
	}
	return OK;
}//CreateSMatrix_OL