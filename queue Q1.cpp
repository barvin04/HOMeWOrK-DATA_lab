//sequential queue is a queue
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main(){
	int t,n,e,s,l,e2;	
	/*
	processes: 1.enqueue 2.dequeue 3.if_a1_empty 	
	*/	
	vector<int> a1,a2;
	a1.push_back(3);//start with something in a1
	
	t = 1;
	while(t){
		cout<<"enter 1 for enqueue; 2 for dequeue; 3 for exit"<<endl;
		cin>>n;
		if (n==1){cout<<"enter the number "<<endl;
			cin>>e;
			a2.push_back(e);	
			}
		
		s=sizeof(a1);
		if(s==0){
			//move elements
			l=sizeof(a2);
			for (int i=0; i<l; i++){
				e2=a2[l-i-1];
				a1.push_back(e2);
						}
			}		
		
		if (n==2){
			s= sizeof(a1);
			if (s==0){cout<<"the queue is already empty!! Underflow!!";}
			if (s!=0){cout<<"presently first element deleted"<<endl;}
			}
		
		
		if (n==3){t=1;}
		}
	
return 0;
}

