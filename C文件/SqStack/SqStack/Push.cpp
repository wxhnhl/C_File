Status Push(SqStack &s,SElemType e){
	//����Ԫ��eΪ�µ�ջ��Ԫ��
	if(S.top-S.base>=S.stacksize){
	//ջ��������洢�ռ�
	S.base=(SElemType *)realloc(S.base,(S.stacksize+STACKINCREMENT)*sizeof(SElemType));
	if(!S.base)		exit(OVERFLOW);
	S.top =S.base+S.stacksize;
	S.stacksize+=STACKINCREMENT;
	}
	*S.top++=e;
	return OK;
}//push