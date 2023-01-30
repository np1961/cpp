
#include <iostream>

using namespace std;

struct nok{
    char name[10];
    char last_name[10];
    int point;
    int money;
};

class Cuck{
    public:
        Cuck();
        Cuck(nok *,int );
        void gettter();
        double _median_(nok *, int );
    protected:
        nok *list;
        int len;
        
    public:
        virtual ~ Cuck();
        virtual double update_values();
        
        
        
        

};

class kuk_local_1 : public Cuck{
    public:
        kuk_local_1(nok* ,int );
       virtual ~kuk_local_1();
       
    public:
        virtual double update_values ();
        
        
};


class kuk_local_2 : public Cuck{
    public:
        kuk_local_2(nok* ,int );
       virtual ~kuk_local_2();
    public:
        virtual double update_values();

};

Cuck::Cuck(){
    cout<<"empty "<<endl;
}


Cuck::~Cuck(){
    cout<<"dTor_Cuck"<<endl;
}

kuk_local_1::~kuk_local_1(){
    cout<<"dTor_kuk_1"<<endl;
}


kuk_local_2::~kuk_local_2(){
    cout<<"dTor_kuk_2"<<endl;
}


Cuck::Cuck(nok *list ,int len){
    this->list=list;
    this->len=len;
    cout<<"Cuck_arguments_construct"<<endl;
}

kuk_local_1::kuk_local_1(nok *list,int len) : Cuck(list,len){
    cout<<"kuk_1_arguments_construct"<<endl;
}

kuk_local_2::kuk_local_2(nok *list,int len) : Cuck(list,len){
    cout<<"kuk_2_arguments_construct"<<endl;
}


void Cuck::gettter(){
    for (int i=0; i<this->len; i++)
        cout<<list[i].name
            <<endl
            <<list[i].last_name
            <<endl
            <<list[i].point
            <<endl
            <<list[i].money
            <<endl;
}


double Cuck :: _median_ (nok *list, int len){
    double sum=0;
    for (int i=0; i<len; i++)
        sum+=list[i].point;
            return sum/len;
            
}

    
    
double Cuck::update_values(){
    
    for (int i=0; i<this->len; i++)
        if (_median_(this->list,this->len)<this->list[i].point)
            this->list[i].money+=100000;

    return _median_(this->list, this->len);
}



double kuk_local_1::update_values(){
    for (int i=0; i<this->len; i++)
        if (60<this->list[i].point)
            list[i].money*=2;
    return _median_ (this->list, this->len);
                
}

double kuk_local_2::update_values(){
    for (int i=0; i<this->len; i++)
        if (this->list[i].point<40)
            this->list[i].money=0;
    return _median_(this->list, this->len);
                
}





int main(){
	_main_();
	return 0;
	
			}
			
			
			
void _main_(){
    int len;
    cout<<"Len~~~~> ";
    do{cin>>len;} while (len<2);
    nok list[len];
    for(int i=0; i<len; i++){
        cout<<"Person #"<<i+1;
        cin
            // >>list[i].name
            // >>list[i].last_name
            >>list[i].point
            >>list[i].money;
    }
    Cuck *This=new Cuck(list,len);        
          cout<<This->update_values()<<endl;
          This->gettter();
          delete This;
              
              This=new kuk_local_1(list,len);
              cout<<This->update_values()<<endl;
              This->gettter();
              delete This;This=0;
              
                This=new kuk_local_2(list,len);
                cout<<This->update_values()<<endl;
                    This->gettter();
                    delete This; This=0;
}


















