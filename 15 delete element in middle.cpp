#include<iostream>
using namespace std;
class Array{
	private:
		int arr[11];
	public:
	void input(){
		cout<<"Enter Ten Elements of Array:"<<endl;
		for(int i=0;i<11;i++){
			cin>>arr[i];
		}
	}
	void removing(){
		cout<<"After Removing Element From Starting Position: ";
		for(int i=5;i<11;i++){
			arr[i]=arr[i+1];
		}
		for(int i=0;i<10;i++){
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
