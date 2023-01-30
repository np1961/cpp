using namespace std;

#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>
#include <vector>

auto out=fstream::out;
auto in=fstream::in;
auto append=fstream::app;
auto folder = "/home/np_1961/Desktop/";
auto file_type= ".txt";
string file_name,pwd,pwd_1,pwd_2,pwd_3;
fstream np,pd,plt,sklearn;

int number,_number_;

int main(){
    cout<<"Enter file_name>>>>";
    cin>>file_name;
    pwd=folder+file_name+file_type;
    pwd_1=folder+file_name+"%%%%%%%%%"+file_type;
    pwd_2=folder+file_name+"!!!!!!!!!"+file_type;
    pwd_3=folder+file_name+"--------"+file_type;

    np.open(pwd, in | out | append );
            if(!np.is_open()){
                cout<<"Error in np : "<<endl;
                exit(1);
            }
            else
                while(true){
                    cout<<"number--->";
                    cin>>number;
                    if(number!=1961)
                        np<<number<<endl;
                    else {
                        np.close();
                        break;
                    }}


    np.open(pwd,in | out | append);
        if(!np.is_open()){
            cout<<"Error in np : "<<endl;
            exit(1);
                    }
        else{
            //////////////////////////////////////////////
            //////////////////////////////////////////////
            while(true) {
                _number_=number;
                if (!np.eof()) {
                    np >> number;
                    if(number!=_number_) {
                        ////////////////////////////////////////////////////////////////////
                        if (number > 0 and number % 2 == 0) {
                            pd.open(pwd_1, in | out | append);
                            if (!np.is_open()) {
                                cout << "Error in pd: " << endl;
                                exit(1);
                            } else {
                                pd << number << endl;
                                pd.close();
                            }
                        }

                            ////////////////////////////////////////////////////////////////////
                        else if (number > 0 and number % 2 != 0) {
                            plt.open(pwd_2, in | out | append);
                            if (!plt.is_open()) {
                                cout << "Error in plt: " << endl;
                                exit(1);
                            } else {
                                plt << number << endl;
                                plt.close();
                            }
                        }
                            ////////////////////////////////////////////////////////////////////////
                        else if (number < 0) {
                            sklearn.open(pwd_3, in | out | append);
                            if (!sklearn.is_open()) {
                                cout << "Error in sklearn: " << endl;
                                exit(1);
                            } else {
                                sklearn << number << endl;
                                sklearn.close();
                            }
                        }
                    }
                    /////////////////////////////////////////////////////
                    /////////////////////////////////////////////////////

                }
                else{
                    cout<<endl<<"Finish"<<endl;
                    np.close();
                    break;
            }}}}
















































































