Status ListDelete_Sq(SqList &L,int i,ElemType &e){
	if((i<1)||(i>L.length)) return ERROR;
	p=&(L.elem[i-1]);
	e=*p;
	q=L.elem+L.length-1;
	for(++p;p<=q;++p) *(p-1)=*p;
	--L.length;
	return OK;
}//ListDelete Sq;