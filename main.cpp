#include <iostream>​

#include <fstream>​

using namespace std;​

struct Laimikis { string pav; int kg; double gylis; int val; };​

int Skaityti(Laimikis l[]) {​

    ifstream fd("laimikiai.csv");​

    string eil, k, g, v;  int n = 0;​

    getline(fd, eil);​

    while (fd >> ws && getline(fd, l[n].pav, ',')) {​

        getline(fd, k, ',');  getline(fd, g, ',');  getline(fd, v);​

        l[n].kg = stoi(k);  l[n].val = stoi(v);​

        l[n].gylis = -1;  if (g != "") l[n].gylis = stod(g);​

        n++;​

    }​

    return n;​

}​

int main() {​

    Laimikis l[100];  int n = Skaityti(l);​

    cout << "Irasu: " << n << ", 3 iraso gylis: " << l[2].gylis << endl;​

    return 0;​

}​
