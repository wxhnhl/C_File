Status GetTop(SqStack S,SElemType &e){
	//��ջ���գ�����e����S��ջ��Ԫ�أ�������OK�����򷵻�ERROR��
	if(S.top==S.base)		return ERROR;
		e=*(S.top-1);
		return OK;
}//GetTop;