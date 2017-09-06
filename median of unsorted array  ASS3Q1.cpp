#include<iostream>
using namespace std;
//FOR THE TIME BEING ASSUME THE ARRAY TO BE OF ODD NO. ELEMENTS
//Lets try doing it without sorting 

int main(){
int N;
cout<<"enter the number of elements in the array"<<endl;
cin>>N;
int arr[N], b[N];

cout<<"enter the integers : "<< endl;
for (int i=0; i<N; i++){cin>>arr[i];}

//pick up a reference element, ... let it be arr[0]
anchor = arr[0]

//now compare and put 'lows' to left and 'highs' to right 
test = true;
int l=0, r=N-1;
int n =N;

while(test){
for (int i=l; i<r; i++){
	if (arr[i]<= anchor){b[l] = arr[i]; l++;}
	if (arr[i]>anchor){b[r] = arr[i]; r--;}
	}
arr = b;
n=r;
if (l+1 == N/2){cout<<b[N/2]<<endl; test=false;break;}
if (r>n/2){
	l=0;
	n=r;
	}
if (r<n/2){
	l = l;
	r = n;}
if (l-r==1) test=0; //stop iteration
anchor = b[l];//updating the value of anchor 
}
cout<<"the median is"<<b[N/2]<<endl;
}

