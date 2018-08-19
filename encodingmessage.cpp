/*
https://www.codechef.com/COOK96B/problems/ENCMSG
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    int T,N,P;

    string S;
    string C = "abcdefghijklmnopqrstuvwxyz";
    string cheat = "zyxwvutsrqponmlkjihgfedcba";
    
    cin >> T;
    
    for(int i=0; i<T; i++){
        cin >> N;
        cin >> S;
        
        for(int j=0; j < S.length()-1; j+=2){
            if((S.length() % 2 != 0) && (j==S.length()-2)){break;}
            else{swap(S[j],S[j + 1]);}
        }
        
        for(int j=0; j < S.length(); j++){
            P = C.find(S[j]);
            S[j] = cheat[P];
        }
        
    cout << S << endl;
    }
}
