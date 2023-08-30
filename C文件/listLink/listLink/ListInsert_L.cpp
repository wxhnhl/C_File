Status ListInsert_L(LinkList &L,int i,ElemType e){
	p=L;j=0;
	while(p&&j<i-1){p=p->next;++j;}
	if(!p||j>i-1)  return ERROR;
	s=(LinkList)malloc(sizeof(LNode));
	s->data=e; s->next=p->next;
	p->next = s;
	return OK;
}//ListInsert_L