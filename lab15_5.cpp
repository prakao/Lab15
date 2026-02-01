#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << a << " " << b << " " << c << " " << d << endl;
	}
	
	return 0;
}

void shuffle(int *a,int *b,int *c,int *d){
	int i = rand()%4;
	if(i==0){
		int temp=*a;
		*a=*b;
		*b=temp;
	}else if(i==1){
		int temp=*a;
		*a=*c;
		*c=temp;
	}else if(i==2){
		int temp=*a;
		*a=*d;
		*d=temp;
	}else if(i==3){
		int temp=*b;
		*b=*c;
		*c=temp;
	}
	
}
//Do not modify the code above this line
//Write definition of shuffle() using pointer after this line. 
