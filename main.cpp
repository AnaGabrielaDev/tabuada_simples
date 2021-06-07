#include <iostream>

using namespace std;

//programa para mostrar a tabuada de qualquer numero que o usuário escolher

int main (){
    int valor,contador, multi, divi, soma,  sub;

    cout << "      TABUADA        \n\n\n";
    cout << "escolha um numero para ver a tabuada dele \n";
    cin >> valor;

    for (contador = 1; contador <=10; contador ++){
        multi = contador * valor;
            
            cout << contador << " * " << valor << " = " << multi << "\n";  
    }

    cout << "\n";
    
    for (contador = 1; contador <=10; contador ++){
        divi = contador / valor;
        
            cout << contador << " / " << valor << " = " << divi << "\n"; 
    }
    
    cout << "\n";
     
    for (contador = 1; contador <=10; contador ++){
        soma = contador + valor;
            
            cout << contador << " + " << valor << " = " << soma << "\n";  
    }

    cout << "\n";
    
    for (contador = 1; contador <=10; contador ++){
        sub = contador - valor;
            
            cout << contador << " - " << valor << " = " << sub << "\n";  
                       
    }
    
    return 0;
}