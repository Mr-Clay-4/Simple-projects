//CALCULATOR THE IMC (BODY MASS INDEX)
//The user enter weight and height 
//Calculate the IMC
//Show the result a recommendation 

#include <iostream>
using namespace std;

int main() //this is the program starts whatever your write inside {} is what's executed
{
	float weight, height, imc;
	
	cout<< "enter your weight:";
	cin>>  weight; 
	
	cout<< "enter your height:";
	cin>>  height; 
	
// calculate the imc	
imc=weight/(height*height);
cout<<"your imc is:"<<imc<<endl;

// evaluate the result with conditional 

if (imc<18.5){
	std::cout<<"your weight is low"<<endl;
} else if (imc<25){
	std::cout<<"tour weight is normal"<<endl;
} else if (imc<30){
	std::cout<<"your have overweight"<<endl;
} else{
	std::cout<<"your have obesty"<<endl;
}
	return 0;
}
