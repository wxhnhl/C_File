//------ͼ�����飨�ڽӾ��󣩴洢��ʾ----
#define INFINITY INT_MAX		//���ֵ
#define MAX_VERTEX_NUM	20		//��󶥵����
typedef enum{DG,DN,UDG,UDN}GraphKind;		//{����ͼ��������������ͼ��������}
typedef struct ArcCell{
	VRType   adj;				//VRType�Ƕ����ϵ���ͣ�����Ȩͼ����1��0
								//��ʾ���ڷ񣻶Դ�Ȩͼ����ΪȨֵ����
	InfoType *info;				//�û������Ϣ��ָ��
}ArcCell,AdjMatrix[MAX_VERTEX_NUM][MAX_VERTEX_NUM]

	
typedef struct{
	VertexType  vexs[MAX_VERTEX_NUM];			//��������
	AdjMatrix arcs;								//�ڽӾ���
	int  vexnum,arcnum;							//ͼ�ĵ�ǰ�������ͻ���
	GraphKind kind;								//ͼ�������־
}MGraph;							
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
















]
}