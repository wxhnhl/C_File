Status	EnQueue(SqQueue &Q,QElemType e){
	//����Ԫ��eΪQ���µĶ�βԪ��
	if((Q.rear+1)%MAXQsIZE==Q.front)	return ERROR;		//������
	Q.base[Q.rear]=e;
	Q.rear=(Q.rear+1)%MAXQSIZE;
	return OK;
}