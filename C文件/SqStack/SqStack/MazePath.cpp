typedef struct{
	int ord;			//通道块在路径上的“序号”
	PosType seat;		//通道块在迷宫中的“坐标位置”
	int di;				//从此通道块走向下一通道块的“方向”
}SElemType;				//栈的元素类型

Status MazePath(MazeType maze,PosType start,PosType end){
	//若迷宫maze中存在从入口start到出口end的通道，则求得一条存放在栈中（从栈底到栈顶），并返回TRUE，否则返回FALSE;
	Initstack(S); curpos=start;		//设定“当前位置”为“入口位置”
	curstep=1;						//探索第一步
	do{
		if(Pass(curpos)){			//当前位置可以通过，即是未曾走到过的通道块
			FootPrint(curpos);		//留下足迹
			e=(curstep,curpos,1);
			Push(S,e);				//加入路径
			if(curpos==end)		return(TRUE);		//到达终点（出口）
			curpos=NextPos(curpos,1);				//下一位置是当前位置的东邻
			curstep++;				//探索下一步
		}//if
		else{//当前位置不能通过
			if(!StackEmpty(S)){
				Pop(S,e);
				while(e.di==4&&!StackEmpty(S)){
					MarkPrint(e.seat);	Pop(s,e);		//留下不能通过的标记，并退回一步
				}//while
				if(e.di<4){
					e.di++;		Push(S,e);				//换下一方向探索
					curpos=NextPos(e.seat,e.di);		//设定当前位置是该方向上的相邻块	
				}//if
			}//if	
		}//else
	}while(!StackEmpty(S));
		return(FALSE);
}//MazePath