// Bài 1: Tính S(n) = 1 + 2 + 3 + … + n

#include<bits/stdc++.h>
using namespace std;
int tinhTong(int n){
	int s=0;
	for(int i=1; i<=n; i++){
		s+=i;
	}
	return s;
}
main(){
	int n;
	cout << "Nhap n: "; cin >> n;
	cout << "S(" << n << ") = " << tinhTong(n); 
}
