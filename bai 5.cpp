// bai 5  
#include <iostream>

using namespace std;
int main(){
	int a[5];
	for ( int i=0; i<5; i++){
		cin >> a[i]; 
	} 
	int max = a[0];
	for (int i=1 ; i<5; i++){
		if (a[i]>a[0]){
			max = a[i]; 
		} 
	} 
	
	int min  = a[0];
	for (int i=1 ; i<5; i++){
		if (a[i]<a[0]){
			min  = a[i]; 
		} 
	} 
	

	cout << max+min; 
	return 0; 
} 
