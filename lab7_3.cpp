#include <iostream>
#include <string>
using namespace std;
int main(){
    int age,height,prop;
    string status;
    cout << "age = ";
    cin >> age;
    if(age<=20){
        cout << "height = ";
        cin >> height;
        if(height<160){
            status = "UNFRIEND";
        }else{
            if(height<175){
                status = "FRIEND";
            }else{
                cout << "property = ";
                cin >> prop;
                if(prop>69000000){
                    status = "MARRIED";
                }else{
                    status = "ONE-NIGHT-STAND";
                }
            }
        }
    }else{
        if(age<30){
            cout << "property = ";
            cin >> prop;
            if(prop>10000000){
                status = "BEST FRIEND";
            }else{
                status = "UNFRIEND";
            }
        }else{
            status = "UNFRIEND";
        }
    }
    cout << status << "\n";
    return 0;
}