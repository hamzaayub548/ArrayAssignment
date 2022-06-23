#include<iostream>
using namespace std;
class Array{
	private:
		int arr[10];
	public:
	void input(){
		cout<<"Enter Elements of Array:"<<endl;
		for(int i=0;i<10;i++){
			cin>>arr[i];
		}
	}
	void len(){
		int lenght=sizeof(arr)/sizeof(arr[0]);
		cout<<"The Lenght of an Array is = "<<lenght;
	}	
};
int main(){
	Array obj;
	obj.input();
	obj.len();
	return 0;
}
