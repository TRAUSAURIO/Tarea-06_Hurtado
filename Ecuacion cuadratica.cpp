#include<iostream>
#include<cmath>

using namespace std;

int main()

{
    double a,b,c; //variables reales de doble presicion
    double d; //discriminante

    cout<<"Ingresa el valor de a: ";
    cin>>a;

    cout<<"Ingresa el valor de b: ";
    cin>>b;

    cout<<"Ingresa el valor de c: ";
    cin>>c;

    if(a==0)
    {
        cout<<endl<<"Imposible dividir para 0";
    }
    else{
        //Calculamos el discriminante (b*b-4*a*c)
        d=(b*b) - (4*a*c);
        if(d<0)
        {
            cout<<endl<<"Las soluciones son imaginarias";
        }else{

            double x1 = (-b + sqrt(d)) / (2*a);
            double x2 = (-b - sqrt(d)) / (2*a);
            cout<<endl<<"Valor de x1 = " <<x1;
            cout<<endl<<"Valor de x2 = " <<x2;
        }
    }

    return 0;
}