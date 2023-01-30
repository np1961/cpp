#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>
auto pwd = "/np_1961/Desktop/root_distributive.txt";
using namespace std;

auto in = fstream::in;
auto out = fstream::out;
auto append=fstream::app;

class np_1961{
private:
    fstream unknown;
public:

public:
    np_1961();
    void scanner(fstream &,string ,string , bool );
};

void np_1961::scanner(fstream &file,string configuration="generate",string text="", bool key=true) {

    if (configuration == "generate") {
        cout << "generator_success" << endl;
        file.open(pwd, out);
        if (file.is_open())
            while (key) {
                cin >> text;
                if (text != "not")
                    file << text << ' ';
                else
                    key = false;}

        file.close();
    }

    else if (configuration == "reader") {
        char far;
        cout << "reading !!!" << endl;
        file.open(pwd, in);
        if (file.is_open()) {
            cout << "|| file_success_read ||" << endl;

            while (file.get(far))
                cout << far;    }
        else
            cout<<"errors for reading"<<endl;
        file.close() ;
    }

    else if (configuration == "append") {
        file.open(pwd,append);
        if (file.is_open()) {
            cout << "|| file_continue ||" << endl;
            cin >> text;
            file << text;
        }
        else
            cout<<"errors for reading"<<endl;
        file.close();

    }

    else {
        cout << "Errors for openning your _file_" << endl;
        exit(1);
    }

}

np_1961::np_1961() {
    fstream _new_;
    this-> scanner( _new_);
    this->scanner(_new_,"append");
    this->scanner(_new_,"reader");

}

int main(){
    np_1961 pd_1961;
}
