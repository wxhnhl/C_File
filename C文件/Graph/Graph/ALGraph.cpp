//------图的邻接表存储表示-----
#define	MAX_VERTEX_NUM 20
typedef struct ArcNode{
	int adjvex;			//该弧所指向的顶点的位置
	struct ArcNode *nextarc;		//指向下一条弧的指针
	InfoType  *info;	//该弧相关信息的指针
}ArcNode;

typedef struct VNode{
	VertexType data;	//顶点信息
	ArcNode *firstarc;		//指向第一条依附该顶点的弧的指针
}VNode,AdjList[MAX_VERTEX_NUM];
typedef struct{
	AdjList vertics;
	int vexnum,arcnum;			//图的当前顶点数和弧数
	int kind;					//图的种类标志
}ALGraph;