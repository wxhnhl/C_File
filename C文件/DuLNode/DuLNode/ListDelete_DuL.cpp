Status ListDelete_DuL(DuLinkList &L,int i,ElemType &e){
	if(!(p=GetElemP_DuL(L,i)))
		return ERROR;
	e=p->data;
	p->prior->next=p->next;
	p->next->prior=p->prior;
	free(p);
	return OK;
}//ListDelete_DuL