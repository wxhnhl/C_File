#include<stdlib.h>
using namespace std;
void insertElement(List la,List &Lc){
 IniList(Lc);
 La_len=ListLength(La);
 int k=0;
 for(int i=1;i<=La_len;i++){
  GetElem(La,i,a);
  if(i>1)
  { if(!LocateElem(La,a,equal))
			  Insert(Lc,i,a);
  }
  else Insert(Lc,i,a);
 }
}