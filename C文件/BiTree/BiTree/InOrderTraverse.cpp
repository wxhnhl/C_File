Status InOrderTraverse(BiTree T,Status(*Visit)(TElemType e)){
	//���ö�������洢�ṹ��Visit�Ƕ�����Ԫ�ز�����Ӧ�ú���
	//��������������ķǵݹ��㷨����ÿ������Ԫ�ص��ú���Visit
	InitStack(S);	Push(S,T);		//��ָ���ջ
	while(!StackEmpty(S)){
		while(GetTop(S,p)&&p)	Push(S,p->lchild);		//�����ߵ���ͷ
		Pop(S,p);					//��ָ����ջ
		if(!StackEmpty(S)){			//���ʽ�㣬����һ��
				Pop(S,p);			if(!Visit(p->data))		return ERROR;
				Push(S,p->rchild);
		}//if
	}//while
	return OK;
}//InOrderTraverse