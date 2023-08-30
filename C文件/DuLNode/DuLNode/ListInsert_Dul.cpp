Status ListInsert_DuL(DuLinkList &L,int i,ElemType e){
	//在带头结点的双链循环线性表L中第i个位置之前插入元素e
	//i的合法值为1<=i<=表长+1
 if(!(p=GetElemP_DuL(L,i)))  //在L中确定插入位置指针p
		return ERROR;		//i等于表长加1时，p指向头结点；i大于表长加一时，p=NULL;
 if(!(s=(DuLinkList)malloc(sizeof(DuLnode))))  return ERROR;
 s->data=e;
  s->prior=p->prior; 
  p->prior->next=s;
  p->prior=s;
  s->next=p;
  return OK;
}//ListInsert_DuL