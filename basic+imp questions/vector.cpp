#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> vec;
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
//	1st way to print element of vector
	for(int i=0; i<vec.size(); i++)
	{
		cout<<vec[i]<<" ";
	}cout<<endl;
	
//	2nd way to print element of vector
	
	vector<int>::iterator itr;
	for(itr = vec.begin(); itr!=vec.end(); itr++)
	{
		cout<<*itr<<" ";	//itr is a pointer that'swhy we use *
	}cout<<endl;
	
//	3rd way to print element of vector

//	for(auto element:vec)
//	{
//		cout<<element<<" ";
//	}

	vec.pop_back();
	
	vector<int> vec2(3,10);
	
	swap(vec,vec2);
	for(int i=0; i<vec.size(); i++)
	{
		cout<<vec[i]<<" ";
	}cout<<endl;
	for(int i=0; i<vec2.size(); i++)
	{
		cout<<vec2[i]<<" ";
	}cout<<endl;
	
//	vec.push_back(5);
//	vec.push_back(3);
//	vec.push_back(2);
//	
//	sort(vec.begin(),vec.end());
//	for(int i=0; i<vec.size(); i++)
//	{
//		cout<<vec[i]<<" ";
//	}cout<<endl;
	
	return 0;
}

