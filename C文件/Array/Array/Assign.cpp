Status Assign(Array &A,ElemType e,..){
	//A��nά���飬eΪԪ�ر����������n���±�ֵ
	//���±�ֵ��Խ�磬��e��ֵ������ָ����A��Ԫ�أ�������OK
	va_start(ap,e);
	if((result=Locate(A,ap,off))<=0)	return result;
	*(A.base+off)=e;
	return OK;
}