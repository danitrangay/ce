#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<fstream>
#include<windows.h>
#include<conio.h>
#include<string.h>
#include<string>
#include <cstdlib>
#include <cstring>
#include <sstream>
#include <math.h>
#include<locale>

using namespace std;
int menu(){
	int x;
	system("cls");
	cout<<"Bienvenido"<<endl;
	cout<<"1. Calculadora"<<endl;
	cout<<"2. Par o Impar"<<endl;
	cout<<"3. Convertir"<<endl;
	cout<<"4. Palindroma"<<endl;
	cout<<"5. Conversion a romanos"<<endl;
	cout<<"6. Numero a letras"<<endl;
	cout<<"7. entero con decimal a letras"<<endl;
	cout<<"8. Tabla de multiplicar"<<endl;
	cout<<"9. Tablas del 1 al 10"<<endl;
	cout<<"10. Forma grafica"<<endl;
	cout<<"11. Decimal a Binario"<<endl;
	cout<<"12. Decimal a Hexadecimal"<<endl;
	cout<<"13. Crear figuras geometricas"<<endl;
	cout<<"14. Mover un punto"<<endl;
	cout<<"15. Simular un cajero"<<endl;
	cout<<"16. Calcular hipotenusa"<<endl;
	cout<<"17. Raiz cuadrada"<<endl;
	cout<<"18. Cuadrado"<<endl;
	cout<<"19. Mayor o Menor"<<endl;
	cout<<"20. Importe de venta"<<endl;
	cin>>x;
	return x;
}

int calculadora(){
	system("cls");
	int n1, n2, suma=0, resta=0, multi=0, div=0;
	
	cout<<"digite un numero: "; cin>>n1;
	cout<<"digite otro numero: "; cin>>n2;
	suma = n1+n2;
	resta=n1-n2;
	multi=n1*n2;
	div=n1/n2;
	
	cout<<"\nLa suma es: "<<suma<<endl;
	cout<<"\nLa resta es: "<<resta<<endl;
	cout<<"\nLa multiplicacion es: "<<multi<<endl;
	cout<<"\nLa division es: "<<div<<endl;
	system("pause");
}
int paroimpor(){
	system("cls");
	int numero;
	cout<<"digite un numero: ";
	cin>>numero;
	if(numero==0){
		cout<<"el numero es cero";
	}else if(numero%2==0){
		cout<<"el numero es par";
	}else{
		cout<<"el numero es impar";
	}
	system("pause");
}

int convertir(){
	system("cls");
	double pulgadas, milimetros, yardas, metros, millas, kilometros;
	int opcion;
	cout<<"difine"<<endl;
	cout<<"1. pulgadas a milimetros"<<endl;
	cout<<"2. Yardas a metros: "<<endl;
	cout<<"3. Millas a kilometros: "<<endl;
	cin>>opcion;
		switch(opcion){
	case 1:
		system("cls");
		cout<<"---pulgadas a milimetros---"<<endl;
		cout<<"ingrese la cantidad de pulgadas: "<<endl;
		cin>> pulgadas;
		milimetros = pulgadas * 25.40;
		cout<<pulgadas<<" pulgadas esquivalen a"<< milimetros <<" milimetros"<<endl;
		system("pause");
	break;
	case 2:
		system("cls");
		cout<<"---Yardas a metros---"<<endl;
		cin>> yardas;
		milimetros = yardas * 0.9144;
		cout<<yardas<<" yardas esquivalen a"<< metros <<" metros"<<endl;
		system("pause");
	break;
	case 3:
		system("cls");
		cout<<"---Millas a kilometros---"<<endl;
		cin>> millas;
		milimetros = millas * 1.6093;
		cout<<millas<<" pulgadas esquivalen a"<< kilometros <<" kilometros"<<endl;
		system("pause");
	break;
	system("pause");
}
}

int palindroma(){
	system("cls");
	char cadena[100], copia[100];
	cout<<"Ingrese palabra: "<<endl;
	cin>>cadena;
	for(int i=(strlen(cadena)-1);i>=0;i--){
		copia[strlen(cadena)-1-i]=cadena[i];
	}
	copia[strlen(cadena)]='\0';
	if(strcmp(cadena,copia)==0){
		cout<<"Es palindroma";
	}else{
		cout<<"la palabra no es palindroma";
	}
	system("pause");
}

