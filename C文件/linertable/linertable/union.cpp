#include<stdlib.h>
using namespace std;
void union(List & La,List Lb){
	La_len = ListLength(La);
	Lb_len = ListLength(Lb);
	for(int i=1;i<=Lb_len;i++)
	{	
		GetElem(Lb,i,e);
		if(!LocateElem(La,e,equal))
			ListInsert(La,++La_len,e);)
	
	}
	
}