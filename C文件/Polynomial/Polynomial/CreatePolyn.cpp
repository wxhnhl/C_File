void CreatePolyn(polynomial &p,int m){
	//����m���ϵ����ָ����������ʾһԪ����ʽ����������P
	InitList(p); h=GetHead(P);
	e.coef=0.0; e.expn=-1; SetCurElem(h,e);  //����ͷ��������Ԫ��
	for(i=1;i<=m;i++){						//��������m��������
	scanf(e.coef,e.expn);
	if(!LocateElem(P,e,q,(*cmp)())){
		if(MakeNode(s.e)) InsFirst(q,s);
		}
	}		
}//CreatePolyn