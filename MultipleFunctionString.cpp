#include<iostream>
#include<string>
using namespace std;

void inputStringSingleWord(string &str) {
    cout << "Welcome to my String multiple function programme:\nEnter the string: ";
    cin >> str;  
}

void PrintString(const string &str) {
    cout << "The entered single word string is: " << str << endl;
}

void inputStingWithSpace(string &s){
    cout<<"Enter the String with space and the name of string is big string : ";
    getline(cin,s);
}
void printBigString(string &s){
    cout<<"The entered big string is: "<<s<<endl;
}
int lengthofString(const string &str){
    int count=0;
    for(char c:str){
        count++;

    }
    return count;
}
string reverse(const string &str){
   string revStr = str;  
    int i = 0;
    int j = revStr.size() - 1;

    while(i < j) {
        swap(revStr[i], revStr[j]);
        i++;
        j--;
    }

    return revStr; 
}
bool ispalidorem(const string &str){
    string revStr = str;  
    int i = 0;
    int j = revStr.size() - 1;

    while(i < j) {
        swap(revStr[i], revStr[j]);
        i++;
        j--;
    }
    bool  flag=true;
    for(int i=0;i<str.size();i++){
        if(str[i]!=revStr[i])return false;
    }
    return flag;
}
void lowerToUppper(const string &str){
    string st=str;
    for(int i=0;i<st.size();i++){
        if(st[i]>='a' && st[i]<='z'){
            st[i]=st[i]-32;
        }
    }
    cout<<"The upper case string is: "<<st<<endl;
}
void Upppertolower(const string &str){
    string st=str;
    for(int i=0;i<st.size();i++){
        if(st[i]>='A' && st[i]<='Z'){
            st[i]=st[i]+32;
        }
    }
    cout<<"The lower  case string is: "<<st<<endl;
}
void lowertoupperFunction(const string &str){
    string st=str;
    for(int i=0;i<st.size();i++){
        st[i] = toupper(st[i]);
    }
    cout<<"The upper case string Using inbult function: "<<st<<endl;
}
void uppertolowerfunction(const string &str){
    string st=str;
    for(int i=0;i<st.size();i++){
        st[i]=tolower(st[i]);
    }

}
void CountvowelConsonants(const string &str){
    int vCount=0;
    int cCount=0;
    for(int i=0;i<str.size();i++){
        char ch=tolower(str[i]);
        if(ch>='a' && ch<='z'){
            if(ch =='a' || ch =='e' || ch =='i'||ch=='o'||ch=='u'){
                vCount++;
            }
            else{
                cCount++;
            }
        }
    }
    cout<<"Total number of vovel in string : "<<vCount<<endl;
    cout<<"Total number of consonants  in string: "<<cCount<<endl;
}
void countdigitAlphaSpace(){

}




int main() {
    string str;
    inputStringSingleWord(str);  
    PrintString(str);  
     cin.ignore();        
    string s;
    inputStingWithSpace(s);
    printBigString(s);
    cout<<"The length of string is this without space in: "<<lengthofString(str)<<endl;
    cout<<"The revers of the string is: "<<reverse(str)<<endl;
    if(ispalidorem(str)){
        cout<<"The string is palidrom "<<endl;

    }
    else{
        cout<<"The string is not palidrom"<<endl;
    }
    lowerToUppper(s);
    Upppertolower(str);
    lowertoupperFunction(str);
    uppertolowerfunction(str);
    CountvowelConsonants(str);
    return 0;
}
