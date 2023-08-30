Status InitList_Sq(SqList &L){
	L.elem = (ElemType*)malloc(LIST_INIT_SIZE*sizeof(ElemType));
	if(!L.elem)exit(OVERFLOW);
	L.length=0;
	L.listsize =LIST_INIT_SIZE;
	return OK;
}//线性表的存储