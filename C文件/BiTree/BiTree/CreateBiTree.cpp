Status CreateBiTree(BiTree &T){
		//�������������������н���ֵ��һ���ַ������ո��ַ���ʾ����
		//������������ʾ�Ķ�����T
	scanf(&ch);
	if(ch=='')		T=NULL:
	else{
		if(!(T=(BiNode *)malloc(sizeof(BiNode))))		exit(OVERFLOW);
		T->data=ch;							//���ɸ����
		CreateBiTree(T->lchild);			//����������
		CreateBiTree(T->rchild);			//����������
	}
	return OK;
}//CreateBiTree