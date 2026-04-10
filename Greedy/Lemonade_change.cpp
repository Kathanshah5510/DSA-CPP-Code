#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> bills = {5,5,5,10,20};
    // bool canServeAll = false;
    // int fiveBill = 0, tenBill = 0;

    // for(int i = 0; i < bills.size(); i++){
    //     if(bills[i] == 5){
    //         fiveBill++;
    //         canServeAll = true;
    //     }
    //     else if(bills[i] == 10){
    //         if(fiveBill > 0){
    //             fiveBill--;
    //             tenBill++;
    //             canServeAll = true;
    //         }
    //         else{
    //             canServeAll = false;
    //             break;
    //         }
    //     }
    //     else if(bills[i] == 20){
    //         if(tenBill > 0 && fiveBill > 0){
    //             tenBill--;
    //             fiveBill--;
    //             canServeAll = true;
    //         }
    //         else if(fiveBill >= 3){
    //             fiveBill -= 3;
    //             canServeAll = true;
    //         }
    //         else{
    //             canServeAll = false;
    //             break;
    //         }
    //     }
    // }
    // if(canServeAll){
    //     cout << "Customer served successfully" << endl;
    // }
    // else{
    //     cout << "Customer cannot be served" << endl;
    // }

    int fiveBill = 0, tenBill = 0;
    for(int i = 0; i < bills.size(); i++){
        if(bills[i] == 5){
            fiveBill++;
        }
        else if(bills[i] == 10){
            if(fiveBill == 0){
                cout << "Customer cannot be served" << endl;
                return 0;
            }
            fiveBill--;
            tenBill++;
        }
        else if(bills[i] == 20){
            if(tenBill > 0 && fiveBill > 0){
                tenBill--;
                fiveBill--;
            }
            else if(fiveBill >= 3){
                fiveBill -= 3;
            }
            else{
                cout << "Customer cannot be served" << endl;
                return 0;
            }
        }
    }
    cout << "Customer served successfully" << endl;
    return 0;
}