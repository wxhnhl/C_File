Status InOrderTraverse_Thr(BiThrTree T,Status(*Visit)(TElemType e)){
	//Tָ��ͷ��㣬ͷ��������lchildָ�����㣬�ɲμ��������㷨
	//�����������������T�ķǵݹ��㷨����ÿ������Ԫ�ص��ú���Visit
	p=T->lchild;		//pָ������
	while(p!=T){
		while(p->LTag==Link)	p=p->lchild;
		if(!Visit(p->data))		return ERROR;		//������������Ϊ�յĽ��
		while(p->RTag==Thread&&p->rchild!=T){
			while(p->RTag==Thread&&p->rchild!=T){
				p=p->rchild;	Visit(p->data);		//���ʺ�̽��
			}
			p=p->rchild;
		}
		return OK;
}//InOrderTraverse_Thr