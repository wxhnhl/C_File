void CreateList_L(LinkList &L,int n){
//����������n��Ԫ�ص�ֵ����������ͷ���ĵ������Ա�L
	L=(Linklist)malloc(sizeof(LNode));
	L->next=NULL;
	for(i=n;i>0;--i){
		p=(LinkList)malloc(sizeof(LNode));
	scanf(&p->data);//����Ԫ��ֵ
	p->next=L->next;
	L->next=p;//���뵽��ͷ
	}
}//CreateList_L