#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>
#include<fstream>
#include<cstdlib>

using namespace std;

int main(){
    ifstream source;
    source.open("score.txt");
    string textline;
    double num, mean, sdev;
    while(getline(source, textline))
    {
        mean += atof(textline.c_str());
        sdev += pow(atof(textline.c_str()),2);
        num++;
    }
    mean = mean/num;
    sdev = sqrt((sdev/num)-pow(mean,2));
    cout << "Number of data = " << num << endl;
    cout << setprecision(3);
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = " << sdev << endl;
}