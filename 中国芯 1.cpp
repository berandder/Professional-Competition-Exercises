#include <iostream>
#include <iomanip> 
using namespace std;
int main() {
	int max=0,min=1001,n;
	float s;
	for(int i=1;i<=10;i++) {
		cin>>n;
		if(n<max) 
			max=n;
		if(n<min)
			min=n;
		s+=n;
	}
	s=s/10.0;
	cout<<max<<","<<min<<","<<fixed<<setprecision(2)<<s<<endl;
	return 0;
}
