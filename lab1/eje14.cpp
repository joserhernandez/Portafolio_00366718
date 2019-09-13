#include <iostream>
#include <cstring>
using namespace std;

int palindromo(char * , int , int );

int main() {
	
    char string[25];
    cout<<"Escribe una palabra: ";
    cin>>string;
 
    int lon = strlen(string);
    int inicio=0;
    int resp = palindromo(string, inicio, lon - 1);
    cout<<resp;
    if (resp) {
        cout<<"Es palindroma\n";
    } else {
        cout<<"No es palindroma\n";
    }
    
    return 0;
}
int palindromo(char * p, int i, int j) {
 
    if (i >= j){
    	return 1;
	} 
 
    
    if (p[i] == p[j]) {
        return palindromo(p, i + 1, j - 1);
    } else {
        return 0;
    }
}


