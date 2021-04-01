#include<iostream>
#include<cmath>
using namespace std;
int page(int total,int perpage){
    int paginate = 0;
    if(total > perpage){
        paginate = ceil (total / perpage);
        if(total % perpage < perpage && total % perpage != 0){
            paginate += 1;
        }
    }else if(total <= perpage){
         paginate += 1;
    }
    return paginate;
}
int main()
{
    int total,perpage;
        cin>>total>>perpage;
        cout<< page(total,perpage) <<endl;
    
}

