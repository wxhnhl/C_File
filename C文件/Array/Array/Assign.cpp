Status Assign(Array &A,ElemType e,..){
	//A是n维数组，e为元素变量，随后是n个下标值
	//若下标值不越界，则将e的值赋给所指定的A的元素，并返回OK
	va_start(ap,e);
	if((result=Locate(A,ap,off))<=0)	return result;
	*(A.base+off)=e;
	return OK;
}