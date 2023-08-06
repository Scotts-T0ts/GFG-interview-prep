#include<iostream>

using namespace std;

int main(){

int i=2;
int n = 100;

int x = i;

while(n%x==0){
    cout<<i<<"  ";
    x=x*i;


}

return 0;

}