void Inthreading(BiThreading p){
	if(p){InThreading(p->lchild);			//������������
	if(!p->lchild){p->LTag=Thread;	p->leftchild=pre;}		//ǰ������
	if(!pre->rchild)		{pre->RTag=Thread;  pre->rchild=p;}//�������
	pre=p;									//����preָ��p��ǰ��
	InThreading(p->rchild);					//������������
	}
}//InThreading