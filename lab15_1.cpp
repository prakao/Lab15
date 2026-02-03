#include <iostream>
using namespace std;

int main(){

	int a =5;
	char b='A';
	char &c=b;
	int *pX=&a;
	char *pY=&b;
	int *pZ=pX;

	cout<<a<<" "<<b<<" "<<c<<" "<<pX<<" "<<(int *)pY<<" "<<pZ<<" "<<"\n";
	cout<<&a<<" "<<(int *)&b<<" "<<(int *)&c<<" "<<&pX<<" "<<&pY<<" "<<&pZ<<" "<<"\n";
	c='F';
	cout<<a<<" "<<b<<" "<<c<<" "<<pX<<" "<<(int *)pY<<" "<<pZ<<" "<<"\n";
	*pY='W';
	cout<<a<<" "<<b<<" "<<c<<" "<<pX<<" "<<(int *)pY<<" "<<pZ<<" "<<"\n";
	*pX=6;
	cout<<a<<" "<<b<<" "<<c<<" "<<pX<<" "<<(int *)pY<<" "<<pZ<<" "<<"\n";
	*pZ=7;
	cout<<a<<" "<<b<<" "<<c<<" "<<pX<<" "<<(int *)pY<<" "<<pZ<<" "<<"\n";
	return 0;
}