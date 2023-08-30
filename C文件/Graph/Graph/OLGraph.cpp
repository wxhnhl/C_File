//-------����ͼ��ʮ������洢��ʾ-----
#define MAX_VERTEX_NUM 20
typedef struct ArcBox{
	int	tailvex,headvex;				//�û���β��ͷ�����λ��
	struct ArcBox *hlink,*tlink;		//�ֱ�Ϊ��ͷ��ͬ�ͻ�β
	InfoType  *info;					//�û������Ϣ��ָ��
}ArcBox;

typedef struct VexNode{
	VertexType data;
	ArcBox  *firstin,*firstout;			//�ֱ�ָ��ö���ĵ�һ���뻡�ͳ���
}VexNode;

typedef struct{
	VexNode xlist[MAX_VERTEX_NUM];		//��ͷ����
	int vexnum,arcnum;					//����ͼ�ĵ�ǰ�������ͻ���
}OLGraph;
