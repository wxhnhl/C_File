Status InOrderThreading(BiThrTree &Thrt,BiThrTree T){
	//�������������T,������������������Thrtָ��ͷ���
	if(!(Thrt=(BiThrTree)malloc(sizeof(BiThrNode))))	exit(OVERFLOW);
	Thrt->LTag=Link;		Thrt->RTag=Thread;			//��ͷ���
	Thrt->rchild=Thrt;									//��ָ���ָ
	if(!T)	Thrt->lchild=Thrt;							//���������գ�����ָ���ָ
	else{
			Thrt->lchild=T;	pre=Thrt;
			InThreading(T);								//���������������������
			pre->rchild=Thrt;			pre->RTag=Thread;		//���һ�����������
			Thrt->right=pre;
	}
	return OK;
}//InOrderThreading