int conversion(){
	system("cls");
	int num,unidades,decenas,centenas,millar;
	cout<<"ingresa el numero: "<<endl;
	cin>>num;
	unidades = num%10; num/= 10;
	decenas =num%10; num/= 10;
	centenas = num%10; num/= 10;
	millar = num%10; num/= 10;
	switch(millar){
	case 1: cout<<"M"; break;
		case 2: cout<<"MM"; break;
		case 3: cout<<"MMM"; break;
}
		switch(centenas){
		case 1: cout<<"C"; break;
		case 2: cout<<"CC"; break;
		case 3: cout<<"CCC"; break;
		case 4: cout<<"CD"; break;
		case 5: cout<<"D"; break;
		case 6: cout<<"DC"; break;
		case 7: cout<<"DCC"; break;
		case 8: cout<<"DCCC"; break;
		case 9: cout<<"CM"; break;
}
		switch(decenas){
		case 1: cout<<"X"; break;
		case 2: cout<<"XX"; break;
		case 3: cout<<"XXX"; break;
		case 4: cout<<"XL"; break;
		case 5: cout<<"L"; break;
		case 6: cout<<"LX"; break;
		case 7: cout<<"LXX"; break;
		case 8: cout<<"LXXX"; break;
		case 9: cout<<"XC"; break;
}
		switch(unidades){
		case 1: cout<<"I"; break;
		case 2: cout<<"II"; break;
		case 3: cout<<"III"; break;
		case 4: cout<<"IV"; break;
		case 5: cout<<"V"; break;
		case 6: cout<<"VI"; break;
		case 7: cout<<"VII"; break;
		case 8: cout<<"VIII"; break;
		case 9: cout<<"IX"; break;
		
}
system("pause");
}

int numletra(){
	system("cls");
	int numero, n1, n2, n3, n4, n5;
   cout<<"Escribe un numero de uno a diez mil (numeros): "; cin>>numero;
   n1 = numero / 10000;
   n2 = (numero / 1000) % 10;
   n3 = (numero / 100) % 10;
   n4 = (numero / 10) % 10;
   n5 = (numero % 10);
 
   cout<<"\n"<<n1<<" -> Decenas de mil"<<endl;
   cout<<n2<<" -> Unidades de mil"<<endl;
   cout<<n3<<" -> Centenas"<<endl;
   cout<<n4<<" -> Decenas"<<endl;
   cout<<n5<<" -> Unidades \n"<<endl; 
   if(numero > 10000){
      cout<<"El numero ingresado excede el rango de valores";
   }else{
      if(n1 == 1){
      cout<<"Diez mil";
      }
      //Sentencia para determinar los miles
      if(n2 == 1){
         cout<<"MIL ";
      }else if(n2 == 2){
         cout<<"DOS MIL ";
      }else if(n2 == 3){
         cout<<"TRES MIL ";
      }else if(n2 == 4){
         cout<<"CUATRO MIL ";
      }else if(n2 == 5){
         cout<<"CINCO MIL ";
      }else if(n2 == 6){
        cout<<"SEIS MIL ";
      }else if(n2 == 7){
         cout<<"SIETE MIL ";
      }else if(n2 == 8){
         cout<<"OCHO MIL ";
      }else if(n2 == 9){
         cout<<"NUEVE MIL ";
      }
      //Setencia para determinar los cientos
      if(n3 == 1 && n4 == 0 && n5 == 0){
         cout<<"CIEN";
      }else if(n3 == 1){
         cout<<"CIENTO ";
      }else if(n3 == 2){
         cout<<"DOSCIENTOS ";
      }else if(n3 == 3){
         cout<<"TRESCIENTOS ";
      }else if(n3 == 4){
         cout<<"CUATROCIENTOS ";
      }else if(n3 == 5){
         cout<<"QUINIENTOS ";
      }else if(n3 == 6){
         cout<<"SEISCIENTOS ";
      }else if(n3 == 7){
         cout<<"SETECIENTOS ";
      }else if(n3 == 8){
         cout<<"OCHOCIENTOS ";
      }else if(n3 == 9){
         cout<<"NOVECIENTOS ";
      }
      //Setencia para determinar las decenas
      if(n4 == 1 && n5 == 0){
         cout<<"Diez";
      }else if(n4 == 1 && n5 == 1){
         cout<<"ONCE";
      }else if(n4 == 1 && n5 == 2){
         cout<<"DOCE";
      }else if(n4 == 1 && n5 == 3){
         cout<<"TRECE";
      }else if(n4 == 1 && n5 == 4){
         cout<<"CATORCE";
      }else if(n4 == 1 && n5 == 5){
         cout<<"QUINCE";
      }else if(n4 == 1){
         cout<<"DIECI";
      }
      if(n4 == 2 && n5 == 0){
         cout<<"VEINTE";
      }else if(n4 == 2){
         cout<<"VEINTI";
      }else if(n4 == 3 && n5 == 0){
         cout<<"TREINTA";
      }else if(n4 == 3){
         cout<<"TREINTA Y ";
      }else if(n4 == 4 && n5 == 0){
         cout<<"CUARENTA";
      }else if(n4 == 4){
         cout<<"CUARENTA Y ";
      }else if(n4 == 5 && n5 == 0){
         cout<<"CINCUENTA";
      }else if(n4 == 5){
         cout<<"CINCUENTA Y ";
      }else if(n4 == 6 && n5 == 0){
         cout<<"SESENTA";
      }else if(n4 == 6){
         cout<<"SESENTA Y ";
      }else if(n4 == 7 && n5 == 0){
         cout<<"SETENTA";
      }else if(n4 == 7){
         cout<<"SETENTA Y ";
      }else if(n4 == 8 && n5 == 0){
         cout<<"OCHENTA";
      }else if(n4 == 8){
         cout<<"OCHENTA Y ";
      }else if(n4 == 9 && n5 == 0){
         cout<<"NOVENTA";
      }
      else if(n4 == 9){
         cout<<"NOVENTA Y ";
      }
      //Sentencia para determinar las unidades 
      if(n5 == 1 && n4 > 1){
         cout<<"UNO";
      }else if(n5 == 1 && n4 == 0){
         cout<<"UNO"; 
      }else if(n5 == 2 && n4 > 1){
         cout<<"DOS";
      }else if(n5 == 2 && n4 == 0){
         cout<<"DOS";
      }else if(n5 == 3 && n4 > 1){
         cout<<"TRES";
      }else if(n5 == 3 && n4 == 0){
         cout<<"TRES"; 
      }else if(n5 == 4 && n4 > 1){
         cout<<"CUATRO";
      }else if(n5 == 4 && n4 == 0){
         cout<<"CUATRO"; 
      }else if(n5 == 5 && n4 > 1){
         cout<<"CINCO";
      }else if(n5 == 5 && n4 == 0){
         cout<<"CINCO";
      }else if(n5 == 6){
         cout<<"SEIS";
      }else if(n5 == 7){
         cout<<"SIETE";
      }else if(n5 == 8){
         cout<<"OCHO";
      }else if(n5 == 9){
         cout<<"NUEVE";
      }
      system("pause");
   }
   
}

