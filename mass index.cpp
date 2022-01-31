#include<iostream>

using namespace std;
int main(){
	float weight,height;
	string category;
	cout<<"Enter your height in meters";
	cin>>height;
	cout<<"Ener you weight in kgs:";
	cin>>weight;
	float bmi=weight/(height*height);
	if(bmi<=18.5){
		category="underweight";
			}
	else if(bmi>18.5 && bmi<=24.9){
		category="normal weight";
	}
	else if(bmi>25 && bmi<=29.9){
		category="overweight";
	}
	else{
		category="obese";
	}
	cout<<"You are "<<category<<". You bmi="<<bmi<<endl;
	return 0;
	}
