#define CHUNKSIZE  80				//�����û�����Ŀ��С
typedef  struct Chunk{
	char ch[CHUNKSIZE];
	struct Chunk * next;
}Chunk;

typedef struct Lstring{
	Chunk *head, *tail;
	int curlen;		//���ĵ�ǰ����
}LString;

