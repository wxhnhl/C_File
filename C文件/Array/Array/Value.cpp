Status Value(Array A,ElemTyoe &e,..){
	//A是n维数组，e为元素变量，随后是n个下标值
	//若各下标值不越界，则e赋值为所指定的元素值，并返回Ok
	va_start(ap,e);		
	if((result=Locate(A,ap,off))<=0)		return	result;
	e=*(A.base+off);
	return OK;
}

