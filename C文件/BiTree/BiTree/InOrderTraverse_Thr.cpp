Status InOrderTraverse_Thr(BiThrTree T,Status(*Visit)(TElemType e)){
	//T指向头结点，头结点的左链lchild指向根结点，可参见线索化算法
	//中序遍历二叉线索树T的非递归算法，对每个数据元素调用函数Visit
	p=T->lchild;		//p指向根结点
	while(p!=T){
		while(p->LTag==Link)	p=p->lchild;
		if(!Visit(p->data))		return ERROR;		//访问其左子树为空的结点
		while(p->RTag==Thread&&p->rchild!=T){
			while(p->RTag==Thread&&p->rchild!=T){
				p=p->rchild;	Visit(p->data);		//访问后继结点
			}
			p=p->rchild;
		}
		return OK;
}//InOrderTraverse_Thr