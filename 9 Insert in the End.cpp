#include<iostream>
using namespace std;
class Array{
	private:
		int arr[100]={4,5,6,3,8};
		int num;
	public:
		void input(){
			cout<<"Enter A Number:";
			cin>>num;
		}
		void output(){
			arr[5]=num;
			cout<<"The New Array is = ";
			for(int i=0;i<6;i++){
				cout<<arr[i];
			}
		}
};
int main(){
	Array obj;
	obj.input();
	obj.output();
	return 0;
}
