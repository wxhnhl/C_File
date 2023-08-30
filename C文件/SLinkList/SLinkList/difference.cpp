void difference(SLinkList &space,int &S){
	//依次输入集合A和B的元素，在一维数组space中建立表示集合（A-B）并（B-A）
	//的静态链表，S为其头指针，假设备用空间足够大，space[0].cur为其头指针
	InitSpace_SL(space);
	S=Malloc_SL(space);
	r=S;	//r指向S的当前最后结点
	scanf(m,n);
	for(j=1;j<=m;++j){				//建立集合A的链表
		i=Malloc_SL(space);
		scanf(space[i].data);
		space[r].cur=i;
		r=i;
	}
	space[r].cur=0;
	for(j=1;j<=n;++j){
	scanf(b); p=S; k=space[S].cur;   //k指向集合A的第一个结点
	while(k!=space[r].cur&&space[k].data!=b)
	{p=k; k=space[k].cur;}
	if(k==space[r].cur;){			//当前表中不存在该元素，插入在r所指结点之后，且r的位置不在
		i=Malloc_SL(space);
		space[i].data=b;
		space[i].cur=space[r].cur;
		space[r].cur=i;
	}
	else{							//	该元素已在表中，删除之
		space[p].cur=space[k].cur;
		Free_SL(space,k);
		if(r==k) r=p;				//若删除的是r所指结点，则需要修改尾指针
	}//else
	}//for
}//difference