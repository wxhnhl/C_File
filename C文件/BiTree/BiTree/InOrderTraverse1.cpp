Status InOrderTraverse(BiTree T,Status(*Visit)(ElemType e)){
	//���ö�������洢�ṹ��Visit�Ƕ�����Ԫ�ز�����Ӧ�ú���
	//�������������T�ķǵݹ��㷨����ÿ������Ԫ�ص��ú���Visit
	InitStack(S);	p=T;
	while(p||!StackEmpty(S)){
		if(p)	{Push(S,p);		p=p->lchild;}//��ָ���ջ������������
		else{				//��ָ����ջ�����ʸ���㣬����������
			pop(S,p);		if(!Visit(p->data))		return ERROR;
			p=p->rchild;
		}//else
	}//While
	return OK;
}//InoOrderTraverse