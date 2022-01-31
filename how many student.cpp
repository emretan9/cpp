#include<iostream>
using namespace std;
int main (){
	int sayilar[4]={0,0,0,0};
	int notlar[10]={45,60,30,78,80,55,49,95,85,50};
	int i=0;
	for(i=0;i<10;i++){
		if(notlar[i]<50){
			sayilar[0]++;
		}
		else if(notlar[i]<70){
			sayilar[1]++;
		}
		else if(notlar[i]<90){
			sayilar[2]++;
		}
		else{
			sayilar[3]++;
		}
		
	}
	for(i=0;i<4;i++){
		cout<<"group"<<i+1<<" "<<sayilar[i]<<"students"<<endl;
	}
}
