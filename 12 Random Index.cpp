#include<iostream>
#include<time.h>
using namespace std;
class Array{
	private:
		int arr[];
		int size;
		int rnum;
	public:
	void input(){
		cout<<"Enter the Size of Array:";
		cin>>size;
		for(int i=0;i<size;i++){
			cin>>arr[i];
		}
	}
	void random(){
		srand(time(0));
		rnum=rand()%size;
		cout<<"The Random Number of Array is = "<<arr[rnum];
	}	
};
int main(){
	Array obj;
	obj.input();
	obj.random();
	return 0;
}
