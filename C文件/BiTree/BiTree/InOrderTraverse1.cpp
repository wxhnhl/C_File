Status InOrderTraverse(BiTree T,Status(*Visit)(ElemType e)){
	//采用二叉链表存储结构，Visit是对数据元素操作的应用函数
	//中序遍历二叉树T的非递归算法，对每个数据元素调用函数Visit
	InitStack(S);	p=T;
	while(p||!StackEmpty(S)){
		if(p)	{Push(S,p);		p=p->lchild;}//根指针进栈，遍历左子树
		else{				//根指针退栈，访问根结点，遍历右子树
			pop(S,p);		if(!Visit(p->data))		return ERROR;
			p=p->rchild;
		}//else
	}//While
	return OK;
}//InoOrderTraverse