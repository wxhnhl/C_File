//------��������չ��������洢��ʾ-------
typedef enum{ATOM,LIST}ElemTag;
typedef struct GLNode{		//ATOM==0:ԭ�ӣ�LIST==1:�ӱ�
	ElemTag tag;			//�������֣���������ԭ�ӽ��ͱ���
	union{
		AtomType atom;		//ԭ�ӽ���ֵ��
		struct GLNode *hp;	//����ı�ͷָ��
	}��
		struct GLNode *tp;	//�൱�����������NEXT,ָ����һ��Ԫ�ؽ��
}*GList						//��չ����������