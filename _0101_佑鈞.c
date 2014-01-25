#include <iostream>

using namespace std;

/*
  1.1  Implement an algorithm to determine if a string has all unique characters
       . What if you can not use additional data structures?
*/

bool uniqueStringIgnoreSpeed(string str){
    for(int i=1;i<str.length();i++){
        for(int j=0;j<i;j++){
            if(str.at(i) == str.at(j)){
                return false;
            }
        }
    }
    return true;
}

bool uniqueStringIgnoreSpace(string str){
    bool allWord[256];
    for(int i=0;i<256;i++){
        allWord[i] = false;
    }
    int p;
    for(int i=0;i<str.size();i++){
        p = (int)str.at(i);
        if(allWord[p]){
            return false;
        }else{
            allWord[p] = true;
        }
    }
    return true;;
}

int main (int argc, char *argv[])
{ 
    string test;
    while(1){
        cin>>test;
        cout<<uniqueStringIgnoreSpace(test)<<endl;
        cout<<uniqueStringIgnoreSpeed(test)<<endl;
    }

    return 0;
}

