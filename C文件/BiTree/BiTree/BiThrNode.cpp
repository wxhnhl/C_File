//-------�������Ķ��������洢��ʾ----
typedef enum PointerTag{Link,Thread};		//Link==0��ָ�룬Thread==1:������
typedef struct BiThrNode{
	TElemType  data;
	struct BiThrNode *lchild,*rchild;		//���Һ���ָ��
	PointerTag LTag,RTag;					//���ұ�־
}BiThrNode,*BiThrTree; 