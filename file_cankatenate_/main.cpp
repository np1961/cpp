
using namespace std;
#include <fstream>
#include <iostream>
#include <stdlib.h>
#include "string.h"

auto pwd = "/home/np_1961/Desktop/";
auto in = fstream ::in;
auto out = fstream ::out;
auto append = fstream ::app;
auto new_file="new_file";
auto append_file="append_file";
auto read_file="read_file";

class np_1961{
private:
    fstream unknown;
    void printer_cell();
public:
    np_1961();
    void scanner(fstream &,string ,string , bool );
};

//METHODS
void np_1961::printer_cell() {
    cout<<endl
        <<endl
        <<endl
        <<"|Enter operation|"
        <<endl
        <<new_file
        <<endl
        <<append_file
        <<endl
        <<read_file
        <<endl
        <<endl
        <<"-->";

}

void np_1961::scanner(fstream &file,string configuration="generate",string text="", bool key=true) {

    if (configuration == "generate") {
        cout << "generator_success" << endl;
        file.open(pwd, out );
        if (file.is_open()){
            cout <<"Enter <|not|> if finish typing %%%%"<<endl
                 <<endl<<"_typing_-~>";

            while (key) {
                cin >> text;
                if (text != "not"){
                    file << text << ' ';
                    cout<<"___________";
                }

                else
                    key = false;
                    }               }
        else {
            cout << endl
                 << "Errors for openning your _file_"
                 << endl;
            exit(1);
            }
        file.close();
    }

    else if (configuration == "reader") {
        char far;

        file.open(pwd, in );
        if (file.is_open()) {
            cout << "|| file_reader______AKTIVATE !!! ||" << endl;

            while (file.get(far))
                cout << far; }
        else
            cout<<"errors for reading"<<endl;
            file.close() ;

    }

    else if (configuration == "append") {
        file.open(pwd, append);
        if (file.is_open()) {
            cout << "|| file_append______AKTIVATE !!! ||" << endl;
            cout<<endl<<"_typing_-~>";
            while (key) {
                cin >> text;
                if (text != "not"){
                    file << text << ' ';
                    cout<<"___________";
                }

                else
                    key = false;
            }
        }
        else
            cout<<"FUCK YOU"<<endl;
            file.close();

    }

    else {
        cout << "Errors for openning your _file_" << endl;
        exit(1);
    }

}

np_1961::np_1961() {
    fstream _new_;
    string ask;

while(true){
    this->printer_cell();
    cin>>ask;
    if(ask==new_file)
        this-> scanner( _new_);
    else if(ask==append_file)
        this->scanner(_new_,"append");
    else if(ask==read_file)
        this->scanner(_new_,"reader");
    else{
        cout<<"EXIT 1961"<<endl;
        exit(1);
    }

}       }

int main(){
    np_1961 pd_1961;
}
