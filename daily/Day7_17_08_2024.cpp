#include <string>
#include <iostream>

using namespace std;

int solution(string str) {
    int n = str.size();
    if (n == 1) {
        return 1;
    }
    int comb[n]{0};
    for (int i = 0; i < n; i++) {
        
    }
    for (int i = 0; i < n; i++) {
        //cout << comb[i] <<  " val before " << endl;
        if (i == 0) {
            comb[i]==1;
        }
        //If character prior can <= 2, can be a new character
        else if(str[i-1]=='2' || str[i-1]=='1') {
            if (i ==1) {
                comb[i]=2;
            }
            else {
                comb[i] = comb[i-1] + comb[i-2];
            }
        }
        //If you can't interpret character prior then number of possibilites doesn't increase
        else {
            comb[i] = comb[i-1];
        }
        //cout << comb[i] << " val after" << endl;
    }
    return comb[n-1];
}

int main() {
    int i = solution("12456123");
    cout << "Solution is " << i << endl;
    return 0;
}