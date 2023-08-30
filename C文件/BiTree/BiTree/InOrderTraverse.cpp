Status InOrderTraverse(BiTree T,Status(*Visit)(TElemType e)){
	//采用二叉链表存储结构，Visit是对数据元素操作的应用函数
	//中序便利二叉树的非递归算法，对每个数据元素调用函数Visit
	InitStack(S);	Push(S,T);		//根指针进栈
	while(!StackEmpty(S)){
		while(GetTop(S,p)&&p)	Push(S,p->lchild);		//向左走到尽头
		Pop(S,p);					//空指针退栈
		if(!StackEmpty(S)){			//访问结点，向右一步
				Pop(S,p);			if(!Visit(p->data))		return ERROR;
				Push(S,p->rchild);
		}//if
	}//while
	return OK;
}//InOrderTraverse