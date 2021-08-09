#include <iostream>
#include <math.h>

using namespace std;

class Formulas {
	public:		
		
		void arearectangulo(){
			int n1, n2, area;
			
			cout<<"**** Area del rectangulo *****";
			cout<<endl;
			cout<<"  Ingrese la base: ";
			cin>>n1;
			cout<<" Ingrese la altura: ";
			cin>>n2;
			
			cout<<" El area del rectangulo es: "<<(n1 * n2)<<endl<<endl;
			
			system("pause");
			system("cls");
			}
		
	   void areacuadrado(){
	   	int lado;
	   	
	   	cout<<"**** Area del cuadrado ****";
	   	cout<<endl;
	   	cout<<"  Ingrese el lado: ";
		cin>>lado;
		cout<<" El area del cuadrado es: "<<lado * lado<<endl<<endl;
		
		system("pause");
		system("cls");
	   	
	   }
	   void areacirculo(){
	   	double radio, area;
	   	
	   	cout<<"**** Area del circulo ****";
	   	cout<<endl;
	   	cout<<" Ingrese el Radio ";
	   	cin>>radio;
	   	
	   	area = M_PI * pow(radio, 2);
	   	cout<<" El area del circulo es: "<<area<<endl;
	   }
		

};

int main(int argc, char** argv) {
	int lado, radio, area;
	Formulas f;
	f.arearectangulo();
	f.areacuadrado();
	f.areacirculo();
			

	
	return 0;

}
	

