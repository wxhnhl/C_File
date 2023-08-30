void InitSpace_SL(SLinkList &space){
	//将一维数组space中各分量链成一个备用链表，space[0].cur
	//"0"表示空指针
	for(i=0;i<MAXSIZE-1;++i) space[i].cur=i+1;
	space[MAXSIZE-1]=0;
}//InitSpace_L