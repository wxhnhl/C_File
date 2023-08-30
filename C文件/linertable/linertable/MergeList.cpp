#include<stdlib.h>
using namespace std;
void MergeList(List La,List Lb,List & Lc){
	InitList(Lc);
	int i=j=1;
	k=0;
	La_len = ListLength(La);
	Lb_len = ListLength(Lb);
	while((i<=La.len)&&(j<=Lb.len))
	{
		GetElem(La,i,ai);
		GetElem(Lb,j,bi);
		if(ai<=bi)
		{InsertElem(Lc,++k,ai);
		i++;}
		else {
		InsertElem(Lc,++k,bi);
		j++;}
	}
	while(i<=La.len){
		GetElem(La,i++,ai);
		ListInsert(Lc,++k,ai);
	}
	while(j<=Lb.len){
		GetElem(Lb,i++,bj);
		ListInsert(Lc,++k,bj);
	}	
}