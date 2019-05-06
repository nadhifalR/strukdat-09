/*
Nama Program	: exercise-01
Nama 			: Nadhifal A R
Kelas			: B
NPM				: 140810180048
Deskripsi		: Stack Array
*/

#include <iostream>
using namespace std;

const int maxElemen=255;
struct Stack{
	char isi[maxElemen];
	int TOP;
};
Stack S;

void createStack(Stack& S){
	S.TOP=-1;
}
void push(Stack& S, char elemenBaru){
	if(S.TOP==maxElemen-1){
		cout<<"Tumpukan sudah penuh"<<endl;
	}else{
		S.TOP++;
		S.isi[S.TOP]=elemenBaru;
	}
}
void printReverse(Stack S){
	for(int i=S.TOP; i>=0; i--){
		cout<<S.isi[i]<<" ";
	}
}
int main(){
	char input, temp;
	int n;

	createStack(S);

	cout<<"Jumlah huruf : ";cin>>n;
	cout<<"Masukan Kata : ";
	for(int i=0;i<n;i++){
        cin>>input;
        push(S,input);
	}
	printReverse(S);
}
