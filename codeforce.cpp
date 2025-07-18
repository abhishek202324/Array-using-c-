#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cin >> t;  

    while(t--){
        string x;
        cin >> x;
        
        char min_digit = '9';
        for(char c : x)
        {
            min_digit = (c < min_digit) ? c : min_digit;  
        }

        cout << min_digit << "\n";
    }

    return 0; 
}
