#define  MAXSIZE 12500		//�������Ԫ���������ֵΪ12500
typedef struct{
	int i,j;
	ElemType e;
}Triple;

typedef struct{
	Triple data[MAX_SIZE=1];			//����Ԫ��Ԫ���data[0]δ��
	int mu,nu,tu;						//����������������ͷ���Ԫ����
}TSMatrix;