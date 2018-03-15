#include <iostream>
using namespace std;
int main()
{
	int n;

	cout<<"Enter an integer n:";
	cin>>n;
	
	while(n!=1){
	
		cout<<n<<endl;

		if(n%2==1){
			n=n*3+1;
		}

		else{
			n=n/2;
		}
	}
	if(n==1){
		cout<<n<<endl;
	}	
	
	
	return 0;
}
