#include <iostream>
using namespace std;

int LENGTH = 4;

int main() {
    char S[] = {'1', '3', 'a', 's', 't', 'i'};
    int n = sizeof(S) / sizeof(S[0]);
    int count =0;
cout<<sizeof(S);
cout<<sizeof(S[0]);
    cout << "All possible passwords of length " << LENGTH << " without repetition of letters:" << endl;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == i){
                continue;
            }
            for (int k = 0; k < n; k++) {
                if (k == i || k == j){
                    continue;
                }
                for (int l = 0; l < n; l++) {
                    if (l == i || l == j || l == k){
                        continue;
                    }

                    cout <<count<<". "<< S[i] << S[j] << S[k] << S[l] << endl;
                    count ++;
                    
                }
            }
        }
    }
    cout<<count;
    return 0;
}
