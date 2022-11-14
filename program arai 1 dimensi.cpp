#include <iostream>

using namespace std;

int main (){
    int data[5];
    for (int i=0; i<5; i++){
        cout<<"Masukkan data pada elemen ke "<<i<<" = ";cin>>data[i];
    }
    cout<<endl;
    for (int i=0; i<5; i++){
        cout<<"Data bari ke-"<<i<<" = "<<data[i];cout<<endl;
    }
    return 0;
}
