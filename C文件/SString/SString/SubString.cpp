Status SubString(String &Sub,SString S,int pos,int len){
	//用Sub返回串S的第pos个字符起长度为len的字串
	//其中，1<=pos<=Strlength(S)且0<=len<=Strlength(S)-pos+1
	if(pos<1||pos>Strlength(S)||len<0||len>S[0]-pos+1)
		return ERROR;
	for(i=1,i<=len,i++){
		Sub[i]=S[pos];
	}
	Sub[0]=len;	return OK;
}//SubString