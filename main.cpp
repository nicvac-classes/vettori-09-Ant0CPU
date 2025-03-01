#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    srand(time(0));

    int n, i;
    float tv, th, vMin, hMin;
    string vincitore;

    do {
        cout<<"Inserire il numero di giri compiuti dai piloti"<<endl;
        cin>>n;
    }
    while (n<=0);
    
    vector<float>h(n), v(n);

    for (i=0; i<=n-1; i++) {
        h[i]=(100+rand() % (360-100))/100;
        v[i]=(100+rand() % (360-100))/100;
    }

    tv=0;
    tv=0;

    for (i=0; i<=n-1; i++) {
        tv=tv+v[i];
        th=th+h[i];
    }

    if (tv<th) {
        vincitore="Hamilton";
    }
    else
    {
        vincitore="Verstappen"; 
    }
    cout<<"Tempo di Verstappen: "<<tv<<endl;
    cout<<"Tempo di Hamilton: "<<th<<endl;
    cout<<"Il vicitore è "<<vincitore<<endl;

    vMin=v[0];
    hMin=h[0];
    for (i=0; i<=n-1; i++) {
        //Minimo di Verstappen
        if (v[i]<vMin) {
            vMin=v[i];
        }

        //Minimo di Hamilton
        if (h[i]<hMin) {
            hMin=h[i];
        }
    }

    if (vMin<hMin) {
        vincitore="Verstappen";
    }
    else {
        vincitore="Hamilton"; 
    }
    cout<<"Giro veloce di Verstappen: "<<vMin<<endl;
    cout<<"Giro veloce di Hamilton: "<<hMin<<endl;
    cout<<"Il giro veloce è di "<<vincitore<<endl;
}