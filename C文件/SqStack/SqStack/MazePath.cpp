typedef struct{
	int ord;			//ͨ������·���ϵġ���š�
	PosType seat;		//ͨ�������Թ��еġ�����λ�á�
	int di;				//�Ӵ�ͨ����������һͨ����ġ�����
}SElemType;				//ջ��Ԫ������

Status MazePath(MazeType maze,PosType start,PosType end){
	//���Թ�maze�д��ڴ����start������end��ͨ���������һ�������ջ�У���ջ�׵�ջ������������TRUE�����򷵻�FALSE;
	Initstack(S); curpos=start;		//�趨����ǰλ�á�Ϊ�����λ�á�
	curstep=1;						//̽����һ��
	do{
		if(Pass(curpos)){			//��ǰλ�ÿ���ͨ��������δ���ߵ�����ͨ����
			FootPrint(curpos);		//�����㼣
			e=(curstep,curpos,1);
			Push(S,e);				//����·��
			if(curpos==end)		return(TRUE);		//�����յ㣨���ڣ�
			curpos=NextPos(curpos,1);				//��һλ���ǵ�ǰλ�õĶ���
			curstep++;				//̽����һ��
		}//if
		else{//��ǰλ�ò���ͨ��
			if(!StackEmpty(S)){
				Pop(S,e);
				while(e.di==4&&!StackEmpty(S)){
					MarkPrint(e.seat);	Pop(s,e);		//���²���ͨ���ı�ǣ����˻�һ��
				}//while
				if(e.di<4){
					e.di++;		Push(S,e);				//����һ����̽��
					curpos=NextPos(e.seat,e.di);		//�趨��ǰλ���Ǹ÷����ϵ����ڿ�	
				}//if
			}//if	
		}//else
	}while(!StackEmpty(S));
		return(FALSE);
}//MazePath