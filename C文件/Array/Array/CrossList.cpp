typedef struct OLNode{
	int i,j;			//�÷���Ԫ���к����±�
	ElemType e;
	struct OLNode *right,*down;		//�÷���Ԫ�����б���б�ĺ������
}OLNode;*OLink;
	
typedef struct{
	OLink *rhead,*chead;			//�к�������ͷָ��������ַ��CreateSMatrix����
	int mu,nu,tu;					//ϡ�����������������ͷ���Ԫ����
}CrossList;