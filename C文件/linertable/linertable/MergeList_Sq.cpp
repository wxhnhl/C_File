void MergeList_Sq(SqList La,Sqlist Lb,Sqlist &Lc){
	pa=La.elem;
	pb=Lb.elem;
	Lc.listsize=Lc.length=La.length+Lb.length;
	pc=Lc.elem = malloc(Lc.listsize*sizeof(ElemType));
	if(!Lc.elem) exit(overflow);
	pa.last=La.elem+La.length-1;
	pb.last=lb.elem+Lb.length-1;
	while(pa<=pa.last&&pb<=pb.last){
	if(*pa<=*pb) *pc++=*pa++;
	else *pc++=*pb++;}
	while(pa<=pa.last) *pc++=*pa++;
	while(pb<=pb.last) *pc++=*pb++;
}//MergeLit_Sq