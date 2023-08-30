void AddPolyn(polynomial &Pa,polynomia &Pb){
	//����ʽ�ӷ���Pa=Pa+Pb,������������ʽ�Ľ�㹹�ɡ��Ͷ���ʽ��
	ha=GetHead(Pa); hb=GetHead(Pb);					//ha��hb�ֱ�ָ��Pa��Pb��ͷ���
	qa=NextPos(Pa,ha); qb=NextPos(Pb,hb);			//qa��qb�ֱ�ָ��Pa��Pb�ĵ�ǰ���
	while(qa&&qb){	//qa��qb���ǿ�   ���������
		a =GetCurElem(qa); b=GetCurElem(qb);
		switch(*cmp(a,b)){
		case -1:	//����ʽPA�е�ǰ����ָ��ֵ��С
			ha=qa; qa=NextPos(Pa,qa); break;
		case 0:		//���ߵ�ָ��ֵ���
			sum = a.coef+b.coef;
			if(sum!=0.0){//�޸Ķ���ʽPA�е�ǰ����ϵ��ֵ
				SetCurElem(qa,sum);		ha=qa;}
			else{//ɾ������ʽPA�е�ǰ���
				DelFirst(ha,qa);	FreeNode(qa);}
			DelFirst(hb,qb); FreeNode(qb);	qb=NextPos(Pb,hb);
			qa=NextPos(Pa,ha); break;
		case 1: //����ʽPB�е�ǰ����ָ��ֵС
			DelFirst(hb,qb);	InsFirst(ha,qb);
			qb=NextPos(Pb,hb);	ha=NextPos(Pa,ha);
			break;
		}//switch
			}//while
	if(!ListEmpty(Pb))	Append(Pa,qb); //����Pb��ʣ����
	FreeNode(hb);  //�ͷ�Pb��ͷ���
}//AddPolyn