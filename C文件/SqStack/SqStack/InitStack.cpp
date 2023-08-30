Status InitStack(SqStack &S){
	//构造一个空栈S;
	S.base=(SElemType *)malloc(STACK_INIT_SIZE*sizeof(SElemType));
	if(!S.base)  exit(OVERFLOW);			//存储分配失败
	S.top=S.base;
	S.stacksize=STACK_INIT_SIZE;
	return OK;
}//InitStack