int LocateElem_SL(SLinkList S,ElemType e){
	//在静态单链线性表L中查找第1个值为e的元素
	//若找到，则返回她在L中的为序，否则返回0
	i=S[0].cur;//第一个元素的位置
	while(i&&S[i].data!=e) i=s[i].cur;
	return i;
}//LocateElem_SL