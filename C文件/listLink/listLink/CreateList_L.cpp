void CreateList_L(LinkList &L,int n){
//逆序数输入n个元素的值，建立带表头结点的单链线性表L
	L=(Linklist)malloc(sizeof(LNode));
	L->next=NULL;
	for(i=n;i>0;--i){
		p=(LinkList)malloc(sizeof(LNode));
	scanf(&p->data);//输入元素值
	p->next=L->next;
	L->next=p;//插入到表头
	}
}//CreateList_L