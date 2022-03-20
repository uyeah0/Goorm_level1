#include<iostream>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;

    int i = 0;
    int j;
    while (1) {
        i++;
        if (i > n)break;
        for (j = 0; j < m; j++) {
            cout << "#";
        }
        i++;
        if (i > n) break;
        cout << "\n";
        for (j = 1; j < m; j++) {
            cout << ".";
        }
        cout << "#";
        i++;
        if (i > n) break;
        cout << "\n";
        for (j = 0; j < m; j++) {
            cout << "#";
        }
        i++;
        if (i > n) break;
        cout << "\n";
        cout << "#";
        for (j = 1; j < m; j++) {
            cout << ".";
        }
			cout << "\n";
    }
		return 0;
}