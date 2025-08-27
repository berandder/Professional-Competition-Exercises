#include <iostream>
using namespace std;
bool dz(int num) {
	int num1=num%10;
	num/=10;
	while(num>0) {
		int num2=num%10;
		if(num2>num1)
			return false;
		num1=num2,num/=10;
	}
	return true;
}
int main() {
	int n,count=0;
	cin>>n;
	for(int i=10;i<=n;i++) {
		if(dz(i))
			count++;
	}
	cout<<count<<endl;
	return 0;
}
