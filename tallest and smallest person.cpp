#include<iostream>
using namespace std;

int main(){
	int height,number_of_students;
	int max_height,min_height;
	int total_height;
	float avg_height;
	number_of_students=10;
	total_height=0;
	max_height=0;
	min_height=3000;
	int i=1;
	while(i<=number_of_students){
		cout<<"Enter height of student "<<i;
		cin>>height;
		total_height=total_height+height;
		//calculate max height
		if(max_height<height){
			max_height=height;
		}
		//calculate min. height in the class
		if(min_height>height){
			min_height=height;
		}
		
		i++;
	}
	avg_height=(float)total_height/number_of_students;
	cout<<"Average height of th class:"<<avg_height<<endl;
	cout<<"Shortest person with height:"<<min_height<<endl;
	cout<<"Longest person with height:"<<max_height;
	return 0;
}
