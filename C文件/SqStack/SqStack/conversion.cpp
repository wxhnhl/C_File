void conversioon(){
	//�������������һ���Ǹ�ʮ������������ӡ��������ֵ�İ˽�����
	InitStack(S);
	int N;
	scanf("%d",N);
	while(N){
		Push(S,N%8);
		N=N/8;	
	}
	while(!StackEmpty(S)){
		Pop(S,e);
		printf("%d",e);
	}
}//conversion