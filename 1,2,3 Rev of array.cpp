#include<iostream>
using namespace std;
class Array{
	private:
		int arr1[5];
	public:
	void input(){
		cout<<"Enter Five Elements:"<<endl;
		for(int i=0;i<5;i++){
			cin>>arr1[i];
		}
	}
	void assign(int arr2[5]){
		arr2[5]=arr1[5];
		cout<<"You Entered These Elements:"<<endl;
		for(int i=0;i<5;i++){
			cout<<arr2[i];
		}
	}
	void print(){
		cout<<"Reverse of the Array:"<<endl;
		for(int i=4;i>=0;i--){
			cout<<arr1[i];
		}
	}	
};
int main(){
	Array obj;
	obj.input();
	obj.print();
	return 0;
}
