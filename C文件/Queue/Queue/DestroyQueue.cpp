Status DestroyQueue(LinkQueue &Q){
	//���ٶ���Q
	while(Q.front){
	Q.rear=Q.front->next;
	free(Q.front);
	Q.front=Q.rear;
	}
	return OK;
}