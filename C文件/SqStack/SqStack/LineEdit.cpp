void LineEdit(){
	//�����ַ�ջS,���ն˽���һ�в����������ù��̵�������
	InitStack(S);
	ch=getchar();				//���ն˽��յ�һ���ַ�
	while(ch!=EOF){//EOFΪȫ�Ľ�����
		while(ch!=EOF&&ch!='\n'){
			switch(ch){
			case '#': Pop(S,c); break;
			case '@':ClearStack(S); break;
			default��Push(S,ch); break;
				}
		ch=getchar();
			}
		//����ջ�׵�ջ����ջ���ַ����������ù��̵���������
		ClearStack(S);			//����SΪ��ջ
		if(ch!=EOF)		ch=getchar();
		}
	DestoryStack(S);
}//LineEdit