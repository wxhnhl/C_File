#define CHUNKSIZE  80				//可由用户定义的块大小
typedef  struct Chunk{
	char ch[CHUNKSIZE];
	struct Chunk * next;
}Chunk;

typedef struct Lstring{
	Chunk *head, *tail;
	int curlen;		//串的当前长度
}LString;