int letnum(){
	system("cls");
	char * texto="90.32";
	float numero;
	numero = atof(texto);
	numero=numero+10;
	cout<<numero<<endl;
	system("pause");
}
int tabla(){
	int num1;
	system("cls");
	do{
		cout<<"digite un numero entre 0 a 10 para la tabla de multiplicar: "; cin>>num1;
	}while((num1<1)||(num1>10));
		for(int i=1; i<=10;i++){
		cout<<num1<<" * "<<i<<" = "<<num1*i<<endl;
	}
	system("pause");
}
int tablas(){
	int num1;
	system("cls");
	do{
		cout<<"digite un numero entre 0 a 10 para la tabla de multiplicar: "; cin>>num1;

	}while((num1<1)||(num1>10));
		for(int i=1; i<=10;i++){
		cout<<num1<<" * "<<i<<" = "<<num1*i<<endl;
	}
	system("pause");
}

int binario(){
	system("cls");
	int decimal;
	short binario[8];
	cout<<"coloca el valor decimal a convertir: "<<endl;
	cin>>decimal;
	for(int i=0; i<8; i++){
		binario[i]=decimal%2;
		decimal/=2;
	}
	cout<<"El numero en binario es: "<<endl;
	for(int i=7; i>0;i--){
		cout<<binario[i];
	}
	cout<<endl;
	system("pause");
}

int hexadecimal(){
	system("cls");
	int mynum;
	cout << "\n    Entra un numero: ";
	cin >> mynum;
	cout.unsetf(ios::dec);
	cout.setf(ios::hex | ios::showbase);
	cout << "\n    En hexadecimal: " << mynum;
	cout.unsetf(ios::hex);
	cout.setf(ios::oct);
 	cout << "\n    En Octal: " << mynum;
	cout.unsetf(ios::oct | ios::showbase);
	cout.setf(ios::dec);
	cout << "\n\n";
	system("pause");
}

int figura(){
	system("cls");
	int n=10;
	for(int f=0;f<n;f++){
		for(int c=f;c<n;c++){
			cout<<c;
		}cout<<endl;
	}
	system("pause");
}

