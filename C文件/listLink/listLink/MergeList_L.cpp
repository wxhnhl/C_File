void MergeList_L(LinkList &La,LinkList &Lb,LinkList&Lc){
	//��֪�������Ա�La��Lb��Ԫ�ذ�ֵ�ǵݼ�����
	//�鲢La��Lb�õ��µĵ������Ա�Lc,LcԪ�ص�ֵҲ��ֵ�ǵݼ�����
	pa=La->next; pb=Lb->next;
	Lc=pc=La;//��La��ͷ�����ΪLc��ͷ���
	while(pa&&pb){
		if(pa->data<=pb->data) {
		pc->next=pa; pc=pa; pa=pa->next;}
	}
	else{pc->next=pb;pc=pb;pb=pb->next;}
}
	pc->next=pa?pa:pb;//����ʣ���
	free(Lb);
}