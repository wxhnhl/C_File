typedef struct QNode{
	QElemType  data;
	struct	QNode *next;
}QNode,*QueuePtr;

typedef struct{
	QueuePtr front;		//��ͷָ��
	QueuePtr rear;		//��βָ��
}LinkQueue;
