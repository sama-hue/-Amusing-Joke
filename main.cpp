#include <iostream>

using namespace std;

int main()
{
    int c=0;
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    if(s1.length()+s2.length()<s3.length()||s1.length()+s2.length()>s3.length()){
        cout<<"NO";
    }
    else{
    for(int i=0;i<s1.length();i++){
        for(int j=0;j<s3.length();j++){
            if(s1[i]==s3[j]){
                s3[j]='0';
                break;
            }
        }
    }
    for(int i=0;i<s2.length();i++){
        for(int j=0;j<s3.length();j++){
            if(s2[i]==s3[j]){
                s3[j]='0';
                break;
            }
        }
    }
    for(int i=0;i<s3.length();i++){
        if(s3[i]=='0'){
            c++;
        }
    }
    if(s3.length()==c){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    }
    return 0;
}
