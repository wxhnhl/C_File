//-------有向图的十字链表存储表示-----
#define MAX_VERTEX_NUM 20
typedef struct ArcBox{
	int	tailvex,headvex;				//该弧的尾和头顶点的位置
	struct ArcBox *hlink,*tlink;		//分别为弧头相同和弧尾
	InfoType  *info;					//该弧相关信息的指针
}ArcBox;

typedef struct VexNode{
	VertexType data;
	ArcBox  *firstin,*firstout;			//分别指向该顶点的第一条入弧和出弧
}VexNode;

typedef struct{
	VexNode xlist[MAX_VERTEX_NUM];		//表头向量
	int vexnum,arcnum;					//有向图的当前顶点数和弧数
}OLGraph;