int punto(){
	int x;
	system("cls");
	
	 for( int i=1 ; i<=x ; i++ ){
        for( int j=1 ; j<=i ; j++ ){
            cout<<"*";
        }
        cout<<"\n";
    }
    for( int i=(x-1) ; i > 0 ; i-- ){
        for( int j=1 ; j<=i ; j++ ){
            cout<<"*";
        }
        cout<<"\n";
    }
system("pause");
}

int cajero(){
	int saldo_inicial = 1000;
	int saldo, reintegro,opcion,agregar;
	system("cls");
	cout<<"\tBienvenido";
	cout<<"\nEscoja una opion: ";
	cout<<"\n1. Ingreso en cuenta";
	cout<<"\n2. Reintegro";
	cout<<"\n3.ver saldo de cuenta";
	if(opcion==1){
		cout<<"ingrese la cantidad a despositar: ";
		cin>>agregar;
		saldo=saldo_inicial+agregar;
		cout<<"\nCantidad disponible: "<<saldo;
	}else if(opcion==2){
		cout<<"\nCuanta cantidad desea retirar: ";
		cin>>reintegro;
		if(reintegro>1000){
			cout<<"la cantidad es mayor a 1000";
			cin>>reintegro;
		}
		saldo=saldo_inicial-reintegro;
		cout<<"\nCantidad disponible en uenta: "<<saldo;
	}else if(opcion==3){
		cout<<"\nLa cantidad disponible en cuenta es de: "<<saldo_inicial;
	}else{
		cout<<"se equivoco";
	}
	
		system("pause");

	
}

int hipotenusa(){
	system("cls");
	int co,ca;
	float h;
	cout<<"Cateto opuesto: "<<endl;
	cin>>co;
	cout<<"Cateto adyacente: "<<endl;
	cin>>ca;
	h=sqrt(pow(co,2)+pow(ca,2));
	cout<<"la hipotenusa es: "<<h;
	cin.get();
	system("pause");
}
int raiz(){
	float x,y,resultado=0;
	system("cls");
	cout<<"Diginite el valor de x: ";cin>>x;
	cout<<"Diginite el valor de y: ";cin>>y;
	resultado=(sqrt(x))/(pow(y,2)-1);
	cout<<"\nEl resultado es: "<<resultado<<endl;	
	system("pause");
}
int cuadrado(){
	float p,o;
	system("cls");
	cout<<"digite un numero: ";
	cin>>o;
	p=o*o;
	cout<<"el cuadrado de "<<o<<" es "<<p;

system("pause");
}

int mayormenor(){
	system("cls");
	 int x1,x2,x3;
	cout<<"ingrea primer valor: "<<endl;
	cin>>x1;
	cout<<"ingrea segundo valor: "<<endl;
	cin>>x2;
	cout<<"ingrea tercera valor: "<<endl;
	cin>>x3;
	if((x1>=x2)&&(x1>=x3)){
		cout <<"el mayor es el primero numero"<<x1;
	}
	if((x2>=x1)&&(x2>=x3)){
		cout <<"el mayor es el segundo numero"<<x2;
	}
	if((x3>=x1)&&(x3>=x2)){
		cout <<"el mayor es el tercero numero"<<x3;
}
	getch();
system("pause");
}

int importe(){
	system("cls");
	float cant,precio,iv,igv,total;
	cout<<"ingrese el cantidad deseada: "<<endl;
	cin>>cant;
	cout<<"ingrese el precio correcto: "<<endl;
	cin>>precio;
	iv=cant*precio;
	igv=iv*0.18;
	total=iv+igv;
	cout<<"el importe es: "<<iv<<endl;
	cout<<"el igv es: "<<igv<<endl;
	cout<<"el total es: "<<total<<endl;
	system("pause");
}
int main(){
	
	int op;
	do{
		system("cls");
		op=menu();
		switch(op){
			case 1:
				calculadora();
			break;
			case 2:
				paroimpor();
			break;
			case 3:
				convertir();
			break;
			case 4:
				palindroma();
			break;
			case 5:
				conversion();
			break;
			case 6:
				numletra();
			break;
			case 7:
				letnum();
			break;
			case 8:
				tabla();
			break;
			case 9:
				tablas();
			break;
			case 10:
				binario();
			break;	
			case 11:
				binario();
			break;
			case 12:
				hexadecimal();
			break;
			case 13:
				figura();
			break;	
			case 14:
				punto();
			break;	
			case 15:
				cajero();
			break;	
			case 16:
				hipotenusa();
			break;	
			case 17:
				raiz();
			break;	
			case 18:
				cuadrado();
			break;
			case 19:
				mayormenor();
			break;
			case 20:
				importe();
			break;
		}
	}while(op!=21);
	return 0;
}
