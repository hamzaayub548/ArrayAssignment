#include<iostream>
using namespace std;
class Array{
	private:
		int arr[10];
		int min;
		public:
			void input()
			{
				cout<<"Enter the Elements of the Array : "<<endl;
				for(int i=0 ;i< 10; i++)
				{
					cin>>arr[i];
				}
			}
			void minimum(){
				min=arr[0];
				for(int i=0;i<10;i++){
					if(arr[i]<min){
						min=arr[i];
					}
				}
				cout<<"The Minimum Number in Array is = "<<min;
			}
};
int main()
{
	Array obj;
	obj.input();
	obj.minimum();
	return 0;
}
