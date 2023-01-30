
//DISTRIBUTIVE
#include <iostream>
using namespace std;
void _main_boot_();

//STRUCT
struct _time_{
    int hour;
    int minute;
};
struct nok {
    char name[10];
    _time_ starting_time;
};


//CLASS
class Cuck{

public:
    Cuck();
    ~Cuck();
    Cuck(nok*,int*);
protected:
    nok *list;
    int *len;
public:

    void gettter(nok * , int *);
    void print();

    void settter(nok *, int *);
    void ask_line();
};
class kuk_local_1:virtual public Cuck{
public:
    kuk_local_1();
    kuk_local_1(nok *,int *);
    ~kuk_local_1();
public:
    void to12_server();

};
class kuk_local_2:virtual public Cuck{
public:
    kuk_local_2();
    kuk_local_2(nok *,int *);
    ~kuk_local_2();
public:
    void after18_server();

};
class Cookie:public kuk_local_1,public kuk_local_2{
public:
    Cookie();
    ~Cookie();
    Cookie(nok *,int *);
    void  median_servers();
    void all_servers();
};


//HEAD
int main(){
    _main_boot_();
}



//EMPTY CONSTRUCTORS
Cuck::Cuck(){
    cout<<"CUCK empty c_tor"<<endl;
}
kuk_local_1::kuk_local_1(){
    cout<<"KUUUK_1 empty c_tor"<<endl;
}
kuk_local_2::kuk_local_2(){
    cout<<"KUUUK_2 empty c_tor"<<endl;
}
Cookie::Cookie(){
    cout<<"COOKIE empty c_tor"<<endl;
}

//DESTRUCTORS
Cuck::~Cuck(){
    cout<<"CUCK d_tor"<<endl;
}
kuk_local_1::~kuk_local_1() {
    cout<<"KUUUK_1 d_tor"<<endl;
}
kuk_local_2::~kuk_local_2() {
    cout<<"KUUUK_2 d_tor"<<endl;
}
Cookie::~Cookie(){
    cout<<"COOKIE d_tor"<<endl;
}

//CUCK CTOR ARGUMENT LOCALIZATION
Cuck::Cuck(nok *list,int *len){
    this->list=list;
    this->len=len;

    cout<<"CUCK CTOR ARGUMENT LOCALIZATION"<<endl;
}
kuk_local_1::kuk_local_1(nok *list,int *len){
    this->list=list;
    this->len=len;

    cout<<"KUUUK_1 CTOR ARGUMENT LOCALIZATION"<<endl;
}
kuk_local_2::kuk_local_2(nok *list,int *len){
    this->list=list;
    this->len=len;

    cout<<"KUUUK_2 CTOR ARGUMENT LOCALIZATION"<<endl;
}
Cookie::Cookie(nok *list,int *len){
    this->list=list;
    this->len=len;

    cout<<"COOKIE CTOR ARGUMENT LOCALIZATION"<<endl;
}

// FROM CLASS IMPORT ALL METHODS
void Cuck::settter(nok *list, int *len){
    this->len=new int;
    do{ cout<<"len~~~~~~>>>>";
        cin>>*(this->len); }        while(*(this->len)<0);
    this->list=new nok[*(this->len)];
    for (int index=0; index<*(this->len); index+=1){
        cout<<"list["<<index<<"].name~~~>";
        cin>>this->list[index].name;
            cout<<"list["<<index<<"].starting_time~~~>";
            cin>>
                this->list[index].starting_time.hour>>
                this->list[index].starting_time.minute;
}       }
void Cuck::ask_line() {
    this->settter(this->list,this->len);
}
void Cuck::print(){
    this->gettter(this->list,this->len);
}
void Cuck::gettter(nok *list,int *len){
    for (int index=0; index<*(this->len); index+=1)
        cout<<
              this->list[index].name<<' '<<
              this->list[index].starting_time.hour<<' '<<
              this->list[index].starting_time.hour<<endl;

}

void kuk_local_1::to12_server() {
    cout<<endl<<"start"<<endl;
    int number=-1;
    nok list[*(this->len)];

    for (int index=0; index < *(this->len); index+=1)
       if (this->list[index].starting_time.hour<12)
            list[number+=1]=this->list[index];
       this->gettter(list,(this->len));
}
void Cookie::median_servers() {
    cout<<endl<<"median"<<endl;
    int number=-1;
    nok list[*(this->len)];

    for (int index=0; index < *(this->len); index+=1)
        if  ((this->list[index].starting_time.hour>12)
        &&  (this->list[index].starting_time.hour<18))
            list[number+=1]=this->list[index];
        this->gettter(list,(this->len));
       }
void kuk_local_2::after18_server() {
    cout << endl << "finish" << endl;
    int number = -1;
    nok list[*(this->len)];

    for (int index = 0; index < *(this->len); index += 1) {
        if ((this->list[index].starting_time.hour > 18)
            && (this->list[index].starting_time.hour < 24))
            list[number += 1] = this->list[index];
        cout<<this->list[index].name<<' ' <<
              this->list[index].starting_time.hour<< ' ' <<
              this->list[index].starting_time.minute<<' '<<     endl;
    }
}
void Cookie::all_servers() {

    this->to12_server();
    this->median_servers();
    this->after18_server();

}

void _main_boot_(){
    Cookie root;
    root.ask_line();
    root.all_servers();
}