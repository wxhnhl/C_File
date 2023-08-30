Status(Array A,va_list_ap,int &off){
	//若ap指示的各下标值合法，则求出该元素在A中相对地址
	off=0;
	for(i=0;i<A.dim;++i){
		ind=va_arg(ap,int);
		if(ind<0||ind>=A.bounds[i])	return OVEFFLOW;
		off+=A.constants[i]*ind;
	}
	return OK;
}