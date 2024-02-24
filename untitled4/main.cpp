#include <iostream>

using namespace std;

int main() {
    //Ejercicio 1 con If
        int a;
        cout<<"Ingrese un numero: ";cin>>a;
        if(a>0){
            cout<<"El numero es positivo. ";
        }
        if(a==0){
            cout<<"El numero es cero. ";
        }
        if(a<0){
            cout<<"El numero es negativo. ";
        }

//Josue Alfredo Sandoval Morales 0909-22-7242

    // ejercicio 2 con while
    cout << "numero de 1 al 20 en forma ascendente" << endl;
    int num1, e;
    do {
        num1 = 1 +  e;

        cout << num1 << endl;
        e++;
    } while ( e <= 19);
// kenny alexander torres 0909-21-1316

// ejercicio 3 con for-if
    cout << " los números pares del 2 al 20" << endl;
    for (int i = 20; i >= 1 ; i--) {
        if (i % 2 == 0){
            cout << i<< endl;
        }

    }
// kenny alexander torres 0909-21-1316



    return 0;
}
