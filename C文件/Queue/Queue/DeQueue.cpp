Status DeQueue(LinkQueue &Q,QElemType &e){
	//�����в��գ���ɾ����ͷԪ�أ�����e������ֵ��������OK�����򷵻�ERROR;
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