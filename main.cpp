#include <iostream>

using namespace std;

void function(string lineas){
    int contador=0;
    while(getline(cin,lineas)){
        int found=0;
        while((found = lineas.find('"',found)) !=string::npos){
            if(contador==0) {
                lineas.replace(found, 1, "``");
                contador++;
            }
            else if(contador==1){
                lineas.replace(found, 1, "''");
                contador--;
            }
        }
        cout << lineas << endl;
    }
}

int main() {
    string lineas;
    function(lineas);
    return 0;
}
