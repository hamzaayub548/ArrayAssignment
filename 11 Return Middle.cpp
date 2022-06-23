#include<iostream>
using namespace std;
class Array{
	private:
		int arr[11];
	public:
		void input(){
			cout<<"Enter Elements of Array:"<<endl;
			for(int i=0;i<11;i++){
				cin>>arr[i];
			}
		}
		void output(){
			cout<<"The Middle Number of Array is = "<<arr[11/2];
		}
};
int main(){
	Array obj;
	obj.input();
	obj.output();
	return 0;
}
