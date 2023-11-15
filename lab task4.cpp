   // LAB 4TASK 1
 #include <iostream>

using namespace std;
int main()
{

	int sum;
	int x;
	int p;
	for(int d = 0; d<10; d+=1){
		cin>>p;
		sum = sum + p;
	}
	cout<<"The sum of the first 10 natural numbers is "<<sum <<endl;
	
	//TASK 2
	#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    int counter = 1;

    for (int i = 1; i <= 10; i++) {
        cout << n << " * " << i << " = " << n * i << endl;
    }

    return 0;
}
			 //TASK 3;
			 
			 		 #include<iostream>
using namespace std;
int main(){
int fact;
cout<<"enter the number for factorial";
cin>>fact;
int res=1;
int i;

	for(i=fact;i>0;i--)
{

	res=res*i;



	}
		cout<<res;
		
	
			return 0;
			 
			 //TASK 4;
			 #include <iostream>
using namespace std;

int main() {
    int n, t1 = 0, t2 = 1, nextTerm = 0;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; ++i) {
       
        if(i == 1) {
            cout << t1 << ", ";
            continue;
        }
        if(i == 2) {
            cout << t2 << ", ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        
        cout << nextTerm << ", ";
    }
    return 0;
}
			 
