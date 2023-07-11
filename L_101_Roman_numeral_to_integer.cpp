#include <bits/stdc++.h> 
int romanToInt(string s) {
    unordered_map<char,int>mp;
    mp['I']=1;
    mp['V']=5;
    mp['X']=10;
    mp['L']=50;
    mp['C']=100;
    mp['D']=500;
    mp['M']=1000;
    int prev_guy=-1;
    int sum=0;
    for(int i=s.size()-1;i>=0;i--){
        if(prev_guy==-1 || prev_guy<=mp[s[i]]){
            sum+=mp[s[i]];
            prev_guy=mp[s[i]];
        }else{
            if(prev_guy>mp[s[i]])sum-=mp[s[i]];
        }
    }
    return sum;
}