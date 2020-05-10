#include <iostream>
#include <cmath>
using namespace std;

int main (){
	
    long long  binario, a, b, i = 0, gray =0;
    
    cout << "Numero binario: ";
    cin >> binario;
    
    while (binario != 0)
    {
        a = binario % 10;      
        binario = binario / 10; 
        b = binario % 10;      
        
        if ((a && !b) || (!a && b)) 
            gray = gray + pow(10, i);
        i++;
    }

    cout << "Codigo gray: "<< gray;
    return 0;
}
