int Index(String S,String T,int pos){
	//TΪ�ǿմ���������S�е�pos���ַ�֮�������T��ȵ��Ӵ����򷵻ص�һ���������ִ���S�е�λ�ã����򷵻�0
	if(pos>0){
		n=StrLength(S); m=Strlength(T);	i=pos;
		while(i<=n-m+1){
			SuString(sub,S,i,m);
			if(StrCompare(sub,T)!=0)		++i;
			else return i;		�������ִ��е�λ��
		}//while
	}//if
	return 0;		//S�в�������T��ȵ��ִ�
}//Index