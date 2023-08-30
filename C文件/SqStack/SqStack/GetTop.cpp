Status GetTop(SqStack S,SElemType &e){
	//若栈不空，则用e返回S的栈顶元素，并返回OK；否则返回ERROR；
	if(S.top==S.base)		return ERROR;
		e=*(S.top-1);
		return OK;
}//GetTop;