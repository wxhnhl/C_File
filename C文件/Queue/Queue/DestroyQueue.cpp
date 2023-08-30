Status DestroyQueue(LinkQueue &Q){
	//Ïú»Ù¶ÓÁÐQ
	while(Q.front){
	Q.rear=Q.front->next;
	free(Q.front);
	Q.front=Q.rear;
	}
	return OK;
}