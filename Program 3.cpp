#include<iostream>
using namespace std;
int main(){
	int A,B;
    while(cin>>A>>B){

	if ((A*2+B)%3==2){
		cout<<"¤j¦N";
	}
	else if((A*2+B)%3==1){
		cout<<"¦N";
	}
	else if((A*2+B)%3==0){
		cout<<"´¶³q";
	}
	return 0;
}	}
