#include<iostream>
using namespace std;

class solution{
	public:
		void maxSubArray(int arr[]){
			
			int ans = INT_MIN;
			int sum = 0;
			int n = sizeof(arr[n])/sizeof(arr[0]);
			for(int i=0; i<n; i++)
			{
				sum = sum + arr[i];
				ans = max(ans,arr[i]);
				
				if(sum<0)
					sum=0;
			}
			return ans;
	}
};

int main()
{
	int arr[] = {1,2,3,4,5};
	
	cout<<maxSubArray(arr);
	return 0;
}

