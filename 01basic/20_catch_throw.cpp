#include<iostream>
#include<string.h>
using namespace std;
class error{
    int err_code;
    char *err_desc;
    public:
    error(int c,char *d)
    {
        error_code=c;
        err_desc=new char[strlen(d)];
        strcpy(err_desc,d);
    }
    void err_display(void)
    {
        cout<<"Error code:"<<err_code<<" description:"<<err_desc;
    };


    int main(){
        try{
            cout<<"Press any key: "
        }
    }
      }





      