//--------��������˳��洢��ʾ
#define MAX_TREE_SIZE 100							//���������������
typedef TElemType SqBiTree[MAX_TREE_SIZE]	100					//0�ŵ�Ԫ�洢�����	
SqBiTree bt;



//--------�������Ķ�������洢��ʾ
typedef	struct BiTNode{
	TElemType data;
	struct BiTNode *lchild,*rchild;			//���Һ���ָ��
}BiTNode,*BiTree;