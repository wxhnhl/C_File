//------ͼ���ڽӱ�洢��ʾ-----
#define	MAX_VERTEX_NUM 20
typedef struct ArcNode{
	int adjvex;			//�û���ָ��Ķ����λ��
	struct ArcNode *nextarc;		//ָ����һ������ָ��
	InfoType  *info;	//�û������Ϣ��ָ��
}ArcNode;

typedef struct VNode{
	VertexType data;	//������Ϣ
	ArcNode *firstarc;		//ָ���һ�������ö���Ļ���ָ��
}VNode,AdjList[MAX_VERTEX_NUM];
typedef struct{
	AdjList vertics;
	int vexnum,arcnum;			//ͼ�ĵ�ǰ�������ͻ���
	int kind;					//ͼ�������־
}ALGraph;