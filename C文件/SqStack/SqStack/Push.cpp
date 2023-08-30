Status Push(SqStack &s,SElemType e){
	//插入元素e为新的栈顶元素
	if(S.top-S.base>=S.stacksize){
	//栈满，分配存储空间
	S.base=(SElemType *)realloc(S.base,(S.stacksize+STACKINCREMENT)*sizeof(SElemType));
	if(!S.base)		exit(OVERFLOW);
	S.top =S.base+S.stacksize;
	S.stacksize+=STACKINCREMENT;
	}
	*S.top++=e;
	return OK;
}//push