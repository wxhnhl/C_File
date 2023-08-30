Status InitArray(Array &A,int dim,...){
	//若维数dim和随后的各维长度合法，则构成相应的数组，并返回OK
	if(dim<1&&dim>MAX_ARRAY_DIM)		return ERROR;
	A.dim=dim;
	A.bounds=(int *)malloc(dim*sizeof(int));
	if(!A.bounds)	exit(OVERFLOW);
	//若各维长度合法，则存入A.bounds,并求出A的元素总数elemtotal
	elemtotal=1;
	va_start(ap,dim);						//ap为va_list类型，是存放变长参数表信息的数组
	for(i=0;i<dim;++i){
		A.bounds[i]=va_arg(ap,int);
		if(A.bounds[i]<0)	return UNDERFLOW;
		elemtotal*=A.bounds[i];
	}
	va_end(ap);
	A.base=(ElemType*)malloc(elemtotal*sizeof(ElemType));
	if(!A.base)	exit(OVERFLOW);
	//求映像函数常数Ci,并存入A.constants[i-1],i=1,..,dim
	A.constants=(int *)malloc(dim*sizeof(int));
	if(!A.constants)	exit(OVERFLOW);
	A.constants[dim-1]=1;			//L=1,指针的增减以元素的大小为单位
	for(i=dim-2;i>=0;--i)
		A.constants[i]=A.bounds[i+1]*A.constants[i+1];
	return OK;

}