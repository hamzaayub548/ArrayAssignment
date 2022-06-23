#include<iostream>
using namespace std;
class Array{
	private:
		int arr[100]={4,5,6,3};
		int num;
	public:
		void input(){
			cout<<"Enter A Number:";
			cin>>num;
		}
		void output(){
			for(int i=4;i>=2;i--){
				arr[i+1]=arr[i];
			}
			arr[2]=num;
			cout<<"The New Array is = ";
			for(int i=0;i<5;i++){
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
