int Index(String S,String T,int pos){
	//T为非空串，若主串S中第pos个字符之后存在与T相等的子串，则返回第一个这样的字串在S中的位置，否则返回0
	if(pos>0){
		n=StrLength(S); m=Strlength(T);	i=pos;
		while(i<=n-m+1){
			SuString(sub,S,i,m);
			if(StrCompare(sub,T)!=0)		++i;
			else return i;		返回在字串中的位置
		}//while
	}//if
	return 0;		//S中不存在与T相等的字串
}//Index