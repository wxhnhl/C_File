int LocateElem_Sq(Sqlist L,ElemType e,Status(*compare)(ElemType,ElemType)){
	int i;
	p=L.elem;
	while(i<=L.length&&!(*compare)(*p++,e))++i;
	if(i<=L.length) return i;
	else return 0;
}//LocateElem_Sq