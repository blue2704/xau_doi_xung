#include <iostream>
using namespace std ;

string kiem_tra_doi_xung(string input){
    int so_chu_cai = input.length() ;
    for(int i = 0; i < so_chu_cai/2 ; i++ ){
        if(input.at(i) != input.at(so_chu_cai-1-i)){
            return "chuoi " + input +" khong doi xung ";
        }
    }
    return "chuoi " + input +" doi xung ";
}


int main(){
    string input ;
    cout << "kiem tra xau: " ;
    cin >> input ;
    cout << kiem_tra_doi_xung(input) ;
}