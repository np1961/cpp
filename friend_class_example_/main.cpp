
#include <iostream>

using namespace std;

void _main_();

class Cuck{
public:
    Cuck(int *, int );
    Cuck();
   ~Cuck();
    Cuck(Cuck &);
    friend class local;
    
private:
    int *list;
    int len;
public:
    void settter();
    void gettter();
    
    void gettter(int );
    
};

class local{
   public:
        double med_values(Cuck );
        void med_up(Cuck );
};












//CCCCCCCCCCCCCCCCCCCCCCCCUUUUUUUUUUUUUUUUUUUCCCCCCCCCCCCCCKKKKKKKKKKKKKKKKKKKKKKKK



Cuck::Cuck(int *list,int len){
    this->list=list;
    this->len=len;
    }


Cuck :: Cuck(){
    cout<<"empty cuck "<<endl;
}


Cuck::~Cuck(){
    delete list; list=0;
    cout<<"d_tor__"<<endl;
}

Cuck::Cuck(Cuck &item){
    this->list=item.list;
    this->len=item.len;
    
}

void Cuck::settter(){
    cin>>this->len;
    this->list=new int[this->len];
    for(int i=0; i<this->len; i++)
        cin>>this->list[i];
}

void Cuck :: gettter(int values){
    cout<<values<<endl;
}

void Cuck :: gettter(){
    for (int i=0; i<this->len; i++)
        cout<<this->list[i]<<endl;
}


//LLLLLLLLOOOOOOOOOOOOOCCCCCCCCCCCAAAAAAAAAAAALLLLLLLLLLLLLLL
double local::med_values(Cuck elem){
    double sum=0;
    for (int i=0; i<elem.len; i++)
        sum+=elem.list[i];
            return sum/elem.len;
}

void local :: med_up(Cuck elem){
    
    for (int i=0; i<elem.len; i++)
        if (med_values(elem)<elem.list[i])
            elem.gettter(elem.list[i]);
}



int main(){
	_main_();
}

void _main_(){
    Cuck elem;
    elem.settter();
    elem.gettter();
    local type;
    type.med_up(elem);
    
}

