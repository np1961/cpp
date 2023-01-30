using namespace std;
#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
#include <vector>

auto out=fstream::out;
auto in=fstream::in;
auto append=fstream::app;
auto folder ="/home/np_1961/Desktop/";
auto file_type=".txt";
string file_name;
string pwd;
string pwd_1;
string pwd_2;
fstream np_1961, pd_1961, pyplot_1961;


char frog='/////////';
auto number=0;
auto len=0;
auto _len_=-1;
auto _ =0;



void logic_generation(fstream &FILE,string pwd, int * numbers, int len){

        }

int selector(){
    cout << "file_name---->";
    cin >> file_name;

    pwd = folder + file_name + file_type;
    pwd_1 = folder + file_name + "_not double" + file_type;
    pwd_2 = folder + file_name + "_double" + file_type;

    np_1961.open(pwd, out | in | append);
    if (!np_1961.is_open()) {
        cout << "file_errors";
        exit(1);
    } else {
        while (true) {
            cout << "number===";
            cin >> number;
            if (number != 1961) {
                len += 1;
                np_1961 << number << endl;
            } else
                break;
        }
        np_1961.close();
        return len;
}

    }



void _main_() {
    len = selector();
    int numbers_1[len];
    int numbers_2[len];
    int len_1 = -1;
    int len_2 = -1;


    np_1961.open(pwd, in | append | out);


    while (_ < len) {
        np_1961 >> number;
        if (number % 2 != 0 and number > 0)
            numbers_1[len_1 += 1] = number;
        else if (number % 2 == 0 and number > 0)
            numbers_2[len_2 += 1] = number;
        _++;
    }
    //0000////
    _=0;
    len_1++;
    len_2++;
    np_1961.close();




    for(_=0; _<len_1; _++)
        cout << numbers_1[_] << "____> 2k+1 <" << endl;
    for(_=0; _<len_2; _++)
        cout << numbers_2[_] << "> ____2k <" << endl;


    pd_1961.open(pwd_1, out | in | append);
    auto _len_=0;
    if (!pd_1961.is_open()) {
        cout << "file_errors";
        exit(1);
    }
    else
        while (_len_<len_1) {
            number=numbers_1[_len_];
            pd_1961<<number<<endl;
            _len_+=1;
        }
        pd_1961.close();

    pyplot_1961.open(pwd_2, out | in | append);

    _len_=0;
    if (!pyplot_1961.is_open()) {
        cout << "file_errors";
        exit(1);
    }
    else
        while (_len_<len_2) {
            number=numbers_2[_len_];
            pyplot_1961<<number<<endl;
            _len_+=1;
        }
    pyplot_1961.close();
    }






int main() {
    _main_();
    return 0;

}




