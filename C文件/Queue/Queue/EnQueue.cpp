void Enqueue(LinkQueue &Q,QElemType e){
	//����Ԫ��eΪQ���¶�βԪ��
	p=(QueuePtr)mallco(sizeof(QNode));
	if(!p) exit(OVERFLOW);
	p->data=e;
	Q.rear->next=p;
	Q.rear=p;
	p->next=NULL:
	return OK;
}