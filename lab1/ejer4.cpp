#include <iostream>
using namespace std;

void mur(char *,int);

int main(){
	
	char string[]="informatica";
	int lon=sizeof(string);
	char *p=string;
	cout<<string;
	cout<<endl;
	mur(p,lon);	
	
	return 0;
}

void mur(char *p,int lon){
	for(int i=0;i<lon;i++){
		if(*p == 'm'){
			cout<<"0";
		}
		else if(*p == 'u'){
			cout<<"1";
		}
		else if(*p == 'r'){
			cout<<"2";
		}
		else if(*p == 'c'){
			cout<<"3";
		}
		else if(*p == 'i'){
			cout<<"4";
		}
		else if(*p == 'e'){
			cout<<"5";
		}
		else if(*p == 'l'){
			cout<<"6";
		}
		else if(*p == 'a'){
			cout<<"7";
		}
		else if(*p == 'g'){
			cout<<"8";
		}
		else if(*p == 'o'){
			cout<<"9";
		}
		else{
			cout<<*p;
		}
		
		*(p++);
	 	
	}
}
