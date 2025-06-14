#include <iostream>
 
int main()
{
    char op; // char de tipo caracter y op de operador
    double num1; 
    double num2;
    double resultado;

    std::cout <<"------Calculadora------\n";
    
    
    std::cout <<"realice la operacion que quiera (+, -, *, y /)\n";
    std::cin >> op;
    
    std::cout <<"ingrese el valor 1:";
    std::cin >> num1;
    
    std::cout <<"ingrese el valor 2:";
    std::cin >> num2;
	
	switch(op)
	{
		case '+':  
		resultado=num1+num2;
		std::cout<<"El resultado es:"<< resultado<<std::endl;
		break;		
	
		case '-':  
		resultado=num1-num2;
		std::cout<<"El resultado es:"<< resultado<<std::endl;
		break;		
		
		case '*':  
		resultado=num1*num2;
		std::cout<<"El resultado es:"<< resultado<<std::endl;
		break;		

		case '/':  
		resultado=num1/num2;
		std::cout<<"El resultado es:"<< resultado<<std::endl;
		break;
		default:
		std::cout<<"error!\n";		
		}
}

