#include <iostream>
#include <string>
using namespace std;

template <typename T>
void print(T d[],int E,int Q){
	for(int i=0;i<E;i++){
		if(i==Q){
			cout << "[" << d[i] << "]" << " ";
		}else cout << d[i] << " ";
	}
}
template <typename T>
void swap(T d[],int x,int y){
    T temp = d[x];
    d[x] = d[y];
    d[y] = temp;
}

template <typename T>
void insertionSort(T d[],int N){
	int j;
	for(int i=1;i<N;i++){
		print(d,N,i);
		cout << "=> "; 
		for(j=i;j>0;j--){
			if(d[j]>d[j-1]){
				swap(d,j,j-1); 
                }
				else break;
		}print(d,N,j);
		cout << "\n";
	}
//Write your code here.

}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}