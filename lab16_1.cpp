#include <iostream>
using namespace std;

int main(){
int a=5;
char b='A';
char &c=b;
int *x=&a;
char *y=&b;
int **z=&x;
cout << a << " " << b << " " << c << " " << x << " " << (int *)y << " " << z;
cout << "\n" << &a << " " << (int *)&b << " " << (int *)&c << " " << &x << " " << &y << " " << &z;
c='F';
cout << "\n" << a << " " << b << " " << c << " " << x << " " << (int *)y << " " << z;
*y='W';
cout << "\n" << a << " " << b << " " << c << " " << x << " " << (int *)y << " " << z;
*x=6;
cout << "\n" << a << " " << b << " " << c << " " << x << " " << (int *)y << " " << z;
**z=7;
cout << "\n" << a << " " << b << " " << c << " " << x << " " << (int *)y << " " << z;	
	
	return 0;
}