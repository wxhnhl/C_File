Status InitQueue(LinkQueue &Q){
	//构造一个空队列Q
	Q.front=Q.rear=(QueuePtr)malloc(sizeof(QNode));
	if(!Q.front)	exit(OVERFLOW);
	Q.front->next=NULL;
	return OK;
}