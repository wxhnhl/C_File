typedef struct MPNode{
	ElemTag tag;			//����ԭ�ӽ��ͱ���
	int exp;				//ָ����
	union{
			float coef;		//ϵ����
			struct MPNode *hp;	//����ı�ͷָ��
	};
	struct MPNode *tp;			//�൱�����������next,ָ����һ��Ԫ�ؽ��
}*MPList;						//mԪ����ʽ���������


