#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}
void shuffle(int &w,int &x,int &y,int &z){
int money[]={w,x,y,z};
int random[4]={};
for(int i=0;i<4;i++){
random[i]=rand()%4;
for(int j=0;j<i;j++){
if(random[i]==random[j]){
i--;
}
}                   }
int coin[4]={money[random[0]],money[random[1]],money[random[2]],money[random[3]]};
w=coin[0];
x=coin[1];
y=coin[2];
z=coin[3];
}

