#include <iostream>
#include <stdexcept>
#include <cmath>
using namespace std;
float esnumero(string);
void limpiar();
void suma();
void resta();
void mult();
void div();
void root();
float res=0;
int main()
{
    int opcion=0, elegido=0;
    string comprobador;
    float numero1=0, numero2=0;
    while(opcion!=6){
        opcion=0;
        cout<<"calculadora"<<endl;
        cout<<"1. suma"<<endl;
        cout<<"2. resta"<<endl;
        cout<<"3. multiplicacion"<<endl;
        cout<<"4. division"<<endl;
        cout<<"5. raiz"<<endl;
        cout<<"6. salir"<<endl;
        cout<<"\n Eliga el numero de la opcion que desee realizar"<<endl;
        cin>>comprobador;
        try{
            opcion=esnumero(comprobador);
            if(opcion>7 || opcion<1){
                throw out_of_range("");
            }
            system("cls");
            switch(opcion){
                case 1:
                    suma();
                    break;
                case 2:
                    resta();
                    break;
                case 3:
                    mult();
                    break;
                case 4:
                    div();
                    break;
                case 5:
                    root();
                    break;

            }
        }
        catch(const char*){
            cout<<"has introducido un valor que no es un numero\npresiona enter para continuar";
            limpiar();
                }
        catch(out_of_range){
            cout<<"Has introducido un numero fuera del rango de lo permitido\npresiona enter para continuar"<<endl;
            limpiar();
        }

    }

    return 0;
}

float esnumero(string comprobador){
    float x=0, y=0, num=0;
    x=comprobador.length();
    while(y<x){
            if(isdigit(comprobador[y])==false&&comprobador[y]!='.'&&comprobador[y]!='-'){
                throw "error";
            }
            y++;
        }
    num=stof(comprobador);
    return num;
}

void suma(){
    float x=0,y=0;
    string comp="";
    while(x!=2){
        cout<<"dame el numero a sumar"<<endl;
        cin>>comp;
        y=esnumero(comp);
        res+=y;
        cout<<"el resultado actual es: "<<res<<endl;
        cout<<"quieres sumar otro numero?\n1. si\n2.no"<<endl;
        cin>>comp;
        x=esnumero(comp);
        system("cls");
        if(res>1e7){
            throw out_of_range("");
        }
        }
        cout<<"el resultado final es: "<<res<<endl;
        limpiar();
}

void resta(){
    float x=0,y=0;
    bool flag=false;
    string comp="";
    while(x!=2){
        cout<<"dame el numero a restar"<<endl;
        cin>>comp;
        y=esnumero(comp);
        if(flag==false){
            res=y;
            flag=true;
        }
        else{
            res-=y;
        }
        cout<<"el resultado actual es: "<<res<<endl;
        cout<<"quieres sumar otro numero?\n1.si\n2.no"<<endl;
        cin>>comp;
        x=esnumero(comp);
        system("cls");
        if(res<-1e7){
            throw out_of_range("");
        }
        }
        cout<<"el resultado final es: "<<res<<endl;
        limpiar();
}

void mult(){
    float x=0,y=0;
    string comp="";
    cout<<"Dame el primer numero a multiplicar"<<endl;
    cin>>comp;
    x=esnumero(comp);
    cout<<"Dame el segundo numero a multiplicar"<<endl;
    cin>>comp;
    y=esnumero(comp);
    res=x*y;
        cout<<"el resultado final es: "<<res<<endl;
        limpiar();
}

void div(){
    float x=0,y=0;
    string comp="";
    cout<<"Dame el dividendo"<<endl;
    cin>>comp;
    x=esnumero(comp);
    try{
        cout<<"Dame el divisor"<<endl;
        cin>>comp;
        y=esnumero(comp);
        if(y==0){
            throw "error";
        }
        res=x/y;
        cout<<"el resultado final es: "<<res<<endl;
    }

    catch(const char*){
        cout<<"Has introducido un cero como divisor"<<endl;
    }
    limpiar();
}

void root(){
    float x=0;
    string comp="";
    try{
    cout<<"Dame el numero cuya raiz quieres obtener"<<endl;
    cin>>comp;
    x=esnumero(comp);
    if(x<0){
        throw underflow_error("");
        }
    res=sqrt(x);
    cout<<"el resultado final es: "<<res<<endl;
    }

    catch(underflow_error){
        cout<<"Has introducido numero menor a 0"<<endl;
    }
    limpiar();
}

void limpiar(){
            cout<<"Presiona enter para continuar"<<endl;
            fflush(stdin);
            getchar();
            system("cls");
}
