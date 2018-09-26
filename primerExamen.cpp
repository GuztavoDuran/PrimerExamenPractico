#include <iostream>
using namespace std;
int main(){
    int *arreglo = new int [5];

	for(int i=0;i<5;i++){
		cout<<"Digite un numero ["<<i<<"]: ";
		cin>>*(arreglo+i);
	}
    cout << endl;
	for(int i=0;i<5;i++){
		cout << "valor:    ";
		cout << *(arreglo+i) << endl;
		cout << "posicion: " << (arreglo+i)<< endl;
	}
	
	for(int i=4;i>=0;i--){
		cout << "valor:    ";
		cout << *(arreglo+i) << endl;
		cout << "posicion: " << (arreglo+i)<< endl;
	}

    delete [] arreglo;
	return 0;
}
