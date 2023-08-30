Status	EnQueue(SqQueue &Q,QElemType e){
	//插入元素e为Q的新的队尾元素
	if((Q.rear+1)%MAXQsIZE==Q.front)	return ERROR;		//队列满
	Q.base[Q.rear]=e;
	Q.rear=(Q.rear+1)%MAXQSIZE;
	return OK;
}