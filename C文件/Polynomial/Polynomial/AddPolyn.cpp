void AddPolyn(polynomial &Pa,polynomia &Pb){
	//多项式加法；Pa=Pa+Pb,利用两个多项式的结点构成“和多项式”
	ha=GetHead(Pa); hb=GetHead(Pb);					//ha和hb分别指向Pa和Pb的头结点
	qa=NextPos(Pa,ha); qb=NextPos(Pb,hb);			//qa和qb分别指向Pa和Pb的当前结点
	while(qa&&qb){	//qa和qb均非空   逆序建立结点
		a =GetCurElem(qa); b=GetCurElem(qb);
		switch(*cmp(a,b)){
		case -1:	//多项式PA中当前结点的指数值最小
			ha=qa; qa=NextPos(Pa,qa); break;
		case 0:		//两者的指数值相等
			sum = a.coef+b.coef;
			if(sum!=0.0){//修改多项式PA中当前结点的系数值
				SetCurElem(qa,sum);		ha=qa;}
			else{//删除多项式PA中当前结点
				DelFirst(ha,qa);	FreeNode(qa);}
			DelFirst(hb,qb); FreeNode(qb);	qb=NextPos(Pb,hb);
			qa=NextPos(Pa,ha); break;
		case 1: //多项式PB中当前结点的指数值小
			DelFirst(hb,qb);	InsFirst(ha,qb);
			qb=NextPos(Pb,hb);	ha=NextPos(Pa,ha);
			break;
		}//switch
			}//while
	if(!ListEmpty(Pb))	Append(Pa,qb); //链接Pb中剩余结点
	FreeNode(hb);  //释放Pb的头结点
}//AddPolyn