int LocateElem_SL(SLinkList S,ElemType e){
	//�ھ�̬�������Ա�L�в��ҵ�1��ֵΪe��Ԫ��
	//���ҵ����򷵻�����L�е�Ϊ�򣬷��򷵻�0
	i=S[0].cur;//��һ��Ԫ�ص�λ��
	while(i&&S[i].data!=e) i=s[i].cur;
	return i;
}//LocateElem_SL