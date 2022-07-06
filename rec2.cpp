#include <iostream>
using namespace std;
int count(int n){
	if(n<=10)
	{
	cout<<n;
	count(++n);
	}
}
int main()
{
	int count(int);
	count(1);
}
