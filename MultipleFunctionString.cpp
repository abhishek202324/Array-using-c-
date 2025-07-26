#include<iostream>
#include<string>
#include <cctype> 
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
void countdigitAlphaSpace(string &s){
    int countAlpha=0;
    int countdigit=0;
    int countSpace=0;
    int countSpecialChar=0;
    int size=s.size();
    for(char ch:s){
        if(isalpha(ch))countAlpha++;
        else if(isdigit(ch))countdigit++;
       else if (isspace(ch))countSpace++;
       else countSpecialChar++;
    }
    cout<<"The total number of alpha(like a,b,C,D) char in big sting is : "<<countAlpha<<endl;
    cout<<"The total number of digits in big string is: "<<countdigit<<endl;
    cout<<"The total number of space in big string is: "<<countSpace<<endl;
    cout<<"The total number of special char in big string expect space is: "<<countSpecialChar<<endl;

}
void toggleCaseUpperTolowerViseVersa(string &s){
    string temp = s;
    for(int i = 0; i < temp.size(); i++){
        if (islower(temp[i])) {
            temp[i] = toupper(temp[i]);
        }
        else if (isupper(temp[i])) {           
            temp[i] = tolower(temp[i]);
        }
       
    }
    
    cout << "The string after toggle (upper↔lower): " << temp << endl;
}
unordered_map<char, int> countFrequency(const string &s) {
    unordered_map<char, int> freq;
    for (char ch : s) {
        freq[ch]++;
    }
    cout << "Character Frequencies: " << endl;
    for (auto pair : freq) {
        cout << pair.first << " => " << pair.second << endl;
    }
    return freq; // return the map
}

void findFirstNonRepeating(const string &s, unordered_map<char, int> &freq) {
    for (char ch : s) {
        if (freq[ch] == 1) {
            cout << "First non-repeating character is: " << ch << endl;
            return;
        }
    }
    cout << "No non-repeating character found." << endl;
}
void findFirstRepeating(const string &s,unordered_map<char,int> &freq){
    for(char ch:s){
        if(freq[ch]>1){
            cout << "First repeating character is: " << ch << endl;
            return;
        }
    }
    cout << "No repeating character found." << endl;

}
void MaxFreqElement(const string &s,unordered_map<char,int> &freq){
    int max=0;
    char maxChar='\0';
    
    for (auto pair : freq) {
        if(pair.second>max){
            max=pair.second;
            maxChar = pair.first;
        }
    }
    if (maxChar != '\0') {
        cout << "Most frequent character is: " << maxChar << " (Frequency: " << max << ")" << endl;
    } else {
        cout << "No characters found in the string." << endl;
    }
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
    countdigitAlphaSpace(s);
    toggleCaseUpperTolowerViseVersa(s);
    unordered_map<char, int> freqMap = countFrequency(str); 
    findFirstNonRepeating(str, freqMap);  
    findFirstRepeating(str,freqMap);
    MaxFreqElement(str,freqMap);
    return 0;
}
