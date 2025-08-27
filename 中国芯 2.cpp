#include <iostream>
using namespace std;
int main() {
	int n,count=0;
	cin>>n;
	for(int i=1;i<=n;i++) {
		for(int j=0;j<=n;j++) {
			if(i!=j) {
				for(int k=1;k<=n;k+=2) {
					if(k!=i&&k!=j) {
						count++;
					}
				}
			}
		}
	}
	cout<<count<<endl;
	return 0;
}
