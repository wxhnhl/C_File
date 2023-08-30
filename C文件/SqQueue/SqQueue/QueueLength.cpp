int QueueLength(SqQueue Q){
	//返回Q的元素个数，即队列的长度
	return(Q.rear-Q.front+MAXQSIZE)%MAXQSIZE;
}