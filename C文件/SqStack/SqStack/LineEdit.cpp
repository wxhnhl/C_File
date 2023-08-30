void LineEdit(){
	//利用字符栈S,从终端接收一行并传送至调用过程的数据区
	InitStack(S);
	ch=getchar();				//从终端接收第一个字符
	while(ch!=EOF){//EOF为全文结束符
		while(ch!=EOF&&ch!='\n'){
			switch(ch){
			case '#': Pop(S,c); break;
			case '@':ClearStack(S); break;
			default；Push(S,ch); break;
				}
		ch=getchar();
			}
		//将从栈底到栈顶的栈内字符传送至调用过程的数据区；
		ClearStack(S);			//重置S为空栈
		if(ch!=EOF)		ch=getchar();
		}
	DestoryStack(S);
}//LineEdit