#include <iostream> //@FlaTurchetti
#include <ctime>
#include <cstdlib>
using namespace std;
void visualizzaArray(int v[], int size);
void selectionSort(int v[], int size);
void popArray(int v[], int size);
int menu(int v[], int size);
int main(){
	system("title SelectionSort ricorsivo");
	int size;
	int v[size];
	menu(v, size);
	return 0;
}
void visualizzaArray(int v[], int size){
	for(int j=0; j<size; j++){
		cout<<v[j]<<" \n";
	}
}
void selectionSort(int v[], int size){
	for(int i=0; i<size-1; i++){
		int minimo=i;
		for(int j=i+1; j<size; j++){
			if(v[j]<v[minimo]){
				minimo=j;
			}
		}
	int temp=v[i];
	v[i]=v[minimo];
	v[minimo]=temp;
	}
	visualizzaArray(v, size);   
}
void popArray(int v[], int size){
	srand(time(NULL));
	for(int i=0; i<size; i++){
		v[i]=rand()%100000;
	}
}
int menu(int v[], int size){
	cout<<"Inserisci grandezza Array: ";
	cin>>size;
	popArray(v, size);
	selectionSort(v, size);
	if(size<2) return 2;
    else return v[size]+menu
	(v,size-1);
}
