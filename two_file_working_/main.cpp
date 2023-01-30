
using namespace std;
#include <iostream>
#include <fstream>
#include <iostream>
#include <stdlib.h>
#include "string.h"

void _main_();

int settter(fstream &, int);
void file_encoder(int , string );
void printer_cell(int *,int );

auto pwd = "/home/np_1961/Desktop/self.txt";
auto _pwd_ = "/home/np_1961/Desktop/Lock_Dock/remen/_self_.txt";

auto in = fstream ::in;
auto out = fstream ::out;
auto append = fstream ::app;

int settter(fstream &directory, int _len_=0){
    int number;
    directory.open(pwd,out | in | append);
    if (!directory.is_open())
        exit(1);
    else
        while (true) {
            cout << "number=";
            cin >> number;
            if (number != 1961) {
                directory << number << endl;
                _len_ += 1;
            }
            else
                break;
        }
    directory.close();
    return _len_;
}

void file_encoder(int len, string location){
    int number;
    fstream file, file_minus;
    int *numbers=new int[len];

    file.open(location, in );
    for(auto index =0; index<len; index+=1){
        file>>number;
        numbers[index]=number;
        if (number<0){
            file_minus.open(_pwd_,out | in | append);
                if (!file_minus.is_open()){
                    cout<<"EXIT FILE"<<endl;
                    exit(1);
                }
                else{
                    file_minus<<number<<endl;
                    file_minus.close();
                    }

                                            }
                                            }
    file.close();
    file_minus.open(_pwd_,append | in );
    for(auto index=0; index<len; index+=1)
        file_minus<<numbers[index]<<endl;
    file_minus.close();

    printer_cell(numbers, len);
    delete numbers;
                  }


void printer_cell(int *list,int len){
    for (auto index =0; index<len; index+=1){
        cout<<list[index]<<' ';
        cout<<"\n";
    }   }

void _main_(){
    fstream np_1961,pd_1961;

    auto len = settter(np_1961);
    file_encoder(len,pwd);

}


int main(){
    _main_();
}

