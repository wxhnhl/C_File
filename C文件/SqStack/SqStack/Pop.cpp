Status Pop(SqStack &S,SElentype &e){
	//��ջ���գ���ɾ��S��ջ��Ԫ�أ���e������ֵ��������OK,���򷵻�ERROR
	if(S.top==S.base) return ERROR;
	e=*--S.top;
	return  OK;
}//pop