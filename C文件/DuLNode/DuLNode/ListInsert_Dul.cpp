Status ListInsert_DuL(DuLinkList &L,int i,ElemType e){
	//�ڴ�ͷ����˫��ѭ�����Ա�L�е�i��λ��֮ǰ����Ԫ��e
	//i�ĺϷ�ֵΪ1<=i<=��+1
 if(!(p=GetElemP_DuL(L,i)))  //��L��ȷ������λ��ָ��p
		return ERROR;		//i���ڱ���1ʱ��pָ��ͷ��㣻i���ڱ���һʱ��p=NULL;
 if(!(s=(DuLinkList)malloc(sizeof(DuLnode))))  return ERROR;
 s->data=e;
  s->prior=p->prior; 
  p->prior->next=s;
  p->prior=s;
  s->next=p;
  return OK;
}//ListInsert_DuL