Status StrInsert(HString &S,int pos,HString T){
	//1<=pos<=StrLength(S)+1    �ڴ�S�ĵ�pos���ַ�֮ǰ���봮T
	if(pos<1||pos>S.length+1)	return ERROR;
	if(T.length){							//T�ǿգ������·���ռ䣬����T
			if(!(S.ch=(char*)realloc(S.ch,(S.length+T.length)*sizeof(char))))
				exit(OVERFLOW);
			for(i=S.length-1;i>=pos-1;--i)
				S.ch[i+T.length]=S.ch[i];		//ΪT�ڳ��ռ�
			for(j=pos-1;j<=pos+T.length-2;j++)	
				S.ch[j]=T.ch[j-pos+1];			//����T
			S.length+=T.length;
		}
	return OK;
}//StrInsert