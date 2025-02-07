#include<iostream>
using namespace std;

// void show();
// int main(){
//     show();
// }
// void show(){
//     cout<<"Hello Kashif Maqbool:";
// }



// int main(){
//     void show();           //Function may be declared inside main function.
//     show();
// }
// void show(){
//     cout<<"Hello Kashif Maqbool:";
// }

void show(){
    cout<<"Hello Kashif Maqbool:";
}
int main(){
    //void show();       If functionis defined before main there is no need to declare it ouside or inside main
                        // because now it has become a global function.
    show();
}

