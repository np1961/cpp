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
    //_________________________________
    np_1961.open(pwd, in | append | out);
    while (_ < len) {
        np_1961 >> number;
        if (number % 2 != 0 and number > 0)
            numbers_1[len_1 += 1] = number;
        else if (number % 2 == 0 and number > 0)
            numbers_2[len_2 += 1] = number;
        _++;
    }
    _ = 0;
    len_1++;
    len_2++;
    np_1961.close();
//+++++++++++++++++++++++++++++++++++++++++++++++++++



    np_1961.open(pwd, in);
    if (!np_1961.is_open()) {
        cout << "file_errors";
        exit(1);
    } else {
        auto _number_ = 19;
        while (true) {
            _number_ = number;
            if (!np_1961.eof()) {
                np_1961>>number;
                if(_number_!=number){
                    if (number % 2 != 0 and number > 0 ) {
                        pd_1961.open(pwd_1, out | append | in);
                        pd_1961 << number << endl;
                        pd_1961.close();        }
                    else if (number % 2 == 0 and number > 0) {
                        pyplot_1961.open(pwd_2, out | append | in);
                        pyplot_1961 << number << endl;
                        pyplot_1961.close();
                }   }   }
            else
                break;
        }
        }
}
int main() {
    _main_();
    return 0;

}



