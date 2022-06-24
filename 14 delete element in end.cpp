#include<iostream>
using namespace std;
class Array{
	private:
		int arr[10];
	public:
	void input(){
		cout<<"Enter Ten Elements of Array:"<<endl;
		for(int i=0;i<10;i++){
			cin>>arr[i];
		}
	}
	void removing(){
		cout<<"After Removing Element From Starting Position: ";
		
		for(int i=0;i<9;i++){
			cout<<arr[i];
		}
	}	
};
int main(){
	Array obj;
	obj.input();
	obj.removing();
	return 0;
}
