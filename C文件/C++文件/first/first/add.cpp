#include <stdlib.h>
#include<iostream>
using namespace std;
void add(){
	int n;
	cin>>n;
	cout<<"N"<<"|";
	for(int i=1;i<=n;i++){
	cout<<i<<" ";}
	cout<<"\n";
	for(int i=1;i<=n;i++){
		cout<<i<<"|";
		for (int j=1;j<=n;j++){
			cout<<j+i<<" ";
		}
		cout<<"\n";
	}
	system("pause");
}