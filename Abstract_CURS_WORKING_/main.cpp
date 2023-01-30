#include <iostream>
using namespace std;

struct cmp{
    int I;
    int II;
};
//Process controls
int _preproc_and_proc_();
void _processor_(cmp *, int );





//CLASSES
class Cuck{

public:
    Cuck(cmp *, int , char );
        virtual ~Cuck();
        void try_me(cmp * ,int &);
        void print(cmp *, int );
        double median();
        double max(cmp *, int ,char);
protected:
    cmp *list;
    int len;
public:
    virtual void key()=0;
};
class kuk_local_1:public Cuck{

public:
    kuk_local_1 (cmp *, int ,char);
    virtual ~kuk_local_1 ();
public:
    virtual void key();
};
class kuk_local_2: public Cuck{

public:
    kuk_local_2 (cmp *, int , char);
        virtual ~kuk_local_2 ();
public:
    virtual void key();
};





//CONSTRUCTORS
Cuck :: Cuck(cmp *list, int len, char set='n') {

    this->len = len;
    this->list = list;

    cout<<"c_TOR"<<endl;
}
kuk_local_1::kuk_local_1(cmp *list, int len , char set): Cuck(list,len,set){

    cout<<"kuk_1_ctor"<<endl;

}
kuk_local_2::kuk_local_2(cmp *list, int len , char set): Cuck (list,len,set){

    cout<<"kuk_2_ctor"<<endl;

}




//DESTRUCTORS
Cuck:: ~ Cuck(){
    cout<<"d_TOR"<<endl;
}
kuk_local_1::~kuk_local_1(){
    cout<<"kuk_1_d_TOR"<<endl;
}
kuk_local_2::~kuk_local_2(){
    cout<<"kuk_2_d_TOR"<<endl;
}




//ALL METHODS
void Cuck::print(cmp *list, int len) {
    for (int index =0; index <len ; index+=1)
        cout<<
            list[index].I <<
            "   "           <<
            list[index].II<<
            endl;

}
double Cuck::median() {
    int sum_I = 0;
    int sum_II = 0;

    for (int index = 0; index < this->len; index += 1) {

        sum_I += this->list[index].I;
        sum_II += this->list[index].I;
    }
    return (sum_I + sum_II) * 0.5;
}
double Cuck::max(cmp *list, int len, char flex){
    if (flex=='I') {
        double max_values = list[0].I;
        for (int index = 0; index < this->len; index += 1) {
            if (max_values < list[index].I)
                max_values = list[index].I;
        }
        return max_values;
    }
    else {
        double max_values = list[0].I;
        for (int index = 0; index < this->len; index += 1)
            if (max_values < list[index].I)
                max_values = list[index].I;
        return max_values;

    }}




//VIRTUAL TABLE
void kuk_local_1::key() {
    for (int index = 0; index < this->len; index += 1) {
        this->list[index].I -= this->median();
        this->list[index].II -=this->median();
    }
    this->print(this->list,this->len);
}
void kuk_local_2::key() {
    for (int index = 0; index < this->len; index += 1) {
        this->list[index].I += this->max(this->list, this->len, 'I');
        this->list[index].I += this->max(this->list, this->len, 'M');
    }
    this->print(this->list,this->len);
}



//PROCESS CONCATENATE
int _preprocess_and_proc_(){

    //PREPROCESSOR WORKING
    int len;
    cmp list[10];

        do { cout<< "len===";
            cin >> len;        }   while (len < 2 || len > 10);

        for (int index = 0; index < len; index += 1) {
            cout << "list[" << index << "][I:II]=";
            cin >> list[index].I;
            cin >> list[index].II;
    }
  //PREPROCESSOR WORKING
    _processor_(list, len);
    return 1961;
}
void _processor_(cmp *list,int len){
    Cuck *self;

    self=new kuk_local_1(list,len,'o');
    self->key();
    delete self; self=0;

    self=new kuk_local_2(list,len,'o');
    self->key();
    delete self; self=0;
}



// MAIN (HEAD)
int main(){
    if (_preprocess_and_proc_()==1961)
        return 1;
    else
        return 0;
}


