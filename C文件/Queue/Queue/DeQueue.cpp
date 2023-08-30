Status DeQueue(LinkQueue &Q,QElemType &e){
	//若队列不空，则删除队头元素，并用e返回其值，并返回OK；否则返回ERROR;
	if(Q.front==Q.rear)  return ERROR;
	p = Q.front->next;
	e=p->data;
	Q.front->next=p->next;
	if(Q.rear==p)
	{Q.rear=Q.front;
	}
	free(p);
	return OK;
}