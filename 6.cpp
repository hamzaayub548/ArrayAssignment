#include<iostream>
using namespace std;
class Array{
	private:
		int arr[10];
		int max;
		public:
			void input()
			{
				cout<<"Enter the Elements of the Array : "<<endl;
				for(int i=0 ;i< 10; i++)
				{
					cin>>arr[i];
				}
			}
			void maximum(){
				max=arr[0];
				for(int i=0;i<10;i++){
					if(arr[i]>max){
						max=arr[i];
					}
				}
				cout<<"The Maximum Number in Array is = "<<max;
			}
};
int main()
{
	Array obj;
	obj.input();
	obj.maximum();
	return 0;
}
