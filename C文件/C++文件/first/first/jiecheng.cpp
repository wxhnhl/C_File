#include <stdlib.h>
#include<iostream>
using namespace std;
void jiecheng(){
int n;
cin>>n;
int sum =0;
for(int i=1;i<=n;i++){
	int count =1;
	for(int j=1;j<=i;j++){
		count = count*j;
		
	}
sum=sum+count;}
cout<<sum<<endl;
system("pause");
}