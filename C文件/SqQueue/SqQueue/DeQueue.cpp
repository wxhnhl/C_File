Status DeQueue(SqQueue &S,QElemType &e){
	//�����в��գ���ɾ��Q�Ķ�ͷԪ�أ���e������ֵ��������OK;
	//���򷵻�ERROR
	if(Q.front=Q.rear) return ERROR;
	e=Q.base[Q.front];
	Q.front=(Q.front+1)%MAXQSIZE;
	return OK;
}