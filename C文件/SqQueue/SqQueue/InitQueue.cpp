Status	InitQueue(SqQueue &Q){
	构造一个空队列Q
	Q.base=(QElemType)malloc(MAXSIZE*sizeof(QElemType));
	if(!Q.base) exit(OVERFLOW);
	Q.front =Q.rear=0;
	return OK;
}