// to find z,y,x such for max(|z-y|+|y-x|) where z>=y>=x
//this is equivalent to z-y + y-x => max(z-x) 
// therefore we need to find max in array => z, and min=>x


#include<iostream>
using namespace std;

void main(){
int max, num, min;

cout<<"enter no. into array : "<<endl;
cin>>num; 
max = num;//initialize
min = num;//initialize

for (int i=0; num!=-1;i++){
	cout<<"enter no. into array : "<<endl;
	cin>>num;
	if (num>max) max = num;
	if (num<min) min = num;
			}
cout<<"The maximum value is : "<<(max-min)<<endl;
cout<<"z is : "<<max<<endl;
cout<<"x is : "<<min<<endl;
cout<<"y can take any value between z and x !!"<<endl;
}
