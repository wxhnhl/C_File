void InitSpace_SL(SLinkList &space){
	//��һά����space�и���������һ����������space[0].cur
	//"0"��ʾ��ָ��
	for(i=0;i<MAXSIZE-1;++i) space[i].cur=i+1;
	space[MAXSIZE-1]=0;
}//InitSpace_L