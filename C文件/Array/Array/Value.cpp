Status Value(Array A,ElemTyoe &e,..){
	//A��nά���飬eΪԪ�ر����������n���±�ֵ
	//�����±�ֵ��Խ�磬��e��ֵΪ��ָ����Ԫ��ֵ��������Ok
	va_start(ap,e);		
	if((result=Locate(A,ap,off))<=0)		return	result;
	e=*(A.base+off);
	return OK;
}

