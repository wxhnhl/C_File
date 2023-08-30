void Inthreading(BiThreading p){
	if(p){InThreading(p->lchild);			//左子树线索化
	if(!p->lchild){p->LTag=Thread;	p->leftchild=pre;}		//前驱线索
	if(!pre->rchild)		{pre->RTag=Thread;  pre->rchild=p;}//后继线索
	pre=p;									//保持pre指向p的前驱
	InThreading(p->rchild);					//右子树线索化
	}
}//InThreading