Status	InitQueue(SqQueue &Q){
	����һ���ն���Q
	Q.base=(QElemType)malloc(MAXSIZE*sizeof(QElemType));
	if(!Q.base) exit(OVERFLOW);
	Q.front =Q.rear=0;
	return OK;
}