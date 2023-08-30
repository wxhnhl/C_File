Status StrInsert(HString &S,int pos,HString T){
	//1<=pos<=StrLength(S)+1    在串S的第pos个字符之前插入串T
	if(pos<1||pos>S.length+1)	return ERROR;
	if(T.length){							//T非空，则重新分配空间，插入T
			if(!(S.ch=(char*)realloc(S.ch,(S.length+T.length)*sizeof(char))))
				exit(OVERFLOW);
			for(i=S.length-1;i>=pos-1;--i)
				S.ch[i+T.length]=S.ch[i];		//为T腾出空间
			for(j=pos-1;j<=pos+T.length-2;j++)	
				S.ch[j]=T.ch[j-pos+1];			//插入T
			S.length+=T.length;
		}
	return OK;
}//StrInsert