#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double invoices[3][3] = {0.0};
    int n = 0, id = 0;
    double item = 0.0;
    char invoice = ' ';
    for (int i = 0; i < 3; i++){
        cin >> id >> n;
        for (int j = 0; j<n; j++){
            cin >> invoice >> item;
            int invoiceInd;
            if (invoice=='A') {invoiceInd = 0;};
            if (invoice=='B') {invoiceInd = 1;};
            if (invoice=='C') {invoiceInd = 2;};
            invoices[i][invoiceInd] += item; 
        }
    }

    double sumPeople = 0.0;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j< 3; j++){
            sumPeople += invoices[i][j];
        }
        cout << fixed<<setprecision(2)<<i+1 <<' '<< sumPeople<<endl;
        sumPeople = 0.0;
    }

    double sumInvoice = 0.0;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j< 3; j++){
            sumInvoice += invoices[j][i];
        }
        char invoiceChar;
        if (i==0) invoiceChar = 'A';
        if (i==1) invoiceChar = 'B';
        if (i==2) invoiceChar = 'C';
        cout << invoiceChar <<' '<< sumInvoice << endl;;
        sumInvoice = 0.0;
    }
    return 0;

}