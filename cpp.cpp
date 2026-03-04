//ch 16 throught 17 learncpp.com
#include<iostream>
#include<vector>
#include<string_view>
#include<algorithm>

using namespace std;

template<typename T>
void print(T value){
    cout<<value<<" is getting printed, LOL!"<<endl;
};

int main(){
    // cout<<"hello world"<<endl;
    vector<int> v0(100);
    v0 = {1,41,2,4,0};
    vector<int> v1{1,2,4,1,2,4,4};
    //aka
    auto v3 = vector{1,4,2,1,3,4};
    // for(const auto& element : v){
    //     cout<<element<<"\n";
    // }
    // cout<<v[8]<<endl;

//     struct Point { int x, y; };
// Point p = {};
// p.x = 5; 
// Point* ptr = &p;
// ptr->y = 10;
// cout<<p.x<endl;
    
    // unsigned int num = -5;
    // cout<<sizeof(num)<<endl;

// cout<<v.size()<<endl;
// cout<<ssize(v)<<endl;
// cout<<v.at(3)<<endl;

// const i = 100;
// cout<<i;

    //double d { 3.5 };

    // static_cast<int> converts double to int, initializes i with int result
    //int i = d;//{ static_cast<int>(d) };
    // cout<<sizeof(d)<<endl;
    // return 0;
    string b = "hello world";

    //cin.get(name,sizeof(name));
    // cout<<v0.capacity()<<endl;
    // cout<<v0.size()<<endl;
    // vector<string> v8 {"bob", "dave","alise"};
    // reverse(v8.begin(),v8.end());
    // for(string s : v8){
    //     cout<<s<<endl;}
    cout<<v1.data()[0]<<endl;


    
return 0;

}



//related notes:
// vector operations 
// push_back(), emplace_back(), pop_back(), erase(start, end), begin(), end(), front(), back(), at(), resize(), reserve(), shrink_to_fit(), insert(place, times, value), 
