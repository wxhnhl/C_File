Status InitQueue(LinkQueue &Q){
	//����һ���ն���Q
	Q.front=Q.rear=(QueuePtr)malloc(sizeof(QNode));
	if(!Q.front)	exit(OVERFLOW);
	Q.front->next=NULL;
	return OK;
}