#include <iostream>

using namespace std;

string codify(float number){
    return "";
}
float decode(const string& ieee_754){
    return 0;
}

float addition(string n1,string n2){
    return decode(n1)+ decode(n2);
}
float multiplication(string n1, string n2){
    return decode(n1)* decode(n2);
}
float sqrtt(string n1){
    float i;
    for(i=0.01;i*i<decode(n1);i=i+0.01);
    return(printf("%.2f", i));
}
