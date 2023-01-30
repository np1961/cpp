

#include <iostream>
using namespace std;

class Cuck{
public:
    Cuck();
    Cuck(double *, int *);
    virtual ~Cuck();
    Cuck(Cuck *);

    double list_settter(double *, int *);
    void gettter(double *,int *);

    void asking();
    void print();

private:
    double *list;
    int *len;

public:
    Cuck operator+ (Cuck& that);
    Cuck operator* (Cuck& that);
    Cuck operator/ (Cuck& that);
    Cuck operator- (Cuck& that);
    Cuck operator% (Cuck& item);
    Cuck operator= (Cuck& item);
};


//CONSTRUCTORS and DESTRUCTORS
Cuck::Cuck() {

    cout<<"empty_ctor_"<<endl;
}
Cuck::Cuck(double *list, int *len) {

    this->len=len;
    this->list=list;
    cout<<"cTOR_arguments"<<endl;
    }
Cuck::~Cuck() {
    delete list;
    delete len;
    cout << "d_tor_" << endl;
}
Cuck::Cuck(Cuck *that) {
    this->len=that->len;
    this->list=that->list;

    cout<<"copy_ctor_"<<endl;
}

//ALL METHODS
double Cuck::list_settter(double *list,int * len) {
    for (int index = 0; index < *len; index += 1) {
        cout << "list[" << index << "]=";
        cin >> list[index];
    }
    return *list;
}
void Cuck::asking() {
    int *len=new int;
    double *list=new double[10];

    do{ cout<<"len=>";
        cin>>*len; } while(*len<2);

        this->len=new int(*len);
        this->list=new double[*len];
        *(this->list)=this->list_settter(list,len);

        delete list;
        delete len;
}

void Cuck::gettter(double *list, int  *len){
    cout<<"array[ ";
    for (int index =0 ; index<*(len); index+=1)
        cout<<"["<<list[index]<<"], ";
        cout<<"]"<<endl;
}
void Cuck::print() {
    this->gettter(this->list,this->len);
}


//OVERLOADING OPERATORS
Cuck Cuck::operator+(Cuck &that) {
    if (*(this->len) != *(that.len))
        return that;
    else {
        int len=*(this->len);
        double list[*(this->len)];
        for (int index =0; index < *(this->len); index+=1)
            list[index]=this->list[index]+that.list[index];
            return Cuck(list,&len);
    }
}
Cuck Cuck::operator-(Cuck &that) {
    if (*(this->len) != *(that.len))
        return that;
    else {
        int len=*(this->len);
        double list[*(this->len)];
        for (int index =0; index < *(this->len); index+=1)
            list[index]=this->list[index]-that.list[index];
        return Cuck(list,&len);
    }
}
Cuck Cuck::operator/(Cuck &that) {
    if (*(this->len) != *(that.len))
        return that;
    else {
        int len=*(this->len);
        double list[*(this->len)];
        for (int index =0; index < *(this->len); index+=1)
            list[index]=this->list[index]/that.list[index];
        return Cuck(list,&len);
    }
}
Cuck Cuck::operator*(Cuck &that) {
    if (*(this->len) != *(that.len))
        return that;
    else {
        int len=*(this->len);
        double list[*(this->len)];
        for (int index =0; index < *(this->len); index+=1)
            list[index]=this->list[index]+that.list[index];
        Cuck end(list,&len);
        return end;

    }
}

Cuck Cuck::operator%(Cuck &that) {
    if (*(this->len) != *(that.len))
        return that;
    else {
        int len=*(this->len);
        double list[*(this->len)];
        for (int index =0; index < *(this->len); index+=1)
            list[index]=2*(this->list[index] + that.list[index]);
        return Cuck(list,&len);
    }
}
Cuck Cuck::operator=(Cuck &that) {
    if (*(this->len) != *(that.len))
        return that;
    this->list=that.list;
    this->len-that.len;
        return Cuck(this->list,this->len);
    }

void _main_() {

        Cuck elem;
        elem.asking();
        elem.print();

    }
int main(){
    _main_();
}


