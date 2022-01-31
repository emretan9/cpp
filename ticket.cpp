#include<iostream>
using namespace std; 

int main(){
	float bilet_ucreti;
	int sehir;
	int yas;
	cout<<"Where you live in?";
	cin>>sehir;
	cout<<"Enter your age:";
	cin>>yas;
	switch(sehir){
		case 34:
			if(yas<18){
				bilet_ucreti=1.5;
			}
		    else if(yas>=18 && yas<65){
			    bilet_ucreti=3.5;
		    }
		    else{
			    bilet_ucreti=2.1;
            }   
		    break;
		case 35:
		    if(yas<18){
			 	bilet_ucreti=1.3;
			}
			else{
			bilet_ucreti=2.5;}
		    break;
		default:
			bilet_ucreti=3.0;
			break;
		}
	cout<<"Bilet ücretiniz:"<<"bilet_ucreti";
		
		
	return 0;
}
