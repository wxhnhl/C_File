Status GetElem_L(LinkList L,int i,ElemType &e){
	p=L->next;
	j=1;
	while(p&&j<i){p=p->next;++j;}
	if(!p||j>i) return ERROR;
	e=p->data;
	return OK;
}//GetElem_L