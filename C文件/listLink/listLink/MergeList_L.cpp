void MergeList_L(LinkList &La,LinkList &Lb,LinkList&Lc){
	//已知单链线性表La和Lb的元素按值非递减排列
	//归并La和Lb得到新的单链线性表Lc,Lc元素的值也按值非递减排列
	pa=La->next; pb=Lb->next;
	Lc=pc=La;//用La的头结点作为Lc的头结点
	while(pa&&pb){
		if(pa->data<=pb->data) {
		pc->next=pa; pc=pa; pa=pa->next;}
	}
	else{pc->next=pb;pc=pb;pb=pb->next;}
}
	pc->next=pa?pa:pb;//插入剩余段
	free(Lb);
}