int Search_Seq(SSTale ST,KeyType key){
	//��˳���ST��˳�������ؼ��ֵ���key������Ԫ�أ����ҵ�������ֵΪ��Ԫ���ڱ��е�λ�ã�����Ϊ0
	ST.elem[0].key=key;						//���ڱ���
	for(i=ST.length;!EQ(ST.elem[i].key);--i);		//�Ӻ���ǰ��
	return i;								//�Ҳ���ʱ��iΪ0
}//Search_Seq