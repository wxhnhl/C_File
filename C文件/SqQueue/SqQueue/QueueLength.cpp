int QueueLength(SqQueue Q){
	//����Q��Ԫ�ظ����������еĳ���
	return(Q.rear-Q.front+MAXQSIZE)%MAXQSIZE;
}