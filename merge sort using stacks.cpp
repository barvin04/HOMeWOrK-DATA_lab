/* concept of merge sort: Divide the unsorted array into n sub-arrays, each containing 1 element. Repeatedly merge sub-arrays to produce new SORTED sublists ultil there is only 1 sublist remaining. */

/* concept of merge sort using stacks : Take first two elements of the stack, apply sort application on them(compare index wise values) and then push back the single element into the stack */

#include <iostream>
//#include <cmath>
#include <vector>
using namespace std;

int mergesort(vector<int> s){
	vector<int> X; //X is the first array 
	X=s;
	int i=0,j=0,k=0;
	n = X.size();
	int a[n], b[n]; //they will keep the elements bounded

	a = X[0];
	b= X[1];
	g = a.size();
	h = b.size();
	int c[g+h];	//c is the second array 
	while (i<g || j<h){ //sorting
		if (a[i]<=b[i]){
			c[k] = a[i];
			i++;	
			       }
		else{
			c[k] = b[j];
			j++;
		    }
		k++;      }

	while(i<g){
		c[k]= a[i];
		k++;
		i++;}		
	while (j<h){
		c[k] = b[j];
		j++;
		k++;
		   }
	X[0] = c; //pushing back the element in this steps
	X[1] = [X[n-1]]; //second element should be a array in our method /* we would like to have the third element, but we are picking up the last, as picking up third would require us to relocate all the elements one step back. Till now all elements with index more than one were not touched so it doesn't matter if the element moved is third or the last */

	if ( X.size==1){return X};
	else( mergesort(X) ;)

		    }


int main(){
	int input;
	vector<int> a, b;
	
	
	while (cin>>input){ a.push_back(input); } //take input 
	m = a.size();	

	//make the first two elements as singleton array
	for (int i=0; i<2, i++){a[i]= [ a[i] ];}
	
	b = mergesort(a);
	
	cout<<"The sorted array is : "<<
	for (int i=0; i<m; i++){cout<<b[i]<<endl;}
		


          }
