Status Pop(SqStack &S,SElentype &e){
	//若栈不空，则删除S的栈顶元素，用e返回其值，并返回OK,否则返回ERROR
	if(S.top==S.base) return ERROR;
	e=*--S.top;
	return  OK;
}//pop