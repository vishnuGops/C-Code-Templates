#include<iostream>
#include<string>

using namespace std;
void print(string x){
    cout<< x << endl;
}


int main() {
    string str("Hello world");
    print(str);

    string str1 = "hello";
    print(str1);

    string str2(str);
    print(str2);

    string str3(5, '$');
    print(str3);

    //init with part of another string
    string str4(str, 6,5);
    print(str4);

    //init with iterator
    string str5(str.begin(), str.begin()+5);
    print(str5);

    //str5.clear();

    int len = str.length();
    cout<<len<<endl;

    //at operator
    char ch = str.at(4);
    cout<<ch<<endl;

    //get front and back char
    char ch_f = str.front();
    char ch_b = str.back();
    cout<< ch_f << " " << ch_b <<endl;
    
    //append
    string str6=" Mom";
    str6.append("my");
    print(str6);
    //str6 += "my";
    
    str5.append(str6, 0, 6);
    print(str5);  

    //find op to find string pattern in other string
    if(str5.find(str6) != -1){
        cout<<"str6 found at: "<< str5.find(str6)<<endl;
    }

    //substring
    cout<<str5.substr(6,3)<<endl;

    //erase
    str5.erase(0,3);
    print(str5);

    str2.erase(str2.begin(), str2.end() - 5);
    print(str2);

    //replace
    string str7 = "This is example";
    str7.replace(2, 5, "ese are");
    print(str7);
}