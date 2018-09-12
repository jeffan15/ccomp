#include <iostream>

using namespace std;
/*
int main()
{
    int n;
    cout<<"da tu edad:"<<endl;
    cin>>n;
    (n>18)?cout<<"es mayor de edad":cout<<"es menor de edad";
}*/
/*int main(){
    int n;
    cout<<"da un numero:"<<endl;
    cin>>n;
    for(int i=2;i<=n;i++){
            if(i%2)
            cout<<"1"<<","<<i;
    }
}*/
/*int main(){
    int a,b,c;
    cout<<"ingrese sus 3 numeros"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    float cont;
    if(a>b&&a>c)
        cout<<a<<" "<<"es el mayor"<<endl;
    else if(b>a&&b>c)
        cout<<b<<" "<<"es el mayor"<<endl;
    else if(c>a&&c>b)
        cout<<c<<" "<<"es el mayor"<<endl;
    if(a<b&&a<c)
        cout<<a<<" "<<"es el menor"<<endl;
    else if(b<a&&b<c)
        cout<<b<<" "<<"es el menor"<<endl;
    else if(c<a&&c<b)
        cout<<c<<" "<<"es el menor"<<endl;
    cont=(a+b+c)/3;
    cout<<"el promedio es :"<<cont<<endl;
}*/
/*int main(){
    int a,b;
    cout<<"da dos numeros:"<<endl;
    cin>>a;
    cin>>b;
    if((!(a%2)&&!(b%2)))
        cout<<a<<" y "<<b<<" son multiplos de 2"<<endl;
    else
        cout<<"no son multiplos de dos"<<endl;
    if(!(a%b))
        cout<<a<<" es multiplo de "<<b<<endl;
    else
        cout<<"no son multiplos entre si"<<endl;
    if((a*a)==b)
        cout<<"a al cuadrado es igual a b"<<endl;
    else
        cout<<"a al cuadrado no es igual a b"<<endl;
}*/
/*int main(){
    int n,primo=0;
    cout<<"da un numero:"<<endl;
    cin>>n;
    for(int i=1;i<(n+1);i++){
        if(!(n%i))
            primo++;
    }
    if(primo!=2)
        cout<<"no es primo"<<endl;
    else
        cout<<"es primo"<<endl;
    return 0;
}
*/
/*int main(){
    int n,primo=0,cont;
    cout<<"da un numero:"<<endl;
    cin>>n;
    for (int i=2; i<n; i++)
        for (int j=2; j<i; j++)
        {
            if (i % j == 0)
                break;
            else if (i == j+1)
                cout << i << " ";
        }
}*/
/*int main(){
    int numero;
    cout<<"da un numero de 5 digitos"<<numero<<endl;
    cin>>numero;
    int a,b,c,d,e;
    if(numero>=10000){
    if(numero<=100000){
        a=numero/10000;
        b=(numero%10000)/1000;
        c=((numero%10000)%1000)/100;
        d=(((numero%10000)%1000)%100)/10;
        e=(((numero%10000)%1000)%100)%10;
        cout<<a<<"\t"<<b<<"\t"<<c<<"\t"<<d<<"\t"<<e<<endl;
        }
    }
}*/
/*int main(){
    int numero;
    cout<<"da un numero de 5 digitos"<<numero<<endl;
    cin>>numero;
    int a,b,c,d,e;
    if(numero>=10000){
        if(numero<=100000){
            a=numero/10000;
            b=(numero%10000)/1000;
            c=((numero%10000)%1000)/100;
            d=(((numero%10000)%1000)%100)/10;
            e=(((numero%10000)%1000)%100)%10;
        }
        if((a==e)&&(b==d))
            cout<<numero<<" es palindrome"<<endl;
        else
            cout<<numero<<" no es palindrome"<<endl;
    }
}*/
/*int main(){
    int bisiesto;
    cout<<"ingrese su anio:"<<endl;
    cin>>bisiesto;
    if(!(bisiesto%4)&&(bisiesto%100!=0||!(bisiesto%400)))
        cout<<bisiesto<<" es bisiesto"<<endl;
    else
        cout<<bisiesto<<" no es bisiesto"<<endl;
}*/
int main(){

}
