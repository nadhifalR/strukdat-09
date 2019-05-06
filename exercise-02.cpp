/*
Nama Program	: exercise-02
Nama 			: Nadhifal A R
Kelas			: B
NPM				: 140810180048
Deskripsi		: Stack Array
*/

#include <iostream>
using namespace std;

struct ElemtList{
    char Data;
    ElemtList* next;
};
typedef ElemtList* pointer;
typedef pointer Stack;

void CreateStack(Stack& Top){
    Top = NULL;
}
void CreateElement(pointer& pBaru){
    pBaru = new ElemtList;
    cin >> pBaru->Data;
    pBaru->next = NULL;
}
void push(Stack& Top, pointer pBaru){
    if (Top==NULL){
        Top = pBaru;
    }
    else {
        pBaru->next = Top;
        Top = pBaru;
    }
}
void traversal(Stack Top){
    pointer pBantu;
    if(Top==NULL){
        cout << "List Kosong";
    }
    else{
        pBantu=Top;
        do{
            cout << pBantu->Data << " ";
            pBantu = pBantu->next;
        } while(pBantu != NULL);
    }
    cout << endl;
}

int main(){
    pointer p;
    Stack s;
    int n;

    CreateStack(s);

    cout<<"Jumlah huruf : ";cin>>n;
	cout<<"Masukan Kata : ";
    for(int i=0;i<n;i++){
        CreateElement(p);
        push(s,p);
    }
    cout<<endl;
    traversal(s);
}
