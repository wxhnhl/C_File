void CreatePolyn(polynomial &p,int m){
	//输入m项的系数和指数，建立表示一元多项式的有序链表P
	InitList(p); h=GetHead(P);
	e.coef=0.0; e.expn=-1; SetCurElem(h,e);  //设置头结点的数据元素
	for(i=1;i<=m;i++){						//依次输入m个非零项
	scanf(e.coef,e.expn);
	if(!LocateElem(P,e,q,(*cmp)())){
		if(MakeNode(s.e)) InsFirst(q,s);
		}
	}		
}//CreatePolyn