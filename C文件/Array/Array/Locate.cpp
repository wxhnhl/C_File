Status(Array A,va_list_ap,int &off){
	//��apָʾ�ĸ��±�ֵ�Ϸ����������Ԫ����A����Ե�ַ
	off=0;
	for(i=0;i<A.dim;++i){
		ind=va_arg(ap,int);
		if(ind<0||ind>=A.bounds[i])	return OVEFFLOW;
		off+=A.constants[i]*ind;
	}
	return OK;
}