Status PreOrderTraverse(BiTree T,Status(* Visit)(TElemType e)){
	//���ö�������洢�ṹ��Visit�Ƕ�����Ԫ�ز�����Ӧ�ú�����
	//�������������T�ĵݹ��㷨����ÿ������Ԫ�ص��ú���Visit
	//��򵥵�Visit�����ǣ�
	//			Status PrintElement(TElemType e){		//���Ԫ��e��ֵ
	//				printf(e);							//ʵ��ʱ�����ϸ�ʽ��
	//				return OK;
	//}
	

	//����ʵ����PreOrderTraverse(T,PrintElement);
	if(T){
		if(Visit(T->data))
			if(PreOrderTraverse(T->lchild,visit))
				if(PreOrderverse(T->rchild,vist))		return OK;
	return ERROR;
	}else return OK;
}//PreOrderOverse