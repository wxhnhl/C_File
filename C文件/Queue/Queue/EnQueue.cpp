void Enqueue(LinkQueue &Q,QElemType e){
	//插入元素e为Q的新队尾元素
	p=(QueuePtr)mallco(sizeof(QNode));
	if(!p) exit(OVERFLOW);
	p->data=e;
	Q.rear->next=p;
	Q.rear=p;
	p->next=NULL:
	return OK;
}